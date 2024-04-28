// Copyright 2023 FACEGOOD, Inc. All Rights Reserved.
#include "FgControlRigBPLibrary.h"
#include "FgControlRig.h"
#include "UObject/UnrealType.h"
#include <SocketSubsystem.h>
#include <IPAddress.h>

TArray<FName> fg_float_names;
TArray<int> fg_floatNameValueIdx;
TArray<int> fg_vectorNameValueIdx;
TMap< FName, TArray<int>> fg_vector_names;



UFgControlRigBPLibrary::UFgControlRigBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}


void UFgControlRigBPLibrary::FgSetPropertyNames(const FLiveLinkSkeletonStaticData& data)
{

	if (fg_vector_names.IsEmpty() || fg_vector_names.Num()*2+fg_float_names.Num() != data.PropertyNames.Num())
	{
		fg_float_names.Empty();
		fg_floatNameValueIdx.Empty();
		fg_vector_names.Empty();
		fg_vectorNameValueIdx.Empty();
		auto properties = data.PropertyNames;
		for (int i = 0; i < properties.Num(); ++i)
		{
			auto str = properties[i].ToString();
			FString left, right;
			str.Split(TEXT("."), &left, &right);
			if (right != TEXT(""))
			{
				if (!fg_vector_names.Contains(FName(left)))
				{
					fg_vector_names.Add(FName(left));
					fg_vector_names[FName(left)].Add(0);
					fg_vector_names[FName(left)].Add(0);

				}
				//fg_vectorNameValueIdx.Add(i);
				if (right == TEXT("translateX"))
					fg_vector_names[FName(left)][0] = i;
				else if (right == TEXT("translateY"))
					fg_vector_names[FName(left)][1] = i;
			}
			else
			{
				fg_float_names.Add(FName(str));
				fg_floatNameValueIdx.Add(i);
			}
		}
	}
	
}

void UFgControlRigBPLibrary::FgParsingLiveLinkData(const FLiveLinkAnimationFrameData& data, FFgContrlRigStruct& controlRig)
{
	auto datas = data.PropertyValues;


	for (auto n : fg_vector_names)
	{
		controlRig.set_editor_property(n.Key, FVector2d(datas[n.Value[0]], datas[n.Value[1]]));
	}


	for (int n = 0; n < fg_float_names.Num(); ++n)
		controlRig.set_editor_property(fg_float_names[n], datas[fg_floatNameValueIdx[n]]);
}

void UFgControlRigBPLibrary::FgGetContrlRigDataAnim(const FSubjectFrameHandle& data, FFgContrlRigStruct& controlRig)
{
	
	auto staticData = data.GetSourceSkeletonStaticData();
	auto frameData = data.GetSourceAnimationFrameData();

	if (staticData->PropertyNames.Num() == 51)
		return;

	if (fg_vector_names.IsEmpty() || fg_vector_names.Num() * 2 + fg_float_names.Num() != staticData->PropertyNames.Num())
	{
		fg_float_names.Empty();
		fg_floatNameValueIdx.Empty();
		fg_vector_names.Empty();
		fg_vectorNameValueIdx.Empty();
		auto properties = staticData->PropertyNames;
		for (int i = 0; i < properties.Num(); ++i)
		{
			auto str = properties[i].ToString();
			FString left, right;
			str.Split(TEXT("."), &left, &right);
			if (right != TEXT(""))
			{
				if (!fg_vector_names.Contains(FName(left)))
				{
					fg_vector_names.Add(FName(left));
					fg_vector_names[FName(left)].Add(0);
					fg_vector_names[FName(left)].Add(0);

				}
				//fg_vectorNameValueIdx.Add(i);
				if (right == TEXT("translateX"))
					fg_vector_names[FName(left)][0] = i;
				else if (right == TEXT("translateY"))
					fg_vector_names[FName(left)][1] = i;
			}
			else
			{
				fg_float_names.Add(FName(str));
				fg_floatNameValueIdx.Add(i);
			}
		}
	}

	auto datas = frameData->PropertyValues;

	for (auto n : fg_vector_names)
	{
		controlRig.set_editor_property(n.Key, FVector2d(datas[n.Value[0]], datas[n.Value[1]]));
	}

	for (int n = 0; n < fg_float_names.Num(); ++n)
		controlRig.set_editor_property(fg_float_names[n], datas[fg_floatNameValueIdx[n]]);

}

void UFgControlRigBPLibrary::FgGetContrlRigDataBasic(const FLiveLinkBasicBlueprintData&data, FFgContrlRigStruct& controlRig)
{
	

	auto staticData = data.StaticData;
	auto frameData = data.FrameData;

	if (staticData.PropertyNames.Num() == 51)
		return;

	if (fg_vector_names.IsEmpty() || fg_vector_names.Num() * 2 + fg_float_names.Num() != staticData.PropertyNames.Num())
	{
		fg_float_names.Empty();
		fg_floatNameValueIdx.Empty();
		fg_vector_names.Empty();
		fg_vectorNameValueIdx.Empty();
		auto properties = staticData.PropertyNames;
		for (int i = 0; i < properties.Num(); ++i)
		{
			auto str = properties[i].ToString();
			FString left, right;
			str.Split(TEXT("."), &left, &right);
			if (right != TEXT(""))
			{
				if (!fg_vector_names.Contains(FName(left)))
				{
					fg_vector_names.Add(FName(left));
					fg_vector_names[FName(left)].Add(0);
					fg_vector_names[FName(left)].Add(0);

				}
				//fg_vectorNameValueIdx.Add(i);
				if (right == TEXT("translateX"))
					fg_vector_names[FName(left)][0] = i;
				else if (right == TEXT("translateY"))
					fg_vector_names[FName(left)][1] = i;
			}
			else
			{
				fg_float_names.Add(FName(str));
				fg_floatNameValueIdx.Add(i);
			}
		}
	}

	auto datas = frameData.PropertyValues;

	for (auto n : fg_vector_names)
	{
		controlRig.set_editor_property(n.Key, FVector2d(datas[n.Value[0]], datas[n.Value[1]]));
	}

	for (int n = 0; n < fg_float_names.Num(); ++n)
		controlRig.set_editor_property(fg_float_names[n], datas[fg_floatNameValueIdx[n]]);
}

FString UFgControlRigBPLibrary::FgGetLocalIP()
{
	bool canBind = false;
	TSharedRef<FInternetAddr> localIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);
	auto msg = (localIp->IsValid() ? localIp->ToString(false) : "");
	return msg;
}
