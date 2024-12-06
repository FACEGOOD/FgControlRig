// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FgControlRig/Public/FgAnimNode_ControlRig.h"
#include "FgControlRig/Public/FgControlRigTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFgAnimNode_ControlRig() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRig();
FGCONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FFgAnimNode_ControlRig();
FGCONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FFgContrlRigStruct();
UPackage* Z_Construct_UPackage__Script_FgControlRig();
// End Cross Module References

// Begin ScriptStruct FFgAnimNode_ControlRig
static_assert(std::is_polymorphic<FFgAnimNode_ControlRig>() == std::is_polymorphic<FAnimNode_ControlRig>(), "USTRUCT FFgAnimNode_ControlRig cannot be polymorphic unless super FAnimNode_ControlRig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FgAnimNode_ControlRig;
class UScriptStruct* FFgAnimNode_ControlRig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FgAnimNode_ControlRig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FgAnimNode_ControlRig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFgAnimNode_ControlRig, (UObject*)Z_Construct_UPackage__Script_FgControlRig(), TEXT("FgAnimNode_ControlRig"));
	}
	return Z_Registration_Info_UScriptStruct_FgAnimNode_ControlRig.OuterSingleton;
}
template<> FGCONTROLRIG_API UScriptStruct* StaticStruct<FFgAnimNode_ControlRig>()
{
	return FFgAnimNode_ControlRig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Animation node that allows animation ControlRig output to be used in an animation graph\n */" },
		{ "ModuleRelativePath", "Public/FgAnimNode_ControlRig.h" },
		{ "ToolTip", "Animation node that allows animation ControlRig output to be used in an animation graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fgControlRigData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FgAnimNode_ControlRig.h" },
		{ "PinShownByDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_fgControlRigData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFgAnimNode_ControlRig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::NewProp_fgControlRigData = { "fgControlRigData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgAnimNode_ControlRig, fgControlRigData), Z_Construct_UScriptStruct_FFgContrlRigStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fgControlRigData_MetaData), NewProp_fgControlRigData_MetaData) }; // 2545448723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::NewProp_fgControlRigData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FgControlRig,
	Z_Construct_UScriptStruct_FAnimNode_ControlRig,
	&NewStructOps,
	"FgAnimNode_ControlRig",
	Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::PropPointers),
	sizeof(FFgAnimNode_ControlRig),
	alignof(FFgAnimNode_ControlRig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFgAnimNode_ControlRig()
{
	if (!Z_Registration_Info_UScriptStruct_FgAnimNode_ControlRig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FgAnimNode_ControlRig.InnerSingleton, Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FgAnimNode_ControlRig.InnerSingleton;
}
// End ScriptStruct FFgAnimNode_ControlRig

// Begin Registration
struct Z_CompiledInDeferFile_FID_work_UE_Plugins_ControlRigTest_pluginPacks_FgControlRig_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgAnimNode_ControlRig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFgAnimNode_ControlRig::StaticStruct, Z_Construct_UScriptStruct_FFgAnimNode_ControlRig_Statics::NewStructOps, TEXT("FgAnimNode_ControlRig"), &Z_Registration_Info_UScriptStruct_FgAnimNode_ControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFgAnimNode_ControlRig), 1642505191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_work_UE_Plugins_ControlRigTest_pluginPacks_FgControlRig_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgAnimNode_ControlRig_h_2961779710(TEXT("/Script/FgControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_work_UE_Plugins_ControlRigTest_pluginPacks_FgControlRig_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgAnimNode_ControlRig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_work_UE_Plugins_ControlRigTest_pluginPacks_FgControlRig_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgAnimNode_ControlRig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
