// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FgControlRigEditor/Public/FgAnimGraphNode_ControlRig.h"
#include "FgControlRig/Public/FgAnimNode_ControlRig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFgAnimGraphNode_ControlRig() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty();
FGCONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FFgAnimNode_ControlRig();
FGCONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UFgAnimGraphNode_ControlRig();
FGCONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UFgAnimGraphNode_ControlRig_NoRegister();
UPackage* Z_Construct_UPackage__Script_FgControlRigEditor();
// End Cross Module References

// Begin Class UFgAnimGraphNode_ControlRig
void UFgAnimGraphNode_ControlRig::StaticRegisterNativesUFgAnimGraphNode_ControlRig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFgAnimGraphNode_ControlRig);
UClass* Z_Construct_UClass_UFgAnimGraphNode_ControlRig_NoRegister()
{
	return UFgAnimGraphNode_ControlRig::StaticClass();
}
struct Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FgAnimGraphNode_ControlRig.h" },
		{ "ModuleRelativePath", "Public/FgAnimGraphNode_ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/FgAnimGraphNode_ControlRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFgAnimGraphNode_ControlRig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFgAnimGraphNode_ControlRig, Node), Z_Construct_UScriptStruct_FFgAnimNode_ControlRig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 1642505191
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_CustomProperty,
	(UObject* (*)())Z_Construct_UPackage__Script_FgControlRigEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::ClassParams = {
	&UFgAnimGraphNode_ControlRig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::Class_MetaDataParams), Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFgAnimGraphNode_ControlRig()
{
	if (!Z_Registration_Info_UClass_UFgAnimGraphNode_ControlRig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFgAnimGraphNode_ControlRig.OuterSingleton, Z_Construct_UClass_UFgAnimGraphNode_ControlRig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFgAnimGraphNode_ControlRig.OuterSingleton;
}
template<> FGCONTROLRIGEDITOR_API UClass* StaticClass<UFgAnimGraphNode_ControlRig>()
{
	return UFgAnimGraphNode_ControlRig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFgAnimGraphNode_ControlRig);
UFgAnimGraphNode_ControlRig::~UFgAnimGraphNode_ControlRig() {}
// End Class UFgAnimGraphNode_ControlRig

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FgControlRig_Source_FgControlRigEditor_Public_FgAnimGraphNode_ControlRig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFgAnimGraphNode_ControlRig, UFgAnimGraphNode_ControlRig::StaticClass, TEXT("UFgAnimGraphNode_ControlRig"), &Z_Registration_Info_UClass_UFgAnimGraphNode_ControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFgAnimGraphNode_ControlRig), 3333314670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FgControlRig_Source_FgControlRigEditor_Public_FgAnimGraphNode_ControlRig_h_409127056(TEXT("/Script/FgControlRigEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FgControlRig_Source_FgControlRigEditor_Public_FgAnimGraphNode_ControlRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FgControlRig_Source_FgControlRigEditor_Public_FgAnimGraphNode_ControlRig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
