// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FgControlRig/Public/FgControlRigBPLibrary.h"
#include "FgControlRig/Public/FgControlRigTypes.h"
#include "Roles/LiveLinkAnimationBlueprintStructs.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Roles/LiveLinkBasicTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFgControlRigBPLibrary() {}
// Cross Module References
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
	DEFINE_FUNCTION(UFgControlRigBPLibrary::execFgGetLocalIP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFgControlRigBPLibrary::FgGetLocalIP();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UFgControlRigBPLibrary::execFgGetContrlRigDataAnim)
	{
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_data);
		P_GET_STRUCT_REF(FFgContrlRigStruct,Z_Param_Out_controlRig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFgControlRigBPLibrary::FgGetContrlRigDataAnim(Z_Param_Out_data,Z_Param_Out_controlRig);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UFgControlRigBPLibrary::execFgSetPropertyNames)
	{
		P_GET_STRUCT_REF(FLiveLinkSkeletonStaticData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFgControlRigBPLibrary::FgSetPropertyNames(Z_Param_Out_data);
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics
	{
		struct FgControlRigBPLibrary_eventFgGetContrlRigDataAnim_Parms
		{
			FSubjectFrameHandle data;
			FFgContrlRigStruct controlRig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_controlRig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgGetContrlRigDataAnim_Parms, data), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_data_MetaData)) }; // 872459058
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_controlRig = { "controlRig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgGetContrlRigDataAnim_Parms, controlRig), Z_Construct_UScriptStruct_FFgContrlRigStruct, METADATA_PARAMS(nullptr, 0) }; // 3784592471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::NewProp_controlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "GetFgControlRigDataAnim" },
		{ "Keywords", "FgControlRigLib" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgControlRigBPLibrary, nullptr, "FgGetContrlRigDataAnim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::FgControlRigBPLibrary_eventFgGetContrlRigDataAnim_Parms), Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics
	{
		struct FgControlRigBPLibrary_eventFgGetContrlRigDataBasic_Parms
		{
			FLiveLinkBasicBlueprintData data;
			FFgContrlRigStruct controlRig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_controlRig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgGetContrlRigDataBasic_Parms, data), Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData, METADATA_PARAMS(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_data_MetaData)) }; // 917839139
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_controlRig = { "controlRig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgGetContrlRigDataBasic_Parms, controlRig), Z_Construct_UScriptStruct_FFgContrlRigStruct, METADATA_PARAMS(nullptr, 0) }; // 3784592471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::NewProp_controlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "GetFgControlRigDataBasic" },
		{ "Keywords", "FgControlRigLib" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgControlRigBPLibrary, nullptr, "FgGetContrlRigDataBasic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::FgControlRigBPLibrary_eventFgGetContrlRigDataBasic_Parms), Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics
	{
		struct FgControlRigBPLibrary_eventFgGetLocalIP_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgGetLocalIP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "GetLocalIP" },
		{ "Keywords", "FgControlRigLib" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgControlRigBPLibrary, nullptr, "FgGetLocalIP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::FgControlRigBPLibrary_eventFgGetLocalIP_Parms), Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics
	{
		struct FgControlRigBPLibrary_eventFgParsingLiveLinkData_Parms
		{
			FLiveLinkAnimationFrameData data;
			FFgContrlRigStruct controlRig;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_controlRig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgParsingLiveLinkData_Parms, data), Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData, METADATA_PARAMS(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_data_MetaData)) }; // 574786297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_controlRig = { "controlRig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgParsingLiveLinkData_Parms, controlRig), Z_Construct_UScriptStruct_FFgContrlRigStruct, METADATA_PARAMS(nullptr, 0) }; // 3784592471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::NewProp_controlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "ParsingLiveLinkData To ControlRig" },
		{ "Keywords", "FgControlRigLib" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgControlRigBPLibrary, nullptr, "FgParsingLiveLinkData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::FgControlRigBPLibrary_eventFgParsingLiveLinkData_Parms), Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics
	{
		struct FgControlRigBPLibrary_eventFgSetPropertyNames_Parms
		{
			FLiveLinkSkeletonStaticData data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FgControlRigBPLibrary_eventFgSetPropertyNames_Parms, data), Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData, METADATA_PARAMS(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::NewProp_data_MetaData)) }; // 1026825743
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "Fg Set Property names" },
		{ "Keywords", "FgControlRigLib" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgControlRigBPLibrary, nullptr, "FgSetPropertyNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::FgControlRigBPLibrary_eventFgSetPropertyNames_Parms), Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFgControlRigBPLibrary);
	UClass* Z_Construct_UClass_UFgControlRigBPLibrary_NoRegister()
	{
		return UFgControlRigBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFgControlRigBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFgControlRigBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FgControlRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFgControlRigBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataAnim, "FgGetContrlRigDataAnim" }, // 3267856261
		{ &Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetContrlRigDataBasic, "FgGetContrlRigDataBasic" }, // 134099052
		{ &Z_Construct_UFunction_UFgControlRigBPLibrary_FgGetLocalIP, "FgGetLocalIP" }, // 2471090744
		{ &Z_Construct_UFunction_UFgControlRigBPLibrary_FgParsingLiveLinkData, "FgParsingLiveLinkData" }, // 2021394273
		{ &Z_Construct_UFunction_UFgControlRigBPLibrary_FgSetPropertyNames, "FgSetPropertyNames" }, // 3358515973
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFgControlRigBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "FgControlRigBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FgControlRigBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFgControlRigBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFgControlRigBPLibrary>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UFgControlRigBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFgControlRigBPLibrary_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFgControlRigBPLibrary, UFgControlRigBPLibrary::StaticClass, TEXT("UFgControlRigBPLibrary"), &Z_Registration_Info_UClass_UFgControlRigBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFgControlRigBPLibrary), 3810290723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_610372407(TEXT("/Script/FgControlRig"),
		Z_CompiledInDeferFile_FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
