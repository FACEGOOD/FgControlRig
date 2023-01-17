// Copyright Epic Games, Inc. All Rights Reserved.

#include "FgControlRigLibBPLibrary.h"
#include "FgControlRigLib.h"
#include "UObject/UnrealType.h"

FFgContrlRigStruct gControlRig;

TArray<FName> fg_float_names;
TArray<int> fg_floatNameValueIdx;
TArray<FName> fg_vector_names;
TArray<int> fg_vectorNameValueIdx;



UFgControlRigLibBPLibrary::UFgControlRigLibBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}



void UFgControlRigLibBPLibrary::FgSetPropertyNames(const FLiveLinkBasicBlueprintData& data)
{
	 fg_float_names.Empty();
	 fg_floatNameValueIdx.Empty();
	 fg_vector_names.Empty();
	 fg_vectorNameValueIdx.Empty();
	auto properties = data.StaticData.PropertyNames;
	for (int i = 0; i < properties.Num(); ++i)
	{
		auto str = properties[i].ToString();
		FString left, right;
		str.Split(TEXT("."), &left, &right);
		if (right != TEXT(""))
		{
			fg_vectorNameValueIdx.Add(i);
			if (right == TEXT("translateX"))
				fg_vector_names.Add(FName(left));
		}
		else
		{
			fg_float_names.Add(FName(str));
			fg_floatNameValueIdx.Add(i);
		}
	}

}

void UFgControlRigLibBPLibrary::FgParsingLiveLinkData(const FLiveLinkBasicBlueprintData& data)
{

	auto datas = data.FrameData.PropertyValues;
	for (int n = 0; n < fg_vector_names.Num(); ++n)
		gControlRig.set_editor_property(fg_vector_names[n], FVector2d(datas[fg_vectorNameValueIdx[2 * n]], datas[fg_vectorNameValueIdx[2 * n + 1]]));
	for (int n = 0; n < fg_float_names.Num(); ++n)
		gControlRig.set_editor_property(fg_float_names[n], datas[fg_floatNameValueIdx[n]]);

}

FFgContrlRigStruct UFgControlRigLibBPLibrary::FgGetControlRigData()
{
	return gControlRig;
}

