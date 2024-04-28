// Copyright 2023 FACEGOOD, Inc. All Rights Reserved.

#include "FgAnimNode_ControlRig.h"



#include "ControlRig.h"
#include "ControlRigComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstanceProxy.h"
#include "GameFramework/Actor.h"
#include "Animation/NodeMappingContainer.h"
#include "AnimationRuntime.h"
#include "Animation/AnimCurveUtils.h"
#include "Animation/AnimStats.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(FgAnimNode_ControlRig)

#if WITH_EDITOR
#include "Editor.h"
#endif

const TMap < FString, FString> versionChangeMap = {
	{"CTRL_C_tongue_tip","CTRL_C_tongue_tipMove"},
	{"CTRL_C_tongue_press","CTRL_C_tongue_press"},
	{"CTRL_C_tongue_roll","CTRL_C_tongue_bendTwist"},
	{"CTRL_C_tongue_narrowWide","CTRL_C_tongue_wideNarrow"},
	{"CTRL_C_tongue_inOut","CTRL_C_tongue_inOut"},
	{"CTRL_C_tongue","CTRL_C_tongue_move"}
};



void FFgAnimNode_ControlRig::PropagateInputProperties(const UObject* InSourceInstance)
{
	if (TargetInstance)
	{
		UControlRig* TargetControlRig = Cast<UControlRig>((UObject*)TargetInstance);
		if(TargetControlRig == nullptr)
		{
			return;
		}
		URigHierarchy* TargetHierarchy = TargetControlRig->GetHierarchy();
		if(TargetHierarchy == nullptr)
		{
			return;
		}
		
		FRigControlElement* ControlElementBase = TargetControlRig->FindControl(FName("CTRL_C_tongue_tipMove"));
		FString versionStatus = "520";
		if (ControlElementBase)
		{
			versionStatus = "521";
		}


		for (TFieldIterator<FProperty> prop(fgControlRigData.StaticStruct()); prop; ++prop) {
			auto name = prop->GetName();
			FProperty *data = *prop;


			if (versionStatus == "521")
			{
				if(versionChangeMap.Find(name)!=nullptr)
					name = *versionChangeMap.Find(name);
			}

			if (FRigControlElement* ControlElement = TargetControlRig->FindControl(FName(name)))
			{
				bool bIsValid = false;
				FRigControlValue Value;
				switch (ControlElement->Settings.ControlType)
				{
				case ERigControlType::Float:
				{
					if (ensure(CastField<FFloatProperty>(data)))
					{
						float v;
						fgControlRigData.get_property(FName(name), v);
						Value = FRigControlValue::Make<float>(v);
						bIsValid = true;
					}
					break;
				}
				case ERigControlType::Vector2D:
				{
					FStructProperty* StructProperty = CastField<FStructProperty>(data);
					if (ensure(StructProperty))
					{
						if (ensure(StructProperty->Struct == TBaseStructure<FVector2D>::Get()))
						{
							FVector2D v;
							fgControlRigData.get_property(FName(name), v);
							const FVector2D& SrcVector = v;
							Value = FRigControlValue::Make<FVector2D>(SrcVector);
							bIsValid = true;
						}
					}
					break;
				}
				default:
				{
					break;
					checkNoEntry();
				}
				}

				if (bIsValid)
				{
					TargetHierarchy->SetControlValue(ControlElement, Value, ERigControlValueType::Current);
				}
				continue;
			} 

			FRigVMExternalVariable Variable = TargetControlRig->GetPublicVariableByName(FName(*name));
			if (Variable.IsValid())
			{
				if (Variable.bIsReadOnly)
				{
					continue;
				}

				const uint8* SrcPtr = prop->ContainerPtrToValuePtr<uint8>(InSourceInstance);


				if (CastField<FBoolProperty>(data) != nullptr && Variable.TypeName == TEXT("bool"))
				{
					const bool Value = *(const bool*)SrcPtr;
					Variable.SetValue<bool>(Value);
				}
				else if (CastField<FFloatProperty>(data) != nullptr && Variable.TypeName == TEXT("float"))
				{
					const float Value = *(const float*)SrcPtr;
					Variable.SetValue<float>(Value);
				}
				else if (CastField<FDoubleProperty>(data) != nullptr && Variable.TypeName == TEXT("double"))
				{
					const double Value = *(const double*)SrcPtr;
					Variable.SetValue<double>(Value);
				}
				else if (CastField<FIntProperty>(data) != nullptr && Variable.TypeName == TEXT("int32"))
				{
					const int32 Value = *(const int32*)SrcPtr;
					Variable.SetValue<int32>(Value);
				}
				else if (CastField<FNameProperty>(data) != nullptr && Variable.TypeName == TEXT("FName"))
				{
					const FName Value = *(const FName*)SrcPtr;
					Variable.SetValue<FName>(Value);
				}
				else if (CastField<FNameProperty>(data) != nullptr && Variable.TypeName == TEXT("FString"))
				{
					const FString Value = *(const FString*)SrcPtr;
					Variable.SetValue<FString>(Value);
				}
				else if (FStructProperty* StructProperty = CastField<FStructProperty>(data))
				{
					if (StructProperty->Struct == Variable.TypeObject)
					{
						StructProperty->Struct->CopyScriptStruct(Variable.Memory, SrcPtr, 1);
					}
				}
				else if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(data))
				{
					if (ensure(ArrayProperty->SameType(Variable.Property)))
					{
						ArrayProperty->CopyCompleteValue(Variable.Memory, SrcPtr);
					}
				}
				else
				{
					ensureMsgf(false, TEXT("Property %s type %s not recognized"), *data->GetName(), *data->GetCPPType());
				}
			}



		}

		// First copy properties
		check(SourceProperties.Num() == DestProperties.Num());
		for (int32 PropIdx = 0; PropIdx < SourceProperties.Num(); ++PropIdx)
		{
			FProperty* CallerProperty = SourceProperties[PropIdx];

			if(FRigControlElement* ControlElement = TargetControlRig->FindControl(DestPropertyNames[PropIdx]))
			{
				const uint8* SrcPtr = CallerProperty->ContainerPtrToValuePtr<uint8>(InSourceInstance);

				bool bIsValid = false;
				FRigControlValue Value;
				switch(ControlElement->Settings.ControlType)
				{
					case ERigControlType::Bool:
					{
						if(ensure(CastField<FBoolProperty>(CallerProperty)))
						{
							Value = FRigControlValue::Make<bool>(*(bool*)SrcPtr);
							bIsValid = true;
						}
						break;
					}
					case ERigControlType::Float:
					{
						if(ensure(CastField<FFloatProperty>(CallerProperty)))
						{
							Value = FRigControlValue::Make<float>(*(float*)SrcPtr);
							bIsValid = true;
						}
						break;
					}
					case ERigControlType::Integer:
					{
						if(ensure(CastField<FIntProperty>(CallerProperty)))
						{
							Value = FRigControlValue::Make<int32>(*(int32*)SrcPtr);
							bIsValid = true;
						}
						break;
					}
					case ERigControlType::Vector2D:
					{
						FStructProperty* StructProperty = CastField<FStructProperty>(CallerProperty);
						if(ensure(StructProperty))
						{
							if(ensure(StructProperty->Struct == TBaseStructure<FVector2D>::Get()))
							{
								const FVector2D& SrcVector = *(FVector2D*)SrcPtr;
								Value = FRigControlValue::Make<FVector2D>(SrcVector);
								bIsValid = true;
							}
						}
						break;
					}
					case ERigControlType::Position:
					case ERigControlType::Scale:
					{
						FStructProperty* StructProperty = CastField<FStructProperty>(CallerProperty);
						if(ensure(StructProperty))
						{
							if(ensure(StructProperty->Struct == TBaseStructure<FVector>::Get()))
							{
								const FVector& SrcVector = *(FVector*)SrcPtr;  
								Value = FRigControlValue::Make<FVector>(SrcVector);
								bIsValid = true;
							}
						}
						break;
					}
					case ERigControlType::Rotator:
					{
						FStructProperty* StructProperty = CastField<FStructProperty>(CallerProperty);
						if(ensure(StructProperty))
						{
							if(ensure(StructProperty->Struct == TBaseStructure<FRotator>::Get()))
							{
								const FRotator& SrcRotator = *(FRotator*)SrcPtr;
								Value = FRigControlValue::Make<FRotator>(SrcRotator);
								bIsValid = true;
							}
						}
						break;
					}
					case ERigControlType::Transform:
					{
						FStructProperty* StructProperty = CastField<FStructProperty>(CallerProperty);
						if(ensure(StructProperty))
						{
							if(ensure(StructProperty->Struct == TBaseStructure<FTransform>::Get()))
							{
								const FTransform& SrcTransform = *(FTransform*)SrcPtr;  
								Value = FRigControlValue::Make<FTransform>(SrcTransform);
								bIsValid = true;
							}
						}
						break;
					}
					case ERigControlType::TransformNoScale:
					{
						FStructProperty* StructProperty = CastField<FStructProperty>(CallerProperty);
						if(ensure(StructProperty))
						{
							if(ensure(StructProperty->Struct == TBaseStructure<FTransform>::Get()))
							{
								const FTransform& SrcTransform = *(FTransform*)SrcPtr;  
								Value = FRigControlValue::Make<FTransformNoScale>(SrcTransform);
								bIsValid = true;
							}
						}
						break;
					}
					case ERigControlType::EulerTransform:
					{
						FStructProperty* StructProperty = CastField<FStructProperty>(CallerProperty);
						if(ensure(StructProperty))
						{
							if(ensure(StructProperty->Struct == TBaseStructure<FTransform>::Get()))
							{
								const FTransform& SrcTransform = *(FTransform*)SrcPtr;  
								Value = FRigControlValue::Make<FEulerTransform>(FEulerTransform(SrcTransform));
								bIsValid = true;
							}
						}
						break;
					}
					default:
					{
						checkNoEntry();
					}
				}

				if(bIsValid)
				{
					TargetHierarchy->SetControlValue(ControlElement, Value, ERigControlValueType::Current);
				}
				continue;
			}

			FRigVMExternalVariable Variable = TargetControlRig->GetPublicVariableByName(DestPropertyNames[PropIdx]);
			if(Variable.IsValid())
			{
				if (Variable.bIsReadOnly)
				{
					continue;
				}

				const uint8* SrcPtr = CallerProperty->ContainerPtrToValuePtr<uint8>(InSourceInstance);

				if (CastField<FBoolProperty>(CallerProperty) != nullptr && Variable.TypeName == TEXT("bool"))
				{
					const bool Value = *(const bool*)SrcPtr;
					Variable.SetValue<bool>(Value);
				}
				else if (CastField<FFloatProperty>(CallerProperty) != nullptr && Variable.TypeName == TEXT("float"))
				{
					const float Value = *(const float*)SrcPtr;
					Variable.SetValue<float>(Value);
				}
				else if (CastField<FDoubleProperty>(CallerProperty) != nullptr && Variable.TypeName == TEXT("double"))
				{
					const double Value = *(const double*)SrcPtr;
					Variable.SetValue<double>(Value);
				}
				else if (CastField<FIntProperty>(CallerProperty) != nullptr && Variable.TypeName == TEXT("int32"))
				{
					const int32 Value = *(const int32*)SrcPtr;
					Variable.SetValue<int32>(Value);
				}
				else if (CastField<FNameProperty>(CallerProperty) != nullptr && Variable.TypeName == TEXT("FName"))
				{
					const FName Value = *(const FName*)SrcPtr;
					Variable.SetValue<FName>(Value);
				}
				else if (CastField<FNameProperty>(CallerProperty) != nullptr && Variable.TypeName == TEXT("FString"))
				{
					const FString Value = *(const FString*)SrcPtr;
					Variable.SetValue<FString>(Value);
				}
				else if (FStructProperty* StructProperty = CastField<FStructProperty>(CallerProperty))
				{
					if (StructProperty->Struct == Variable.TypeObject)
					{
						StructProperty->Struct->CopyScriptStruct(Variable.Memory, SrcPtr, 1);
					}
				}
				else if(FArrayProperty* ArrayProperty = CastField<FArrayProperty>(CallerProperty))
				{
					if(ensure(ArrayProperty->SameType(Variable.Property)))
					{
						ArrayProperty->CopyCompleteValue(Variable.Memory, SrcPtr);
					}
				}
				else
				{
					ensureMsgf(false, TEXT("Property %s type %s not recognized"), *CallerProperty->GetName(), *CallerProperty->GetCPPType());
				}
			}
		}
	}
}
