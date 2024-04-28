// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FgControlRigBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFgContrlRigStruct;
struct FLiveLinkAnimationFrameData;
struct FLiveLinkBasicBlueprintData;
struct FLiveLinkSkeletonStaticData;
struct FSubjectFrameHandle;
#ifdef FGCONTROLRIG_FgControlRigBPLibrary_generated_h
#error "FgControlRigBPLibrary.generated.h already included, missing '#pragma once' in FgControlRigBPLibrary.h"
#endif
#define FGCONTROLRIG_FgControlRigBPLibrary_generated_h

#define FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_32_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFgGetLocalIP); \
	DECLARE_FUNCTION(execFgGetContrlRigDataBasic); \
	DECLARE_FUNCTION(execFgGetContrlRigDataAnim); \
	DECLARE_FUNCTION(execFgParsingLiveLinkData); \
	DECLARE_FUNCTION(execFgSetPropertyNames);


#define FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUFgControlRigBPLibrary(); \
	friend struct Z_Construct_UClass_UFgControlRigBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFgControlRigBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FgControlRig"), NO_API) \
	DECLARE_SERIALIZER(UFgControlRigBPLibrary)


#define FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFgControlRigBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFgControlRigBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFgControlRigBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFgControlRigBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFgControlRigBPLibrary(UFgControlRigBPLibrary&&); \
	UFgControlRigBPLibrary(const UFgControlRigBPLibrary&); \
public: \
	NO_API virtual ~UFgControlRigBPLibrary();


#define FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_29_PROLOG
#define FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_32_RPC_WRAPPERS \
	FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_32_INCLASS \
	FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGCONTROLRIG_API UClass* StaticClass<class UFgControlRigBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
