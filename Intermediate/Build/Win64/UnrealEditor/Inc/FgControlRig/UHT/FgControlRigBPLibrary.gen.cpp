// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FgControlRig/Public/FgControlRigBPLibrary.h"
#include "FgControlRig/Public/FgControlRigTypes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkAnimationBlueprintStructs.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkAnimationTypes.h"
#include "Runtime/LiveLinkInterface/Public/Roles/LiveLinkBasicTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFgControlRigBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
FGCONTROLRIG_API UClass* Z_Construct_UClass_UFgControlRigBPLibrary();
FGCONTROLRIG_API UClass* Z_Construct_UClass_UFgControlRigBPLibrary_NoRegister();
FGCONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FFgContrlRigStruct();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
UPackage* Z_Construct_UPackage__Script_FgControlRig();
// End Cross Module References

// Begin Class UFgControlRigBPLibrary Function FgGetContrlRigDataAnim
struct Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics
{
	struct FgControlRigBPLibrary_eventFgGetContrlRigDataAnim_Parms
	{
		FSubjectFrameHandle data;
		FFgContrlRigStruct controlRig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "GetFgControlRigDataAnim" },
		{ "Keywords", "FgControlRigLib" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_controlRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgGetContrlRigDataAnim_Parms, data), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 759844468
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_controlRig = { "controlRig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgGetContrlRigDataAnim_Parms, controlRig), Z_Construct_UScriptStruct_FFgContrlRigStruct, METADATA_PARAMS(0, nullptr) }; // 2545448723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_controlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgControlRigBPLibrary, nullptr, "FgGetContrlRigDataAnim", nullptr, nullptr, Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::FgControlRigBPLibrary_eventFgGetContrlRigDataAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::FgControlRigBPLibrary_eventFgGetContrlRigDataAnim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFgControlRigBPLibrary::execFgGetContrlRigDataAnim)
{
	P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_data);
	P_GET_STRUCT_REF(FFgContrlRigStruct,Z_Param_Out_controlRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFgControlRigBPLibrary::FgGetContrlRigDataAnim(Z_Param_Out_data,Z_Param_Out_controlRig);
	P_NATIVE_END;
}
// End Class UFgControlRigBPLibrary Function FgGetContrlRigDataAnim

// Begin Class UFgControlRigBPLibrary Function FgGetContrlRigDataBasic
struct Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics
{
	struct FgControlRigBPLibrary_eventFgGetContrlRigDataBasic_Parms
	{
		FLiveLinkBasicBlueprintData data;
		FFgContrlRigStruct controlRig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "GetFgControlRigDataBasic" },
		{ "Keywords", "FgControlRigLib" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_controlRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgGetContrlRigDataBasic_Parms, data), Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 1575802775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_controlRig = { "controlRig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgGetContrlRigDataBasic_Parms, controlRig), Z_Construct_UScriptStruct_FFgContrlRigStruct, METADATA_PARAMS(0, nullptr) }; // 2545448723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_controlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgControlRigBPLibrary, nullptr, "FgGetContrlRigDataBasic", nullptr, nullptr, Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::FgControlRigBPLibrary_eventFgGetContrlRigDataBasic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::FgControlRigBPLibrary_eventFgGetContrlRigDataBasic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFgControlRigBPLibrary::execFgGetContrlRigDataBasic)
{
	P_GET_STRUCT_REF(FLiveLinkBasicBlueprintData,Z_Param_Out_data);
	P_GET_STRUCT_REF(FFgContrlRigStruct,Z_Param_Out_controlRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFgControlRigBPLibrary::FgGetContrlRigDataBasic(Z_Param_Out_data,Z_Param_Out_controlRig);
	P_NATIVE_END;
}
// End Class UFgControlRigBPLibrary Function FgGetContrlRigDataBasic

// Begin Class UFgControlRigBPLibrary Function FgGetLocalIP
struct Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics
{
	struct FgControlRigBPLibrary_eventFgGetLocalIP_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "GetLocalIP" },
		{ "Keywords", "FgControlRigLib" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgGetLocalIP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgControlRigBPLibrary, nullptr, "FgGetLocalIP", nullptr, nullptr, Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::FgControlRigBPLibrary_eventFgGetLocalIP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::FgControlRigBPLibrary_eventFgGetLocalIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFgControlRigBPLibrary::execFgGetLocalIP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UFgControlRigBPLibrary::FgGetLocalIP();
	P_NATIVE_END;
}
// End Class UFgControlRigBPLibrary Function FgGetLocalIP

// Begin Class UFgControlRigBPLibrary Function FgParsingLiveLinkData
struct Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics
{
	struct FgControlRigBPLibrary_eventFgParsingLiveLinkData_Parms
	{
		FLiveLinkAnimationFrameData data;
		FFgContrlRigStruct controlRig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "ParsingLiveLinkData To ControlRig" },
		{ "Keywords", "FgControlRigLib" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_controlRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgParsingLiveLinkData_Parms, data), Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 63387462
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_controlRig = { "controlRig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgParsingLiveLinkData_Parms, controlRig), Z_Construct_UScriptStruct_FFgContrlRigStruct, METADATA_PARAMS(0, nullptr) }; // 2545448723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_controlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgControlRigBPLibrary, nullptr, "FgParsingLiveLinkData", nullptr, nullptr, Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::FgControlRigBPLibrary_eventFgParsingLiveLinkData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::FgControlRigBPLibrary_eventFgParsingLiveLinkData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFgControlRigBPLibrary::execFgParsingLiveLinkData)
{
	P_GET_STRUCT_REF(FLiveLinkAnimationFrameData,Z_Param_Out_data);
	P_GET_STRUCT_REF(FFgContrlRigStruct,Z_Param_Out_controlRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFgControlRigBPLibrary::FgParsingLiveLinkData(Z_Param_Out_data,Z_Param_Out_controlRig);
	P_NATIVE_END;
}
// End Class UFgControlRigBPLibrary Function FgParsingLiveLinkData

// Begin Class UFgControlRigBPLibrary Function FgSetPropertyNames
struct Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics
{
	struct FgControlRigBPLibrary_eventFgSetPropertyNames_Parms
	{
		FLiveLinkSkeletonStaticData data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "Fg Set Property names" },
		{ "Keywords", "FgControlRigLib" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgSetPropertyNames_Parms, data), Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 3287994990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::NewProp_data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgControlRigBPLibrary, nullptr, "FgSetPropertyNames", nullptr, nullptr, Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::FgControlRigBPLibrary_eventFgSetPropertyNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::FgControlRigBPLibrary_eventFgSetPropertyNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFgControlRigBPLibrary::execFgSetPropertyNames)
{
	P_GET_STRUCT_REF(FLiveLinkSkeletonStaticData,Z_Param_Out_data);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFgControlRigBPLibrary::FgSetPropertyNames(Z_Param_Out_data);
	P_NATIVE_END;
}
// End Class UFgControlRigBPLibrary Function FgSetPropertyNames

// Begin Class UFgControlRigBPLibrary
void UFgControlRigBPLibrary::StaticRegisterNativesUFgControlRigBPLibrary()
{
	UClass* Class = UFgControlRigBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FgGetContrlRigDataAnim", &UFgControlRigBPLibrary::execFgGetContrlRigDataAnim },
		{ "FgGetContrlRigDataBasic", &UFgControlRigBPLibrary::execFgGetContrlRigDataBasic },
		{ "FgGetLocalIP", &UFgControlRigBPLibrary::execFgGetLocalIP },
		{ "FgParsingLiveLinkData", &UFgControlRigBPLibrary::execFgParsingLiveLinkData },
		{ "FgSetPropertyNames", &UFgControlRigBPLibrary::execFgSetPropertyNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFgControlRigBPLibrary);
UClass* Z_Construct_UClass_UFgControlRigBPLibrary_NoRegister()
{
	return UFgControlRigBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UFgControlRigBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "FgControlRigBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim, "FgGetContrlRigDataAnim" }, // 2231404943
		{ &Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic, "FgGetContrlRigDataBasic" }, // 1852280950
		{ &Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP, "FgGetLocalIP" }, // 3577930408
		{ &Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData, "FgParsingLiveLinkData" }, // 2746461945
		{ &Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames, "FgSetPropertyNames" }, // 3654413343
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFgControlRigBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFgControlRigBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_FgControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFgControlRigBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFgControlRigBPLibrary_Statics::ClassParams = {
	&UFgControlRigBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFgControlRigBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UFgControlRigBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFgControlRigBPLibrary()
{
	if (!Z_Registration_Info_UClass_UFgControlRigBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFgControlRigBPLibrary.OuterSingleton, Z_Construct_UClass_UFgControlRigBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFgControlRigBPLibrary.OuterSingleton;
}
template<> FGCONTROLRIG_API UClass* StaticClass<UFgControlRigBPLibrary>()
{
	return UFgControlRigBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFgControlRigBPLibrary);
UFgControlRigBPLibrary::~UFgControlRigBPLibrary() {}
// End Class UFgControlRigBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_FGUEPROJECT_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFgControlRigBPLibrary, UFgControlRigBPLibrary::StaticClass, TEXT("UFgControlRigBPLibrary"), &Z_Registration_Info_UClass_UFgControlRigBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFgControlRigBPLibrary), 1223122901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FGUEPROJECT_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_3848751718(TEXT("/Script/FgControlRig"),
	Z_CompiledInDeferFile_FID_FGUEPROJECT_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FGUEPROJECT_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
