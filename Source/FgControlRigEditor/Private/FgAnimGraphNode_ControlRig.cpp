// Copyright Epic Games, Inc. All Rights Reserved.

#include "FgAnimGraphNode_ControlRig.h"
#include "Kismet2/CompilerResultsLog.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SCheckBox.h"
#include "DetailWidgetRow.h"
#include "SVariableMappingWidget.h"
#include "ScopedTransaction.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "AnimationGraphSchema.h"
#if UE5_2
#include "RigVMBlueprintGeneratedClass.h"
#endif

#if UE5_1
#include "ControlRigBlueprintGeneratedClass.h"
#endif
//#include "ControlRigBlueprint.h"
#include "ControlRigDeveloper/Public/ControlRigBlueprint.h"
#include "Misc/DefaultValueHelper.h"
#include "Misc/AssertionMacros.h"
#include "UObject/Class.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(FgAnimGraphNode_ControlRig)

#define LOCTEXT_NAMESPACE "FgAnimGraphNode_ControlRig"

UFgAnimGraphNode_ControlRig::UFgAnimGraphNode_ControlRig(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText UFgAnimGraphNode_ControlRig::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	// display control rig here
	return LOCTEXT("FgAnimGraphNode_ControlRig_Title", "Fg Control Rig");
}

FText UFgAnimGraphNode_ControlRig::GetTooltipText() const
{
	// display control rig here
	return LOCTEXT("FgAnimGraphNode_ControlRig_Tooltip", "Fg Evaluates a control rig");
}

void UFgAnimGraphNode_ControlRig::CreateCustomPins(TArray<UEdGraphPin*>* OldPins)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

		// we do this to refresh input variables
		RebuildExposedProperties();

	// Grab the SKELETON class here as when we are reconstructed during during BP compilation
	// the full generated class is not yet present built.
	UClass* TargetClass = GetTargetSkeletonClass();

	if (!TargetClass)
	{
		// Nothing to search for properties
		return;
	}

	// Need the schema to extract pin types
	const UEdGraphSchema_K2* Schema = CastChecked<UEdGraphSchema_K2>(GetSchema());

	// Default anim schema for util funcions
	const UAnimationGraphSchema* AnimGraphDefaultSchema = GetDefault<UAnimationGraphSchema>();

#if WITH_EDITOR

	// sustain the current set of custom pins - we'll refrain from changing the node until post load is complete
#if UE5_2
	if (URigVMBlueprintGeneratedClass* GeneratedClass = Cast<URigVMBlueprintGeneratedClass>(GetTargetClass()))
	{
#endif
#if UE5_1
		if (UControlRigBlueprintGeneratedClass* GeneratedClass = Cast<UControlRigBlueprintGeneratedClass>(GetTargetClass()))
		{
#endif
			if (UControlRigBlueprint* RigBlueprint = Cast<UControlRigBlueprint>(GeneratedClass->ClassGeneratedBy))
			{
				if (RigBlueprint->HasAllFlags(RF_NeedPostLoad))
				{
					if (OldPins)
					{
						for (UEdGraphPin* OldPin : *OldPins)
						{
							// do not rebuild sub pins as they will be treated after in UK2Node::RestoreSplitPins
							const bool bIsSubPin = OldPin->ParentPin && OldPin->ParentPin->bHidden;
							if (bIsSubPin)
							{
								continue;
							}

							bool bFound = false;
							for (UEdGraphPin* CurrentPin : Pins)
							{
								if (CurrentPin->GetFName() == OldPin->GetFName())
								{
									if (CurrentPin->PinType == OldPin->PinType ||
										AnimGraphDefaultSchema->ArePinTypesCompatible(CurrentPin->PinType, OldPin->PinType))
									{
										bFound = true;
										break;
									}

								}
							}

							if (!bFound)
							{
								FName PropertyName = OldPin->GetFName();
								UEdGraphPin* NewPin = CreatePin(EEdGraphPinDirection::EGPD_Input, OldPin->PinType, PropertyName);
								NewPin->PinFriendlyName = OldPin->PinFriendlyName;

								// Newly created pin does not have an auto generated default value, so we need to generate one here
								// Missing the auto-gen default would cause UEdGraphPin::MovePersistentDataFromOldPin to override
								// the actual default value with the empty auto-gen default, causing BP compiler to complain
								// This is similar to how the following two functions create and initialize new pins, create first 
								// and then set an auto-gen default
								// FOptionalPinManager::CreateVisiblePins()
								// FAnimBlueprintNodeOptionalPinManager::PostInitNewPin()
								AnimGraphDefaultSchema->SetPinAutogeneratedDefaultValueBasedOnType(NewPin);

								AnimGraphDefaultSchema->ResetPinToAutogeneratedDefaultValue(NewPin, false);

								CustomizePinData(NewPin, PropertyName, INDEX_NONE);
							}
						}
					}
					return;
				}
			}
		}
#endif

		// We'll track the names we encounter by removing from this list, if anything remains the properties
		// have been removed from the target class and we should remove them too
		TSet<FName> BeginExposableNames;
		TSet<FName> CurrentlyExposedNames;
		for (const FOptionalPinFromProperty& OptionalPin : CustomPinProperties)
		{
			BeginExposableNames.Add(OptionalPin.PropertyName);

			if (OptionalPin.bShowPin)
			{
				CurrentlyExposedNames.Add(OptionalPin.PropertyName);
			}
		}

		for (TPair<FName, FRigVMExternalVariable>& VariablePair : InputVariables)
		{
			FName PropertyName = VariablePair.Key;
			BeginExposableNames.Remove(PropertyName);

			if (CurrentlyExposedNames.Contains(PropertyName))
			{
				FRigVMExternalVariable& Variable = VariablePair.Value;

				FEdGraphPinType PinType = RigVMTypeUtils::PinTypeFromExternalVariable(Variable);
				if (!PinType.PinCategory.IsValid())
				{
					continue;
				}

				UEdGraphPin* NewPin = CreatePin(EEdGraphPinDirection::EGPD_Input, PinType, PropertyName);
				NewPin->PinFriendlyName = FText::FromName(PropertyName);

				// Newly created pin does not have an auto generated default value, so we need to generate one here
				// Missing the auto-gen default would cause UEdGraphPin::MovePersistentDataFromOldPin to override
				// the actual default value with the empty auto-gen default, causing BP compiler to complain
				// This is similar to how the following two functions create and initialize new pins, create first 
				// and then set an auto-gen default
				// FOptionalPinManager::CreateVisiblePins()
				// FAnimBlueprintNodeOptionalPinManager::PostInitNewPin()
				AnimGraphDefaultSchema->SetPinAutogeneratedDefaultValueBasedOnType(NewPin);

				// We cant interrogate CDO here as we may be mid-compile, so we can only really
				// reset to the autogenerated default.
				AnimGraphDefaultSchema->ResetPinToAutogeneratedDefaultValue(NewPin, false);

				// Extract default values from the Target Control Rig if possible
				// Memory could be null if Control Rig is compiling, so only do it if Memory is not null
				if (Variable.IsValid(false))
				{

#if UE5_2
					if (URigVMBlueprintGeneratedClass* GeneratedClass = Cast<URigVMBlueprintGeneratedClass>(GetTargetClass()))
					{
#endif
#if UE5_1
						if (UControlRigBlueprintGeneratedClass* GeneratedClass = Cast<UControlRigBlueprintGeneratedClass>(GetTargetClass()))
						{
#endif
							for (TFieldIterator<FProperty> PropertyIt(GeneratedClass); PropertyIt; ++PropertyIt)
							{
								if (PropertyIt->GetFName() == PropertyName)
								{
									FString DefaultValue;

									// The format the graph pins editor use is different of what property exporter produces, so we use BlueprintEditorUtils to generate the default string
									// Variable.Memory here points to the corresponding property in the Control Rig BP CDO, it was initialized in UFgAnimGraphNode_ControlRig::RebuildExposedProperties 
									FBlueprintEditorUtils::PropertyValueToString_Direct(*PropertyIt, Variable.Memory, DefaultValue, this);

									if (!DefaultValue.IsEmpty())
									{
										AnimGraphDefaultSchema->TrySetDefaultValue(*NewPin, DefaultValue);
									}
								}
							}
						}
				}

					// sustain the current set of custom pins - we'll refrain from changing the node until post load is complete 
					CustomizePinData(NewPin, PropertyName, INDEX_NONE);
			}
		}

			if (const UClass* ControlRigClass = GetTargetClass())
			{
				if (UControlRig* CDO = ControlRigClass->GetDefaultObject<UControlRig>())
				{
					if (const URigHierarchy* Hierarchy = CDO->GetHierarchy())
					{
						Hierarchy->ForEach<FRigControlElement>([&](FRigControlElement* ControlElement) -> bool
							{
								if (Hierarchy->IsAnimatable(ControlElement))
								{
									const FName ControlName = ControlElement->GetName();
									BeginExposableNames.Remove(ControlName);

									if (CurrentlyExposedNames.Contains(ControlName))
									{
										const FEdGraphPinType PinType = Hierarchy->GetControlPinType(ControlElement);
										if (!PinType.PinCategory.IsValid())
										{
											return true;
										}

										UEdGraphPin* NewPin = CreatePin(EEdGraphPinDirection::EGPD_Input, PinType, ControlName);
										NewPin->PinFriendlyName = FText::FromName(ControlElement->GetName());

										// Newly created pin does not have an auto generated default value, so we need to generate one here
										// Missing the auto-gen default would cause UEdGraphPin::MovePersistentDataFromOldPin to override
										// the actual default value with the empty auto-gen default, causing BP compiler to complain
										// This is similar to how the following two functions create and initialize new pins, create first 
										// and then set an auto-gen default
										// FOptionalPinManager::CreateVisiblePins()
										// FAnimBlueprintNodeOptionalPinManager::PostInitNewPin()
										AnimGraphDefaultSchema->SetPinAutogeneratedDefaultValueBasedOnType(NewPin);

										// We cant interrogate CDO here as we may be mid-compile, so we can only really
										// reset to the autogenerated default.
										AnimGraphDefaultSchema->ResetPinToAutogeneratedDefaultValue(NewPin, false);

										// Extract default values from the Target Control Rig if possible
										const FString DefaultValue = Hierarchy->GetControlPinDefaultValue(ControlElement, true);
										if (!DefaultValue.IsEmpty())
										{
											AnimGraphDefaultSchema->TrySetDefaultValue(*NewPin, DefaultValue);
										}

										// sustain the current set of custom pins - we'll refrain from changing the node until post load is complete 
										CustomizePinData(NewPin, ControlName, INDEX_NONE);
									}
								}

								return true;
							});
					}
				}
			}

			// Remove any properties that no longer exist on the target class
			for (FName& RemovedPropertyName : BeginExposableNames)
			{
				CustomPinProperties.RemoveAll([RemovedPropertyName](const FOptionalPinFromProperty& InOptionalPin) { return InOptionalPin.PropertyName == RemovedPropertyName; });
			}
}

		void UFgAnimGraphNode_ControlRig::ValidateAnimNodeDuringCompilation(USkeleton * ForSkeleton, FCompilerResultsLog & MessageLog)
		{
			if (UClass* TargetClass = GetTargetClass())
			{
				if (UControlRigBlueprint* Blueprint = Cast<UControlRigBlueprint>(TargetClass->ClassGeneratedBy))
				{
					URigHierarchy* Hierarchy = Blueprint->Hierarchy;
					if (ForSkeleton)
					{
						const FReferenceSkeleton& ReferenceSkeleton = ForSkeleton->GetReferenceSkeleton();
						const TArray<FMeshBoneInfo>& BoneInfos = ReferenceSkeleton.GetRefBoneInfo();

						for (const FMeshBoneInfo& BoneInfo : BoneInfos)
						{
							const FRigElementKey BoneKey(BoneInfo.Name, ERigElementType::Bone);
							if (Hierarchy->Contains(BoneKey))
							{
								const FRigElementKey ParentKey = Hierarchy->GetFirstParent(BoneKey);

								FName DesiredParentName = NAME_None;
								if (BoneInfo.ParentIndex != INDEX_NONE)
								{
									DesiredParentName = BoneInfos[BoneInfo.ParentIndex].Name;
								}

								if (DesiredParentName != ParentKey.Name)
								{
									FString Message = FString::Printf(TEXT("@@ - Hierarchy discrepancy for bone '%s' - different parents on Control Rig vs SkeletalMesh."), *BoneInfo.Name.ToString());
									MessageLog.Warning(*Message, this);
								}
							}
						}
					}
				}
			}

			Super::ValidateAnimNodeDuringCompilation(ForSkeleton, MessageLog);
		}

		void UFgAnimGraphNode_ControlRig::RebuildExposedProperties()
		{
			DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()
#if UE5_2
				if (URigVMBlueprintGeneratedClass* TargetClass = Cast<URigVMBlueprintGeneratedClass>(GetTargetClass()))
				{
#endif
#if UE5_1
					if (UControlRigBlueprintGeneratedClass* TargetClass = Cast<UControlRigBlueprintGeneratedClass>(GetTargetClass()))
					{
#endif
						if (UControlRigBlueprint* RigBlueprint = Cast<UControlRigBlueprint>(TargetClass->ClassGeneratedBy))
						{
							if (RigBlueprint->HasAllFlags(RF_NeedPostLoad))
							{
								return;
							}
						}
					}

					TSet<FName> OldOptionalPinNames;
					TSet<FName> OldExposedPinNames;
					for (const FOptionalPinFromProperty& OptionalPin : CustomPinProperties)
					{
						OldOptionalPinNames.Add(OptionalPin.PropertyName);

						if (OptionalPin.bShowPin)
						{
							OldExposedPinNames.Add(OptionalPin.PropertyName);
						}
					}
					CustomPinProperties.Empty();

					// go through exposed properties, and clean up
					GetVariables(true, InputVariables);
					// we still update OUtputvariables
					// we don't want output to be exposed
					GetVariables(false, OutputVariables);

					// clear IO variables that don't exist anymore
					auto ClearInvalidMapping = [](const TMap<FName, FRigVMExternalVariable>& InVariables, TMap<FName, FName>& InOutMapping)
					{
						TArray<FName> KeyArray;
						InOutMapping.GenerateKeyArray(KeyArray);

						for (int32 Index = 0; Index < KeyArray.Num(); ++Index)
						{
							// if this input doesn't exist anymore
							if (!InVariables.Contains(KeyArray[Index]))
							{
								InOutMapping.Remove(KeyArray[Index]);
							}
						}
					};

					//ClearInvalidMapping(InputVariables, Node.InputMapping);
					//ClearInvalidMapping(OutputVariables, Node.OutputMapping);

					auto MakeOptionalPin = [&OldExposedPinNames](FName InPinName)-> FOptionalPinFromProperty
					{
						FOptionalPinFromProperty OptionalPin;
						OptionalPin.PropertyName = InPinName;
						OptionalPin.bShowPin = OldExposedPinNames.Contains(InPinName);
						OptionalPin.bCanToggleVisibility = true;
						OptionalPin.bIsOverrideEnabled = false;
						return OptionalPin;
					};

					for (auto Iter = InputVariables.CreateConstIterator(); Iter; ++Iter)
					{
						CustomPinProperties.Add(MakeOptionalPin(Iter.Key()));
					}

					// also add all of the controls
					if (const UClass* TargetClass = GetTargetClass())
					{
						if (UControlRig* CDO = TargetClass->GetDefaultObject<UControlRig>())
						{
							if (const URigHierarchy* Hierarchy = CDO->GetHierarchy())
							{
								Hierarchy->ForEach<FRigControlElement>([&](const FRigControlElement* ControlElement) -> bool
									{
										if (Hierarchy->IsAnimatable(ControlElement))
										{
											const FName ControlName = ControlElement->GetName();
											CustomPinProperties.Add(MakeOptionalPin(ControlName));
										}
										return true;
									});
							}
						}
					}
		}

			bool UFgAnimGraphNode_ControlRig::IsInputProperty(const FName & PropertyName) const
			{
				DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

					// this is true for both input variables and controls
					return InputVariables.Contains(PropertyName) || !OutputVariables.Contains(PropertyName);
			}

			FRigControlElement* UFgAnimGraphNode_ControlRig::FindControlElement(const FName & InControlName) const
			{
				if (const UClass* ControlRigClass = GetTargetClass())
				{
					if (UControlRig* CDO = ControlRigClass->GetDefaultObject<UControlRig>())
					{
						if (const URigHierarchy* Hierarchy = CDO->GetHierarchy())
						{
							return (FRigControlElement*)Hierarchy->Find<FRigControlElement>(FRigElementKey(InControlName, ERigElementType::Control));
						}
					}
				}
				return nullptr;
			}

			bool UFgAnimGraphNode_ControlRig::IsAvailableToMapToCurve(const FName & PropertyName, bool bInput) const
			{
				DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

					// find if input or output
					// ensure it could convert to float
					const FRigVMExternalVariable* Variable = (bInput) ? InputVariables.Find(PropertyName) : OutputVariables.Find(PropertyName);
				if (Variable)
				{
					return Variable->TypeName == TEXT("float");
				}

				if (const FRigControlElement* ControlElement = FindControlElement(PropertyName))
				{
					return ControlElement->Settings.ControlType == ERigControlType::Float;
				}

				return ensure(false);
			}

			bool UFgAnimGraphNode_ControlRig::IsPropertyExposeEnabled(FName PropertyName) const
			{
				DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

					// if known exposable, and and if it hasn't been exposed yet
					if (CustomPinProperties.ContainsByPredicate([PropertyName](const FOptionalPinFromProperty& InOptionalPin) { return InOptionalPin.PropertyName == PropertyName; }))
					{
						return IsInputProperty(PropertyName);
					}

				return false;
			}

			ECheckBoxState UFgAnimGraphNode_ControlRig::IsPropertyExposed(FName PropertyName) const
			{
				if (CustomPinProperties.ContainsByPredicate([PropertyName](const FOptionalPinFromProperty& InOptionalPin) { return InOptionalPin.bShowPin && InOptionalPin.PropertyName == PropertyName; }))
				{
					return ECheckBoxState::Checked;
				}

				return ECheckBoxState::Unchecked;
			}

			void UFgAnimGraphNode_ControlRig::OnPropertyExposeCheckboxChanged(ECheckBoxState NewState, FName PropertyName)
			{
				DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

					FOptionalPinFromProperty* FoundPin = CustomPinProperties.FindByPredicate([PropertyName](const FOptionalPinFromProperty& InOptionalPin)
						{
							return InOptionalPin.PropertyName == PropertyName;
						});

				if (FoundPin)
				{
					FoundPin->bShowPin = !FoundPin->bShowPin;

					FGuardValue_Bitfield(bDisableOrphanPinSaving, true);
					ReconstructNode();

					// see if any of my child has the mapping, and clear them
					if (NewState == ECheckBoxState::Checked)
					{
						FScopedTransaction Transaction(LOCTEXT("PropertyExposedChanged", "Expose Property to Pin"));
						Modify();

						FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(GetBlueprint());

						bool bInput = IsInputProperty(PropertyName);
						// if checked, we clear mapping
						// and unclear all children
						Node.SetIOMapping(bInput, PropertyName, NAME_None);
					}
				}
			}

			void UFgAnimGraphNode_ControlRig::CustomizeDetails(IDetailLayoutBuilder & DetailBuilder)
			{
				DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

					Super::CustomizeDetails(DetailBuilder);

				// We dont allow multi-select here
				if (DetailBuilder.GetSelectedObjects().Num() > 1)
				{
					return;
				}

				// input/output exposure feature START
				RebuildExposedProperties();

				IDetailCategoryBuilder& InputCategoryBuilder = DetailBuilder.EditCategory(FName(TEXT("Input")));

				FDetailWidgetRow& InputWidgetRow = InputCategoryBuilder.AddCustomRow(FText::FromString(TEXT("Input")));
				InputWidgetRow.WholeRowContent()
					[
						SNew(SVariableMappingWidget)
						.OnVariableMappingChanged(FOnVariableMappingChanged::CreateUObject(this, &UFgAnimGraphNode_ControlRig::OnVariableMappingChanged, true))
					.OnGetVariableMapping(FOnGetVariableMapping::CreateUObject(this, &UFgAnimGraphNode_ControlRig::GetVariableMapping, true))
					.OnGetAvailableMapping(FOnGetAvailableMapping::CreateUObject(this, &UFgAnimGraphNode_ControlRig::GetAvailableMapping, true))
					.OnCreateVariableMapping(FOnCreateVariableMapping::CreateUObject(this, &UFgAnimGraphNode_ControlRig::CreateVariableMapping, true))
					.OnVariableOptionAvailable(FOnVarOptionAvailable::CreateUObject(this, &UFgAnimGraphNode_ControlRig::IsAvailableToMapToCurve, true))
					.OnPinGetCheckState(FOnPinGetCheckState::CreateUObject(this, &UFgAnimGraphNode_ControlRig::IsPropertyExposed))
					.OnPinCheckStateChanged(FOnPinCheckStateChanged::CreateUObject(this, &UFgAnimGraphNode_ControlRig::OnPropertyExposeCheckboxChanged))
					.OnPinIsEnabledCheckState(FOnPinIsCheckEnabled::CreateUObject(this, &UFgAnimGraphNode_ControlRig::IsPropertyExposeEnabled))
					];

				IDetailCategoryBuilder& OutputCategoryBuilder = DetailBuilder.EditCategory(FName(TEXT("Output")));
				FDetailWidgetRow& OutputWidgetRow = OutputCategoryBuilder.AddCustomRow(FText::FromString(TEXT("Output")));
				OutputWidgetRow.WholeRowContent()
					[
						SNew(SVariableMappingWidget)
						.OnVariableMappingChanged(FOnVariableMappingChanged::CreateUObject(this, &UFgAnimGraphNode_ControlRig::OnVariableMappingChanged, false))
					.OnGetVariableMapping(FOnGetVariableMapping::CreateUObject(this, &UFgAnimGraphNode_ControlRig::GetVariableMapping, false))
					.OnGetAvailableMapping(FOnGetAvailableMapping::CreateUObject(this, &UFgAnimGraphNode_ControlRig::GetAvailableMapping, false))
					.OnCreateVariableMapping(FOnCreateVariableMapping::CreateUObject(this, &UFgAnimGraphNode_ControlRig::CreateVariableMapping, false))
					.OnVariableOptionAvailable(FOnVarOptionAvailable::CreateUObject(this, &UFgAnimGraphNode_ControlRig::IsAvailableToMapToCurve, false))
					.OnPinGetCheckState(FOnPinGetCheckState::CreateUObject(this, &UFgAnimGraphNode_ControlRig::IsPropertyExposed))
					.OnPinCheckStateChanged(FOnPinCheckStateChanged::CreateUObject(this, &UFgAnimGraphNode_ControlRig::OnPropertyExposeCheckboxChanged))
					.OnPinIsEnabledCheckState(FOnPinIsCheckEnabled::CreateUObject(this, &UFgAnimGraphNode_ControlRig::IsPropertyExposeEnabled))
					];

				TSharedRef<IPropertyHandle> ClassHandle = DetailBuilder.GetProperty(TEXT("Node.ControlRigClass"), GetClass());
				if (ClassHandle->IsValidHandle())
				{
					ClassHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateUObject(this, &UFgAnimGraphNode_ControlRig::OnInstanceClassChanged, &DetailBuilder));
				}

				// input/output exposure feature END

				// alpha property blending support START
				TSharedRef<IPropertyHandle> NodeHandle = DetailBuilder.GetProperty(FName(TEXT("Node")), GetClass());

				/*if (Node.AlphaInputType != EAnimAlphaInputType::Bool)
				{
					DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_ControlRig, bAlphaBoolEnabled)));
					DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_ControlRig, AlphaBoolBlend)));
				}

				if (Node.AlphaInputType != EAnimAlphaInputType::Float)
				{
					DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_ControlRig, Alpha)));
					DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_ControlRig, AlphaScaleBias)));
				}

				if (Node.AlphaInputType != EAnimAlphaInputType::Curve)
				{
					DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_ControlRig, AlphaCurveName)));
				}

				if ((Node.AlphaInputType != EAnimAlphaInputType::Float)
					&& (Node.AlphaInputType != EAnimAlphaInputType::Curve))
				{
					DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_ControlRig, AlphaScaleBiasClamp)));
				}*/
				// alpha property blending support END
			}

			void UFgAnimGraphNode_ControlRig::GetVariables(bool bInput, TMap<FName, FRigVMExternalVariable>&OutVariables) const
			{
				DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

					OutVariables.Reset();


#if UE5_2
				if (URigVMBlueprintGeneratedClass* TargetClass = Cast<URigVMBlueprintGeneratedClass>(GetTargetClass()))
				{
#endif
#if UE5_1
					if (UControlRigBlueprintGeneratedClass* TargetClass = Cast<UControlRigBlueprintGeneratedClass>(GetTargetClass()))
					{
#endif
						if (UControlRigBlueprint* RigBlueprint = Cast<UControlRigBlueprint>(TargetClass->ClassGeneratedBy))
						{
							//RigBlueprint->CleanupVariables();
							UControlRig* ControlRig = TargetClass->GetDefaultObject<UControlRig>();
							if (ControlRig)
							{
								const TArray<FRigVMExternalVariable>& PublicVariables = ControlRig->GetPublicVariables();
								for (const FRigVMExternalVariable& PublicVariable : PublicVariables)
								{
									if (!bInput || !PublicVariable.bIsReadOnly)
									{
										OutVariables.Add(PublicVariable.Name, PublicVariable);
									}
								}
							}
						}
					}
			}

				void UFgAnimGraphNode_ControlRig::OnVariableMappingChanged(const FName & PathName, const FName & Curve, bool bInput)
				{
					DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

						FScopedTransaction Transaction(LOCTEXT("VariableMappingChanged", "Change Variable Mapping"));
					Modify();

					FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(GetBlueprint());

					// @todo: this is not enough when we start breaking down struct
					Node.SetIOMapping(bInput, PathName, Curve);
				}

				FName UFgAnimGraphNode_ControlRig::GetVariableMapping(const FName & PathName, bool bInput)
				{
					DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

						// @todo: this is not enough when we start breaking down struct
						return Node.GetIOMapping(bInput, PathName);
				}

				void UFgAnimGraphNode_ControlRig::GetAvailableMapping(const FName & PathName, TArray<FName>&OutArray, bool bInput)
				{
					DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

						UAnimBlueprint* AnimBP = CastChecked<UAnimBlueprint>(GetBlueprint());
					USkeleton* TargetSkeleton = AnimBP->TargetSkeleton;
					OutArray.Reset();
					if (TargetSkeleton)
					{
						const FSmartNameMapping* CurveMapping = TargetSkeleton->GetSmartNameContainer(USkeleton::AnimCurveMappingName);
						CurveMapping->FillNameArray(OutArray);

						// also add all controls
						if (const UClass* ControlRigClass = GetTargetClass())
						{
							if (UControlRig* CDO = ControlRigClass->GetDefaultObject<UControlRig>())
							{
								if (const URigHierarchy* Hierarchy = CDO->GetHierarchy())
								{
									Hierarchy->ForEach<FRigControlElement>([&](FRigControlElement* ControlElement) -> bool
										{
											if (Hierarchy->IsAnimatable(ControlElement))
											{
												OutArray.Add(ControlElement->GetName());
											}
											return true;
										});
								}
							}
						}

						// we want to exclude anything that has been mapped already
						TArray<FName> InputMapping, OutputMapping;
						//Node.InputMapping.GenerateValueArray(InputMapping);
						//Node.OutputMapping.GenerateValueArray(OutputMapping);

						// I have to remove Input/Output Curves from OutArray
						for (int32 Index = 0; Index < OutArray.Num(); ++Index)
						{
							const FName& Item = OutArray[Index];

							if (InputMapping.Contains(Item))
							{
								OutArray.RemoveAt(Index);
								--Index;
							}
							else if (OutputMapping.Contains(Item))
							{
								OutArray.RemoveAt(Index);
								--Index;
							}
						}
					}
				}

				void UFgAnimGraphNode_ControlRig::CreateVariableMapping(const FString & FilteredText, TArray< TSharedPtr<FVariableMappingInfo> >&OutArray, bool bInput)
				{
					DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

						// should have latest
						OutArray.Reset();

					bool bDoFiltering = !FilteredText.IsEmpty();
					const TMap<FName, FRigVMExternalVariable>& Variables = (bInput) ? InputVariables : OutputVariables;
					for (auto Iter = Variables.CreateConstIterator(); Iter; ++Iter)
					{
						const FName& Name = Iter.Key();
						const FString& DisplayName = Name.ToString();

						const FString MappedName = GetVariableMapping(Name, bInput).ToString();
						// make sure it doesn't fit any of them
						if (!bDoFiltering ||
							(DisplayName.Contains(FilteredText) || MappedName.Contains(FilteredText)))
						{
							TSharedRef<FVariableMappingInfo> Item = FVariableMappingInfo::Make(Iter.Key());

							FVariableMappingInfo& ItemRaw = Item.Get();
							FString PathString = ItemRaw.GetPathName().ToString();
							FString DisplayString = ItemRaw.GetDisplayName();

							OutArray.Add(Item);
						}
					}

					if (bInput)
					{
						// add all controls
						if (const UClass* ControlRigClass = GetTargetClass())
						{
							if (UControlRig* CDO = ControlRigClass->GetDefaultObject<UControlRig>())
							{
								if (const URigHierarchy* Hierarchy = CDO->GetHierarchy())
								{
									Hierarchy->ForEach<FRigControlElement>([&](FRigControlElement* ControlElement) -> bool
										{
											if (Hierarchy->IsAnimatable(ControlElement))
											{
												const FName ControlName = ControlElement->GetName();
												const FString& DisplayName = ControlName.ToString();

												if (!bDoFiltering || DisplayName.Contains(FilteredText))
												{
													TSharedRef<FVariableMappingInfo> Item = FVariableMappingInfo::Make(ControlName);
													OutArray.Add(Item);
												}
											}
											return true;
										});
								}
							}
						}
					}
				}

				void UFgAnimGraphNode_ControlRig::PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent)
				{
					DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()

						Super::PostEditChangeProperty(PropertyChangedEvent);

					bool bRequiresNodeReconstruct = false;
					FProperty* ChangedProperty = PropertyChangedEvent.Property;

					if (ChangedProperty)
					{
						//if (ChangedProperty->GetFName() == GET_MEMBER_NAME_CHECKED(FAnimNode_ControlRig, ControlRigClass))
						//{
						//	bRequiresNodeReconstruct = true;
						//	RebuildExposedProperties();
						//}

						//if (ChangedProperty->GetFName() == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_ControlRig, AlphaInputType))
						//{
						//	FScopedTransaction Transaction(LOCTEXT("ChangeAlphaInputType", "Change Alpha Input Type"));
						//	Modify();

						//	// Break links to pins going away
						//	/*for (int32 PinIndex = 0; PinIndex < Pins.Num(); ++PinIndex)
						//	{
						//		UEdGraphPin* Pin = Pins[PinIndex];
						//		if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_ControlRig, Alpha))
						//		{
						//			if (Node.AlphaInputType != EAnimAlphaInputType::Float)
						//			{
						//				Pin->BreakAllPinLinks();
						//				PropertyBindings.Remove(Pin->PinName);
						//			}
						//		}
						//		else if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_ControlRig, bAlphaBoolEnabled))
						//		{
						//			if (Node.AlphaInputType != EAnimAlphaInputType::Bool)
						//			{
						//				Pin->BreakAllPinLinks();
						//				PropertyBindings.Remove(Pin->PinName);
						//			}
						//		}
						//		else if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_ControlRig, AlphaCurveName))
						//		{
						//			if (Node.AlphaInputType != EAnimAlphaInputType::Curve)
						//			{
						//				Pin->BreakAllPinLinks();
						//				PropertyBindings.Remove(Pin->PinName);
						//			}
						//		}
						//	}*/

						//	bRequiresNodeReconstruct = true;
						//}
					}

					if (bRequiresNodeReconstruct)
					{
						ReconstructNode();
						FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(GetBlueprint());
					}
				}

				void UFgAnimGraphNode_ControlRig::PostReconstructNode()
				{
					// Fix default values that were serialized directly with property exported strings (not valid for pin editors)
#if WITH_EDITOR
					if (!IsTemplate())
					{
						static UScriptStruct* VectorStruct = TBaseStructure<FVector>::Get();
						static UScriptStruct* TransformStruct = TBaseStructure<FTransform>::Get();

						// fix up any pin data if it needs to 
						for (UEdGraphPin* CurrentPin : Pins)
						{
							const FName& PinCategory = CurrentPin->PinType.PinCategory;

							// Target only struct types vector and transform 
							// For rotator, if it was created with incorect format, it was serialized with DefaultValue = L"0, 0, 0", so it can not be corrected without risking changing users value
							if (PinCategory == UEdGraphSchema_K2::PC_Struct)
							{
								const UAnimationGraphSchema* AnimGraphDefaultSchema = GetDefault<UAnimationGraphSchema>();
								const FName& PinName = CurrentPin->GetFName();

								if (CurrentPin->PinType.PinSubCategoryObject == VectorStruct)
								{
									// If InitFromString succeeds, it has bad format, re-encode
									FVector FixVector = FVector::ZeroVector;
									if (FixVector.InitFromString(CurrentPin->DefaultValue))
									{
										const FString DefaultValue = FString::Printf(TEXT("%f,%f,%f"), FixVector.X, FixVector.Y, FixVector.Z);
										AnimGraphDefaultSchema->TrySetDefaultValue(*CurrentPin, DefaultValue);
									}
								}
								else if (CurrentPin->PinType.PinSubCategoryObject == TransformStruct)
								{
									// If pin was serialized with bad format, transforms would stay empty, so try to get the value from ControlRig or set to Identity as last resort
									if (CurrentPin->DefaultValue.IsEmpty())
									{
										FTransform FixTransform = FTransform::Identity;
										FString DefaultValue = FixTransform.ToString();

										const FRigVMExternalVariable* RigVMExternalVariable = (CurrentPin->Direction == EGPD_Input) ?
											InputVariables.Find(CurrentPin->GetFName()) : (CurrentPin->Direction == EGPD_Output) ?
											OutputVariables.Find(CurrentPin->GetFName()) : nullptr;

										if (RigVMExternalVariable != nullptr && RigVMExternalVariable->IsValid())
										{
#if UE5_2
											if (URigVMBlueprintGeneratedClass* GeneratedClass = Cast<URigVMBlueprintGeneratedClass>(GetTargetClass()))
											{
#endif
#if UE5_1
												if (UControlRigBlueprintGeneratedClass* GeneratedClass = Cast<UControlRigBlueprintGeneratedClass>(GetTargetClass()))
												{
#endif
													const FName& PropertyName = CurrentPin->GetFName();

													for (TFieldIterator<FProperty> PropertyIt(GeneratedClass); PropertyIt; ++PropertyIt)
													{
														if (PropertyIt->GetFName() == PropertyName)
														{
															// The format the graph pins editor use is different of what property exporter produces, so we use BlueprintEditorUtils to generate the default string
															// Variable.Memory here points to the corresponding property in the Control Rig BP CDO, it was initialized in UFgAnimGraphNode_ControlRig::RebuildExposedProperties 
															FBlueprintEditorUtils::PropertyValueToString_Direct(*PropertyIt, RigVMExternalVariable->Memory, DefaultValue, this);
															break;
														}
													}
												}
											}

											AnimGraphDefaultSchema->SetPinAutogeneratedDefaultValue(CurrentPin, DefaultValue);
											AnimGraphDefaultSchema->TrySetDefaultValue(*CurrentPin, DefaultValue);
										}
									}
								}
							}
						}
#endif // WITH_EDITOR

						Super::PostReconstructNode();
					}

					void UFgAnimGraphNode_ControlRig::CustomizePinData(UEdGraphPin * Pin, FName SourcePropertyName, int32 ArrayIndex) const
					{
						Super::CustomizePinData(Pin, SourcePropertyName, ArrayIndex);
						/*if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_ControlRig, Alpha))
						{
							Pin->bHidden = (Node.AlphaInputType != EAnimAlphaInputType::Float);

							if (!Pin->bHidden)
							{
								Pin->PinFriendlyName = Node.AlphaScaleBias.GetFriendlyName(Node.AlphaScaleBiasClamp.GetFriendlyName(Pin->PinFriendlyName));
							}
						}

						if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_ControlRig, bAlphaBoolEnabled))
						{
							Pin->bHidden = (Node.AlphaInputType != EAnimAlphaInputType::Bool);
						}

						if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_ControlRig, AlphaCurveName))
						{
							Pin->bHidden = (Node.AlphaInputType != EAnimAlphaInputType::Curve);

							if (!Pin->bHidden)
							{
								Pin->PinFriendlyName = Node.AlphaScaleBiasClamp.GetFriendlyName(Pin->PinFriendlyName);
							}
						}*/
					}
#undef LOCTEXT_NAMESPACE

