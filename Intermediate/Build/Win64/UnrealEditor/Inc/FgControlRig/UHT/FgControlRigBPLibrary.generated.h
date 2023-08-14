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

#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_SPARSE_DATA
#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFgGetLocalIP); \
	DECLARE_FUNCTION(execFgGetContrlRigDataBasic); \
	DECLARE_FUNCTION(execFgGetContrlRigDataAnim); \
	DECLARE_FUNCTION(execFgParsingLiveLinkData); \
	DECLARE_FUNCTION(execFgSetPropertyNames);


#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFgGetLocalIP); \
	DECLARE_FUNCTION(execFgGetContrlRigDataBasic); \
	DECLARE_FUNCTION(execFgGetContrlRigDataAnim); \
	DECLARE_FUNCTION(execFgParsingLiveLinkData); \
	DECLARE_FUNCTION(execFgSetPropertyNames);


#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_ACCESSORS
#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFgControlRigBPLibrary(); \
	friend struct Z_Construct_UClass_UFgControlRigBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFgControlRigBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FgControlRig"), NO_API) \
	DECLARE_SERIALIZER(UFgControlRigBPLibrary)


#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUFgControlRigBPLibrary(); \
	friend struct Z_Construct_UClass_UFgControlRigBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFgControlRigBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FgControlRig"), NO_API) \
	DECLARE_SERIALIZER(UFgControlRigBPLibrary)


#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFgControlRigBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFgControlRigBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFgControlRigBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFgControlRigBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFgControlRigBPLibrary(UFgControlRigBPLibrary&&); \
	NO_API UFgControlRigBPLibrary(const UFgControlRigBPLibrary&); \
public: \
	NO_API virtual ~UFgControlRigBPLibrary();


#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFgControlRigBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFgControlRigBPLibrary(UFgControlRigBPLibrary&&); \
	NO_API UFgControlRigBPLibrary(const UFgControlRigBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFgControlRigBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFgControlRigBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFgControlRigBPLibrary) \
	NO_API virtual ~UFgControlRigBPLibrary();


#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_30_PROLOG
#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_SPARSE_DATA \
	FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_RPC_WRAPPERS \
	FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_ACCESSORS \
	FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_INCLASS \
	FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_SPARSE_DATA \
	FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_ACCESSORS \
	FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_INCLASS_NO_PURE_DECLS \
	FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FgControlRigBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGCONTROLRIG_API UClass* StaticClass<class UFgControlRigBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SalesDemoCPP_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
