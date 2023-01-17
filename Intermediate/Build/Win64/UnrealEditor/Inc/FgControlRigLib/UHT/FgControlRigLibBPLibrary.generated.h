// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FgControlRigLibBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFgContrlRigStruct;
struct FLiveLinkBasicBlueprintData;
#ifdef FGCONTROLRIGLIB_FgControlRigLibBPLibrary_generated_h
#error "FgControlRigLibBPLibrary.generated.h already included, missing '#pragma once' in FgControlRigLibBPLibrary.h"
#endif
#define FGCONTROLRIGLIB_FgControlRigLibBPLibrary_generated_h

#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics; \
	FGCONTROLRIGLIB_API static class UScriptStruct* StaticStruct();


template<> FGCONTROLRIGLIB_API UScriptStruct* StaticStruct<struct FFgContrlRigStruct>();

#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_SPARSE_DATA
#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFgGetControlRigData); \
	DECLARE_FUNCTION(execFgParsingLiveLinkData); \
	DECLARE_FUNCTION(execFgSetPropertyNames);


#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFgGetControlRigData); \
	DECLARE_FUNCTION(execFgParsingLiveLinkData); \
	DECLARE_FUNCTION(execFgSetPropertyNames);


#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_ACCESSORS
#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFgControlRigLibBPLibrary(); \
	friend struct Z_Construct_UClass_UFgControlRigLibBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFgControlRigLibBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FgControlRigLib"), NO_API) \
	DECLARE_SERIALIZER(UFgControlRigLibBPLibrary)


#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_INCLASS \
private: \
	static void StaticRegisterNativesUFgControlRigLibBPLibrary(); \
	friend struct Z_Construct_UClass_UFgControlRigLibBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFgControlRigLibBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FgControlRigLib"), NO_API) \
	DECLARE_SERIALIZER(UFgControlRigLibBPLibrary)


#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFgControlRigLibBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFgControlRigLibBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFgControlRigLibBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFgControlRigLibBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFgControlRigLibBPLibrary(UFgControlRigLibBPLibrary&&); \
	NO_API UFgControlRigLibBPLibrary(const UFgControlRigLibBPLibrary&); \
public: \
	NO_API virtual ~UFgControlRigLibBPLibrary();


#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFgControlRigLibBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFgControlRigLibBPLibrary(UFgControlRigLibBPLibrary&&); \
	NO_API UFgControlRigLibBPLibrary(const UFgControlRigLibBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFgControlRigLibBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFgControlRigLibBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFgControlRigLibBPLibrary) \
	NO_API virtual ~UFgControlRigLibBPLibrary();


#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_383_PROLOG
#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_SPARSE_DATA \
	FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_RPC_WRAPPERS \
	FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_ACCESSORS \
	FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_INCLASS \
	FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_SPARSE_DATA \
	FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_ACCESSORS \
	FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_INCLASS_NO_PURE_DECLS \
	FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h_386_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FgControlRigLibBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGCONTROLRIGLIB_API UClass* StaticClass<class UFgControlRigLibBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FgControlRigPlugin_Plugins_FgControlRigLib_Source_FgControlRigLib_Public_FgControlRigLibBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
