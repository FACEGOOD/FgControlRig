// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FgControlRig/Public/FgControlRigTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFgControlRigTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
FGCONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FFgContrlRigStruct();
UPackage* Z_Construct_UPackage__Script_FgControlRig();
// End Cross Module References

// Begin ScriptStruct FFgContrlRigStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FgContrlRigStruct;
class UScriptStruct* FFgContrlRigStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FgContrlRigStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FgContrlRigStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFgContrlRigStruct, (UObject*)Z_Construct_UPackage__Script_FgControlRig(), TEXT("FgContrlRigStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FgContrlRigStruct.OuterSingleton;
}
template<> FGCONTROLRIG_API UScriptStruct* StaticStruct<FFgContrlRigStruct>()
{
	return FFgContrlRigStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_mouth_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_jaw_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eye_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eye_blink_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eye_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eye_blink_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_brow_lateral_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_brow_lateral_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_brow_down_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_brow_down_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_brow_raiseOut_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_brow_raiseIn_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_brow_raiseIn_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_brow_raiseOut_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eye_pupil_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eye_pupil_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_eye_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_eye_parallelLook_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eye_cheekRaise_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eye_squintInner_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eye_lidPress_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_nose_wrinkleUpper_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_nose_wrinkleUpper_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eye_squintInner_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eye_cheekRaise_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eye_lidPress_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_nose_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_nose_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_upperLipRaise_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_sharpCornerPull_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_cornerPull_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_dimple_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_cornerDepress_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_stretch_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lowerLipDepress_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lowerLipDepress_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_stretch_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_towardsD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipsBlow_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_stickyInnerU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_jaw_chinCompress_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_funnelU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_neck_mastoidContract_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_neck_swallow_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_stickyOuterD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_mouth_stickyD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipsPressU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_towardsU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_stickyInnerD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipBiteD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_funnelD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_lookAtSwitch_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_stickyOuterU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_mouth_stickyU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipsTogetherU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_tongue_press_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_tightenD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_pressU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_tightenD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_tongue_roll_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_stickyInnerU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_funnelD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_neck_stretch_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_suckBlow_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_tightenU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_tightenU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_pressD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_neck_digastricUpDown_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipsTogetherD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_funnelU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_towardsU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_stickyOuterD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_purseD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipBiteU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_pressD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipSticky_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_neck_stretch_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_pressU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_purseD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_tongue_tip_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_jaw_clench_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipSticky_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_neck_throatExhaleInhale_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_tongue_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipBiteU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_tongue_narrowWide_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_suckBlow_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_jaw_ChinRaiseD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_purseU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_towardsD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_jaw_ChinRaiseU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_jaw_openExtreme_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_jaw_fwdBack_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_stickyInnerD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipBiteD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_jaw_clench_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipsTogetherU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_purseU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipsPressU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_jaw_ChinRaiseU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_stickyOuterU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_neck_mastoidContract_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipsBlow_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_jaw_chinCompress_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_jaw_ChinRaiseD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipsTogetherD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_neck_throatUpDown_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_tongue_inOut_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_ear_up_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_ear_up_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_cornerDepress_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_upperLipRaise_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_dimple_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_sharpCornerPull_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_cornerPull_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_teethD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_teethU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_teeth_fwdBackU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_corner_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_corner_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_teeth_fwdBackD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eye_faceScrunch_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_pushPullU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eyelashes_tweakerOut_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_thicknessU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_pushPullD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_thicknessU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_cornerSharpnessD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_mouth_lipShiftD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipsRollD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eyelashes_tweakerOut_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_thicknessD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_cornerSharpnessU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_mouth_lipShiftU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eyelashes_tweakerIn_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipsRollU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eye_eyelidU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipsRollD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_cornerSharpnessD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_thicknessD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eye_eyelidD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipsRollU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_cornerSharpnessU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_nose_nasolabialDeepen_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eye_faceScrunch_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_pushPullU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipsTowardsTeethD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipsTowardsTeethD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eye_eyelidU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eyelashes_tweakerIn_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_nose_nasolabialDeepen_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_pushPullD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipsTowardsTeethU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eye_eyelidD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipsTowardsTeethU_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_lipsPressD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_lipsPressD_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_mouth_stretchLipsClose_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_mouth_stretchLipsClose_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_C_eyesAim_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_L_eyeAim_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_R_eyeAim_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_convergenceSwitch_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_faceGUIfollowHead_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTRL_eyesAimFollowHead_MetaData[] = {
		{ "Category", "FaceGood" },
		{ "ModuleRelativePath", "Public/FgControlRigTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_C_mouth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_C_jaw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_L_eye;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eye_blink;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_R_eye;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eye_blink;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_brow_lateral;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_brow_lateral;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_brow_down;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_brow_down;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_brow_raiseOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_brow_raiseIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_brow_raiseIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_brow_raiseOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eye_pupil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eye_pupil;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_C_eye;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_eye_parallelLook;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eye_cheekRaise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eye_squintInner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eye_lidPress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_nose_wrinkleUpper;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_nose_wrinkleUpper;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eye_squintInner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eye_cheekRaise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eye_lidPress;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_R_nose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_L_nose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_upperLipRaise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_sharpCornerPull;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_cornerPull;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_dimple;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_cornerDepress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_stretch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lowerLipDepress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lowerLipDepress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_stretch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_towardsD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipsBlow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_stickyInnerU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_jaw_chinCompress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_funnelU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_neck_mastoidContract;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_neck_swallow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_stickyOuterD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_mouth_stickyD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipsPressU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_towardsU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_stickyInnerD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipBiteD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_funnelD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_lookAtSwitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_stickyOuterU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_mouth_stickyU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipsTogetherU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_tongue_press;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_tightenD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_pressU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_tightenD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_C_tongue_roll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_stickyInnerU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_funnelD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_neck_stretch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_suckBlow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_tightenU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_tightenU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_pressD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_neck_digastricUpDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipsTogetherD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_funnelU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_towardsU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_stickyOuterD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_purseD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipBiteU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_pressD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipSticky;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_neck_stretch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_pressU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_purseD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_C_tongue_tip;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_jaw_clench;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipSticky;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_neck_throatExhaleInhale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_C_tongue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipBiteU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_tongue_narrowWide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_suckBlow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_jaw_ChinRaiseD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_purseU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_towardsD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_jaw_ChinRaiseU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_jaw_openExtreme;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_jaw_fwdBack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_stickyInnerD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipBiteD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_jaw_clench;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipsTogetherU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_purseU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipsPressU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_jaw_ChinRaiseU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_stickyOuterU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_neck_mastoidContract;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipsBlow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_jaw_chinCompress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_jaw_ChinRaiseD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipsTogetherD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_neck_throatUpDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_tongue_inOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_ear_up;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_ear_up;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_cornerDepress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_upperLipRaise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_dimple;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_sharpCornerPull;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_cornerPull;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_C_teethD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_C_teethU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_teeth_fwdBackU;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_L_mouth_corner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CTRL_R_mouth_corner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_teeth_fwdBackD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eye_faceScrunch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_pushPullU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eyelashes_tweakerOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_thicknessU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_pushPullD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_thicknessU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_cornerSharpnessD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_mouth_lipShiftD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipsRollD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eyelashes_tweakerOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_thicknessD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_cornerSharpnessU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_mouth_lipShiftU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eyelashes_tweakerIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipsRollU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eye_eyelidU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipsRollD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_cornerSharpnessD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_thicknessD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eye_eyelidD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipsRollU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_cornerSharpnessU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_nose_nasolabialDeepen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eye_faceScrunch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_pushPullU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipsTowardsTeethD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipsTowardsTeethD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eye_eyelidU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eyelashes_tweakerIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_nose_nasolabialDeepen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_pushPullD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipsTowardsTeethU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eye_eyelidD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipsTowardsTeethU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_lipsPressD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_lipsPressD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_mouth_stretchLipsClose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_mouth_stretchLipsClose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_C_eyesAim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_L_eyeAim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_R_eyeAim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_convergenceSwitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_faceGUIfollowHead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CTRL_eyesAimFollowHead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFgContrlRigStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_mouth = { "CTRL_C_mouth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_mouth), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_mouth_MetaData), NewProp_CTRL_C_mouth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_jaw = { "CTRL_C_jaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_jaw), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_jaw_MetaData), NewProp_CTRL_C_jaw_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye = { "CTRL_L_eye", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eye), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eye_MetaData), NewProp_CTRL_L_eye_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_blink = { "CTRL_L_eye_blink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eye_blink), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eye_blink_MetaData), NewProp_CTRL_L_eye_blink_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye = { "CTRL_R_eye", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eye), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eye_MetaData), NewProp_CTRL_R_eye_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_blink = { "CTRL_R_eye_blink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eye_blink), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eye_blink_MetaData), NewProp_CTRL_R_eye_blink_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_brow_lateral = { "CTRL_R_brow_lateral", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_brow_lateral), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_brow_lateral_MetaData), NewProp_CTRL_R_brow_lateral_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_brow_lateral = { "CTRL_L_brow_lateral", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_brow_lateral), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_brow_lateral_MetaData), NewProp_CTRL_L_brow_lateral_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_brow_down = { "CTRL_R_brow_down", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_brow_down), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_brow_down_MetaData), NewProp_CTRL_R_brow_down_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_brow_down = { "CTRL_L_brow_down", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_brow_down), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_brow_down_MetaData), NewProp_CTRL_L_brow_down_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_brow_raiseOut = { "CTRL_L_brow_raiseOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_brow_raiseOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_brow_raiseOut_MetaData), NewProp_CTRL_L_brow_raiseOut_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_brow_raiseIn = { "CTRL_L_brow_raiseIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_brow_raiseIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_brow_raiseIn_MetaData), NewProp_CTRL_L_brow_raiseIn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_brow_raiseIn = { "CTRL_R_brow_raiseIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_brow_raiseIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_brow_raiseIn_MetaData), NewProp_CTRL_R_brow_raiseIn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_brow_raiseOut = { "CTRL_R_brow_raiseOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_brow_raiseOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_brow_raiseOut_MetaData), NewProp_CTRL_R_brow_raiseOut_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_pupil = { "CTRL_R_eye_pupil", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eye_pupil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eye_pupil_MetaData), NewProp_CTRL_R_eye_pupil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_pupil = { "CTRL_L_eye_pupil", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eye_pupil), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eye_pupil_MetaData), NewProp_CTRL_L_eye_pupil_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_eye = { "CTRL_C_eye", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_eye), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_eye_MetaData), NewProp_CTRL_C_eye_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_eye_parallelLook = { "CTRL_C_eye_parallelLook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_eye_parallelLook), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_eye_parallelLook_MetaData), NewProp_CTRL_C_eye_parallelLook_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_cheekRaise = { "CTRL_L_eye_cheekRaise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eye_cheekRaise), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eye_cheekRaise_MetaData), NewProp_CTRL_L_eye_cheekRaise_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_squintInner = { "CTRL_L_eye_squintInner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eye_squintInner), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eye_squintInner_MetaData), NewProp_CTRL_L_eye_squintInner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_lidPress = { "CTRL_L_eye_lidPress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eye_lidPress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eye_lidPress_MetaData), NewProp_CTRL_L_eye_lidPress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_nose_wrinkleUpper = { "CTRL_L_nose_wrinkleUpper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_nose_wrinkleUpper), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_nose_wrinkleUpper_MetaData), NewProp_CTRL_L_nose_wrinkleUpper_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_nose_wrinkleUpper = { "CTRL_R_nose_wrinkleUpper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_nose_wrinkleUpper), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_nose_wrinkleUpper_MetaData), NewProp_CTRL_R_nose_wrinkleUpper_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_squintInner = { "CTRL_R_eye_squintInner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eye_squintInner), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eye_squintInner_MetaData), NewProp_CTRL_R_eye_squintInner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_cheekRaise = { "CTRL_R_eye_cheekRaise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eye_cheekRaise), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eye_cheekRaise_MetaData), NewProp_CTRL_R_eye_cheekRaise_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_lidPress = { "CTRL_R_eye_lidPress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eye_lidPress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eye_lidPress_MetaData), NewProp_CTRL_R_eye_lidPress_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_nose = { "CTRL_R_nose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_nose), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_nose_MetaData), NewProp_CTRL_R_nose_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_nose = { "CTRL_L_nose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_nose), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_nose_MetaData), NewProp_CTRL_L_nose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_upperLipRaise = { "CTRL_L_mouth_upperLipRaise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_upperLipRaise), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_upperLipRaise_MetaData), NewProp_CTRL_L_mouth_upperLipRaise_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_sharpCornerPull = { "CTRL_L_mouth_sharpCornerPull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_sharpCornerPull), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_sharpCornerPull_MetaData), NewProp_CTRL_L_mouth_sharpCornerPull_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_cornerPull = { "CTRL_L_mouth_cornerPull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_cornerPull), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_cornerPull_MetaData), NewProp_CTRL_L_mouth_cornerPull_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_dimple = { "CTRL_L_mouth_dimple", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_dimple), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_dimple_MetaData), NewProp_CTRL_L_mouth_dimple_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_cornerDepress = { "CTRL_L_mouth_cornerDepress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_cornerDepress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_cornerDepress_MetaData), NewProp_CTRL_L_mouth_cornerDepress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stretch = { "CTRL_L_mouth_stretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_stretch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_stretch_MetaData), NewProp_CTRL_L_mouth_stretch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lowerLipDepress = { "CTRL_L_mouth_lowerLipDepress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lowerLipDepress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lowerLipDepress_MetaData), NewProp_CTRL_L_mouth_lowerLipDepress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lowerLipDepress = { "CTRL_R_mouth_lowerLipDepress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lowerLipDepress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lowerLipDepress_MetaData), NewProp_CTRL_R_mouth_lowerLipDepress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stretch = { "CTRL_R_mouth_stretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_stretch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_stretch_MetaData), NewProp_CTRL_R_mouth_stretch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_towardsD = { "CTRL_L_mouth_towardsD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_towardsD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_towardsD_MetaData), NewProp_CTRL_L_mouth_towardsD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsBlow = { "CTRL_R_mouth_lipsBlow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipsBlow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipsBlow_MetaData), NewProp_CTRL_R_mouth_lipsBlow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stickyInnerU = { "CTRL_R_mouth_stickyInnerU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_stickyInnerU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_stickyInnerU_MetaData), NewProp_CTRL_R_mouth_stickyInnerU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_jaw_chinCompress = { "CTRL_L_jaw_chinCompress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_jaw_chinCompress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_jaw_chinCompress_MetaData), NewProp_CTRL_L_jaw_chinCompress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_funnelU = { "CTRL_R_mouth_funnelU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_funnelU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_funnelU_MetaData), NewProp_CTRL_R_mouth_funnelU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_neck_mastoidContract = { "CTRL_L_neck_mastoidContract", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_neck_mastoidContract), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_neck_mastoidContract_MetaData), NewProp_CTRL_L_neck_mastoidContract_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_neck_swallow = { "CTRL_C_neck_swallow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_neck_swallow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_neck_swallow_MetaData), NewProp_CTRL_C_neck_swallow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stickyOuterD = { "CTRL_R_mouth_stickyOuterD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_stickyOuterD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_stickyOuterD_MetaData), NewProp_CTRL_R_mouth_stickyOuterD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_mouth_stickyD = { "CTRL_C_mouth_stickyD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_mouth_stickyD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_mouth_stickyD_MetaData), NewProp_CTRL_C_mouth_stickyD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsPressU = { "CTRL_R_mouth_lipsPressU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipsPressU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipsPressU_MetaData), NewProp_CTRL_R_mouth_lipsPressU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_towardsU = { "CTRL_L_mouth_towardsU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_towardsU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_towardsU_MetaData), NewProp_CTRL_L_mouth_towardsU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stickyInnerD = { "CTRL_R_mouth_stickyInnerD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_stickyInnerD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_stickyInnerD_MetaData), NewProp_CTRL_R_mouth_stickyInnerD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipBiteD = { "CTRL_R_mouth_lipBiteD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipBiteD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipBiteD_MetaData), NewProp_CTRL_R_mouth_lipBiteD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_funnelD = { "CTRL_R_mouth_funnelD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_funnelD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_funnelD_MetaData), NewProp_CTRL_R_mouth_funnelD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_lookAtSwitch = { "CTRL_lookAtSwitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_lookAtSwitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_lookAtSwitch_MetaData), NewProp_CTRL_lookAtSwitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stickyOuterU = { "CTRL_R_mouth_stickyOuterU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_stickyOuterU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_stickyOuterU_MetaData), NewProp_CTRL_R_mouth_stickyOuterU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_mouth_stickyU = { "CTRL_C_mouth_stickyU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_mouth_stickyU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_mouth_stickyU_MetaData), NewProp_CTRL_C_mouth_stickyU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsTogetherU = { "CTRL_L_mouth_lipsTogetherU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipsTogetherU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipsTogetherU_MetaData), NewProp_CTRL_L_mouth_lipsTogetherU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue_press = { "CTRL_C_tongue_press", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_tongue_press), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_tongue_press_MetaData), NewProp_CTRL_C_tongue_press_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_tightenD = { "CTRL_L_mouth_tightenD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_tightenD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_tightenD_MetaData), NewProp_CTRL_L_mouth_tightenD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_pressU = { "CTRL_L_mouth_pressU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_pressU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_pressU_MetaData), NewProp_CTRL_L_mouth_pressU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_tightenD = { "CTRL_R_mouth_tightenD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_tightenD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_tightenD_MetaData), NewProp_CTRL_R_mouth_tightenD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue_roll = { "CTRL_C_tongue_roll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_tongue_roll), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_tongue_roll_MetaData), NewProp_CTRL_C_tongue_roll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stickyInnerU = { "CTRL_L_mouth_stickyInnerU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_stickyInnerU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_stickyInnerU_MetaData), NewProp_CTRL_L_mouth_stickyInnerU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_funnelD = { "CTRL_L_mouth_funnelD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_funnelD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_funnelD_MetaData), NewProp_CTRL_L_mouth_funnelD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_neck_stretch = { "CTRL_L_neck_stretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_neck_stretch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_neck_stretch_MetaData), NewProp_CTRL_L_neck_stretch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_suckBlow = { "CTRL_L_mouth_suckBlow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_suckBlow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_suckBlow_MetaData), NewProp_CTRL_L_mouth_suckBlow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_tightenU = { "CTRL_L_mouth_tightenU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_tightenU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_tightenU_MetaData), NewProp_CTRL_L_mouth_tightenU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_tightenU = { "CTRL_R_mouth_tightenU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_tightenU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_tightenU_MetaData), NewProp_CTRL_R_mouth_tightenU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_pressD = { "CTRL_L_mouth_pressD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_pressD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_pressD_MetaData), NewProp_CTRL_L_mouth_pressD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_neck_digastricUpDown = { "CTRL_neck_digastricUpDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_neck_digastricUpDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_neck_digastricUpDown_MetaData), NewProp_CTRL_neck_digastricUpDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsTogetherD = { "CTRL_L_mouth_lipsTogetherD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipsTogetherD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipsTogetherD_MetaData), NewProp_CTRL_L_mouth_lipsTogetherD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_funnelU = { "CTRL_L_mouth_funnelU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_funnelU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_funnelU_MetaData), NewProp_CTRL_L_mouth_funnelU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_towardsU = { "CTRL_R_mouth_towardsU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_towardsU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_towardsU_MetaData), NewProp_CTRL_R_mouth_towardsU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stickyOuterD = { "CTRL_L_mouth_stickyOuterD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_stickyOuterD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_stickyOuterD_MetaData), NewProp_CTRL_L_mouth_stickyOuterD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_purseD = { "CTRL_R_mouth_purseD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_purseD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_purseD_MetaData), NewProp_CTRL_R_mouth_purseD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipBiteU = { "CTRL_L_mouth_lipBiteU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipBiteU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipBiteU_MetaData), NewProp_CTRL_L_mouth_lipBiteU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_pressD = { "CTRL_R_mouth_pressD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_pressD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_pressD_MetaData), NewProp_CTRL_R_mouth_pressD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipSticky = { "CTRL_R_mouth_lipSticky", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipSticky), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipSticky_MetaData), NewProp_CTRL_R_mouth_lipSticky_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_neck_stretch = { "CTRL_R_neck_stretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_neck_stretch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_neck_stretch_MetaData), NewProp_CTRL_R_neck_stretch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_pressU = { "CTRL_R_mouth_pressU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_pressU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_pressU_MetaData), NewProp_CTRL_R_mouth_pressU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_purseD = { "CTRL_L_mouth_purseD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_purseD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_purseD_MetaData), NewProp_CTRL_L_mouth_purseD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue_tip = { "CTRL_C_tongue_tip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_tongue_tip), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_tongue_tip_MetaData), NewProp_CTRL_C_tongue_tip_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_jaw_clench = { "CTRL_R_jaw_clench", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_jaw_clench), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_jaw_clench_MetaData), NewProp_CTRL_R_jaw_clench_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipSticky = { "CTRL_L_mouth_lipSticky", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipSticky), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipSticky_MetaData), NewProp_CTRL_L_mouth_lipSticky_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_neck_throatExhaleInhale = { "CTRL_neck_throatExhaleInhale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_neck_throatExhaleInhale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_neck_throatExhaleInhale_MetaData), NewProp_CTRL_neck_throatExhaleInhale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue = { "CTRL_C_tongue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_tongue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_tongue_MetaData), NewProp_CTRL_C_tongue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipBiteU = { "CTRL_R_mouth_lipBiteU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipBiteU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipBiteU_MetaData), NewProp_CTRL_R_mouth_lipBiteU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue_narrowWide = { "CTRL_C_tongue_narrowWide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_tongue_narrowWide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_tongue_narrowWide_MetaData), NewProp_CTRL_C_tongue_narrowWide_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_suckBlow = { "CTRL_R_mouth_suckBlow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_suckBlow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_suckBlow_MetaData), NewProp_CTRL_R_mouth_suckBlow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_jaw_ChinRaiseD = { "CTRL_R_jaw_ChinRaiseD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_jaw_ChinRaiseD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_jaw_ChinRaiseD_MetaData), NewProp_CTRL_R_jaw_ChinRaiseD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_purseU = { "CTRL_L_mouth_purseU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_purseU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_purseU_MetaData), NewProp_CTRL_L_mouth_purseU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_towardsD = { "CTRL_R_mouth_towardsD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_towardsD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_towardsD_MetaData), NewProp_CTRL_R_mouth_towardsD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_jaw_ChinRaiseU = { "CTRL_R_jaw_ChinRaiseU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_jaw_ChinRaiseU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_jaw_ChinRaiseU_MetaData), NewProp_CTRL_R_jaw_ChinRaiseU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_jaw_openExtreme = { "CTRL_C_jaw_openExtreme", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_jaw_openExtreme), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_jaw_openExtreme_MetaData), NewProp_CTRL_C_jaw_openExtreme_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_jaw_fwdBack = { "CTRL_C_jaw_fwdBack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_jaw_fwdBack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_jaw_fwdBack_MetaData), NewProp_CTRL_C_jaw_fwdBack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stickyInnerD = { "CTRL_L_mouth_stickyInnerD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_stickyInnerD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_stickyInnerD_MetaData), NewProp_CTRL_L_mouth_stickyInnerD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipBiteD = { "CTRL_L_mouth_lipBiteD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipBiteD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipBiteD_MetaData), NewProp_CTRL_L_mouth_lipBiteD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_jaw_clench = { "CTRL_L_jaw_clench", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_jaw_clench), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_jaw_clench_MetaData), NewProp_CTRL_L_jaw_clench_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsTogetherU = { "CTRL_R_mouth_lipsTogetherU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipsTogetherU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipsTogetherU_MetaData), NewProp_CTRL_R_mouth_lipsTogetherU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_purseU = { "CTRL_R_mouth_purseU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_purseU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_purseU_MetaData), NewProp_CTRL_R_mouth_purseU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsPressU = { "CTRL_L_mouth_lipsPressU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipsPressU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipsPressU_MetaData), NewProp_CTRL_L_mouth_lipsPressU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_jaw_ChinRaiseU = { "CTRL_L_jaw_ChinRaiseU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_jaw_ChinRaiseU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_jaw_ChinRaiseU_MetaData), NewProp_CTRL_L_jaw_ChinRaiseU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stickyOuterU = { "CTRL_L_mouth_stickyOuterU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_stickyOuterU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_stickyOuterU_MetaData), NewProp_CTRL_L_mouth_stickyOuterU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_neck_mastoidContract = { "CTRL_R_neck_mastoidContract", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_neck_mastoidContract), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_neck_mastoidContract_MetaData), NewProp_CTRL_R_neck_mastoidContract_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsBlow = { "CTRL_L_mouth_lipsBlow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipsBlow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipsBlow_MetaData), NewProp_CTRL_L_mouth_lipsBlow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_jaw_chinCompress = { "CTRL_R_jaw_chinCompress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_jaw_chinCompress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_jaw_chinCompress_MetaData), NewProp_CTRL_R_jaw_chinCompress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_jaw_ChinRaiseD = { "CTRL_L_jaw_ChinRaiseD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_jaw_ChinRaiseD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_jaw_ChinRaiseD_MetaData), NewProp_CTRL_L_jaw_ChinRaiseD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsTogetherD = { "CTRL_R_mouth_lipsTogetherD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipsTogetherD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipsTogetherD_MetaData), NewProp_CTRL_R_mouth_lipsTogetherD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_neck_throatUpDown = { "CTRL_neck_throatUpDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_neck_throatUpDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_neck_throatUpDown_MetaData), NewProp_CTRL_neck_throatUpDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue_inOut = { "CTRL_C_tongue_inOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_tongue_inOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_tongue_inOut_MetaData), NewProp_CTRL_C_tongue_inOut_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_ear_up = { "CTRL_R_ear_up", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_ear_up), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_ear_up_MetaData), NewProp_CTRL_R_ear_up_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_ear_up = { "CTRL_L_ear_up", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_ear_up), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_ear_up_MetaData), NewProp_CTRL_L_ear_up_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_cornerDepress = { "CTRL_R_mouth_cornerDepress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_cornerDepress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_cornerDepress_MetaData), NewProp_CTRL_R_mouth_cornerDepress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_upperLipRaise = { "CTRL_R_mouth_upperLipRaise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_upperLipRaise), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_upperLipRaise_MetaData), NewProp_CTRL_R_mouth_upperLipRaise_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_dimple = { "CTRL_R_mouth_dimple", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_dimple), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_dimple_MetaData), NewProp_CTRL_R_mouth_dimple_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_sharpCornerPull = { "CTRL_R_mouth_sharpCornerPull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_sharpCornerPull), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_sharpCornerPull_MetaData), NewProp_CTRL_R_mouth_sharpCornerPull_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_cornerPull = { "CTRL_R_mouth_cornerPull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_cornerPull), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_cornerPull_MetaData), NewProp_CTRL_R_mouth_cornerPull_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_teethD = { "CTRL_C_teethD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_teethD), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_teethD_MetaData), NewProp_CTRL_C_teethD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_teethU = { "CTRL_C_teethU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_teethU), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_teethU_MetaData), NewProp_CTRL_C_teethU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_teeth_fwdBackU = { "CTRL_C_teeth_fwdBackU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_teeth_fwdBackU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_teeth_fwdBackU_MetaData), NewProp_CTRL_C_teeth_fwdBackU_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_corner = { "CTRL_L_mouth_corner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_corner), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_corner_MetaData), NewProp_CTRL_L_mouth_corner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_corner = { "CTRL_R_mouth_corner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_corner), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_corner_MetaData), NewProp_CTRL_R_mouth_corner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_teeth_fwdBackD = { "CTRL_C_teeth_fwdBackD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_teeth_fwdBackD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_teeth_fwdBackD_MetaData), NewProp_CTRL_C_teeth_fwdBackD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_faceScrunch = { "CTRL_R_eye_faceScrunch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eye_faceScrunch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eye_faceScrunch_MetaData), NewProp_CTRL_R_eye_faceScrunch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_pushPullU = { "CTRL_L_mouth_pushPullU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_pushPullU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_pushPullU_MetaData), NewProp_CTRL_L_mouth_pushPullU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eyelashes_tweakerOut = { "CTRL_R_eyelashes_tweakerOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eyelashes_tweakerOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eyelashes_tweakerOut_MetaData), NewProp_CTRL_R_eyelashes_tweakerOut_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_thicknessU = { "CTRL_R_mouth_thicknessU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_thicknessU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_thicknessU_MetaData), NewProp_CTRL_R_mouth_thicknessU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_pushPullD = { "CTRL_L_mouth_pushPullD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_pushPullD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_pushPullD_MetaData), NewProp_CTRL_L_mouth_pushPullD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_thicknessU = { "CTRL_L_mouth_thicknessU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_thicknessU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_thicknessU_MetaData), NewProp_CTRL_L_mouth_thicknessU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_cornerSharpnessD = { "CTRL_R_mouth_cornerSharpnessD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_cornerSharpnessD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_cornerSharpnessD_MetaData), NewProp_CTRL_R_mouth_cornerSharpnessD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_mouth_lipShiftD = { "CTRL_C_mouth_lipShiftD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_mouth_lipShiftD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_mouth_lipShiftD_MetaData), NewProp_CTRL_C_mouth_lipShiftD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsRollD = { "CTRL_R_mouth_lipsRollD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipsRollD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipsRollD_MetaData), NewProp_CTRL_R_mouth_lipsRollD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eyelashes_tweakerOut = { "CTRL_L_eyelashes_tweakerOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eyelashes_tweakerOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eyelashes_tweakerOut_MetaData), NewProp_CTRL_L_eyelashes_tweakerOut_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_thicknessD = { "CTRL_L_mouth_thicknessD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_thicknessD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_thicknessD_MetaData), NewProp_CTRL_L_mouth_thicknessD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_cornerSharpnessU = { "CTRL_R_mouth_cornerSharpnessU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_cornerSharpnessU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_cornerSharpnessU_MetaData), NewProp_CTRL_R_mouth_cornerSharpnessU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_mouth_lipShiftU = { "CTRL_C_mouth_lipShiftU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_mouth_lipShiftU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_mouth_lipShiftU_MetaData), NewProp_CTRL_C_mouth_lipShiftU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eyelashes_tweakerIn = { "CTRL_R_eyelashes_tweakerIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eyelashes_tweakerIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eyelashes_tweakerIn_MetaData), NewProp_CTRL_R_eyelashes_tweakerIn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsRollU = { "CTRL_R_mouth_lipsRollU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipsRollU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipsRollU_MetaData), NewProp_CTRL_R_mouth_lipsRollU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_eyelidU = { "CTRL_L_eye_eyelidU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eye_eyelidU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eye_eyelidU_MetaData), NewProp_CTRL_L_eye_eyelidU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsRollD = { "CTRL_L_mouth_lipsRollD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipsRollD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipsRollD_MetaData), NewProp_CTRL_L_mouth_lipsRollD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_cornerSharpnessD = { "CTRL_L_mouth_cornerSharpnessD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_cornerSharpnessD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_cornerSharpnessD_MetaData), NewProp_CTRL_L_mouth_cornerSharpnessD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_thicknessD = { "CTRL_R_mouth_thicknessD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_thicknessD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_thicknessD_MetaData), NewProp_CTRL_R_mouth_thicknessD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_eyelidD = { "CTRL_L_eye_eyelidD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eye_eyelidD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eye_eyelidD_MetaData), NewProp_CTRL_L_eye_eyelidD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsRollU = { "CTRL_L_mouth_lipsRollU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipsRollU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipsRollU_MetaData), NewProp_CTRL_L_mouth_lipsRollU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_cornerSharpnessU = { "CTRL_L_mouth_cornerSharpnessU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_cornerSharpnessU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_cornerSharpnessU_MetaData), NewProp_CTRL_L_mouth_cornerSharpnessU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_nose_nasolabialDeepen = { "CTRL_L_nose_nasolabialDeepen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_nose_nasolabialDeepen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_nose_nasolabialDeepen_MetaData), NewProp_CTRL_L_nose_nasolabialDeepen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_faceScrunch = { "CTRL_L_eye_faceScrunch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eye_faceScrunch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eye_faceScrunch_MetaData), NewProp_CTRL_L_eye_faceScrunch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_pushPullU = { "CTRL_R_mouth_pushPullU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_pushPullU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_pushPullU_MetaData), NewProp_CTRL_R_mouth_pushPullU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsTowardsTeethD = { "CTRL_R_mouth_lipsTowardsTeethD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipsTowardsTeethD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipsTowardsTeethD_MetaData), NewProp_CTRL_R_mouth_lipsTowardsTeethD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsTowardsTeethD = { "CTRL_L_mouth_lipsTowardsTeethD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipsTowardsTeethD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipsTowardsTeethD_MetaData), NewProp_CTRL_L_mouth_lipsTowardsTeethD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_eyelidU = { "CTRL_R_eye_eyelidU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eye_eyelidU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eye_eyelidU_MetaData), NewProp_CTRL_R_eye_eyelidU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eyelashes_tweakerIn = { "CTRL_L_eyelashes_tweakerIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eyelashes_tweakerIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eyelashes_tweakerIn_MetaData), NewProp_CTRL_L_eyelashes_tweakerIn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_nose_nasolabialDeepen = { "CTRL_R_nose_nasolabialDeepen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_nose_nasolabialDeepen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_nose_nasolabialDeepen_MetaData), NewProp_CTRL_R_nose_nasolabialDeepen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_pushPullD = { "CTRL_R_mouth_pushPullD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_pushPullD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_pushPullD_MetaData), NewProp_CTRL_R_mouth_pushPullD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsTowardsTeethU = { "CTRL_L_mouth_lipsTowardsTeethU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipsTowardsTeethU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipsTowardsTeethU_MetaData), NewProp_CTRL_L_mouth_lipsTowardsTeethU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_eyelidD = { "CTRL_R_eye_eyelidD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eye_eyelidD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eye_eyelidD_MetaData), NewProp_CTRL_R_eye_eyelidD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsTowardsTeethU = { "CTRL_R_mouth_lipsTowardsTeethU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipsTowardsTeethU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipsTowardsTeethU_MetaData), NewProp_CTRL_R_mouth_lipsTowardsTeethU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsPressD = { "CTRL_R_mouth_lipsPressD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_lipsPressD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_lipsPressD_MetaData), NewProp_CTRL_R_mouth_lipsPressD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsPressD = { "CTRL_L_mouth_lipsPressD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_lipsPressD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_lipsPressD_MetaData), NewProp_CTRL_L_mouth_lipsPressD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stretchLipsClose = { "CTRL_R_mouth_stretchLipsClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_mouth_stretchLipsClose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_mouth_stretchLipsClose_MetaData), NewProp_CTRL_R_mouth_stretchLipsClose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stretchLipsClose = { "CTRL_L_mouth_stretchLipsClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_mouth_stretchLipsClose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_mouth_stretchLipsClose_MetaData), NewProp_CTRL_L_mouth_stretchLipsClose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_eyesAim = { "CTRL_C_eyesAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_C_eyesAim), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_C_eyesAim_MetaData), NewProp_CTRL_C_eyesAim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eyeAim = { "CTRL_L_eyeAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_L_eyeAim), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_L_eyeAim_MetaData), NewProp_CTRL_L_eyeAim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eyeAim = { "CTRL_R_eyeAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_R_eyeAim), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_R_eyeAim_MetaData), NewProp_CTRL_R_eyeAim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_convergenceSwitch = { "CTRL_convergenceSwitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_convergenceSwitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_convergenceSwitch_MetaData), NewProp_CTRL_convergenceSwitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_faceGUIfollowHead = { "CTRL_faceGUIfollowHead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_faceGUIfollowHead), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_faceGUIfollowHead_MetaData), NewProp_CTRL_faceGUIfollowHead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_eyesAimFollowHead = { "CTRL_eyesAimFollowHead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFgContrlRigStruct, CTRL_eyesAimFollowHead), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTRL_eyesAimFollowHead_MetaData), NewProp_CTRL_eyesAimFollowHead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_mouth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_jaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_blink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_blink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_brow_lateral,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_brow_lateral,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_brow_down,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_brow_down,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_brow_raiseOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_brow_raiseIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_brow_raiseIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_brow_raiseOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_pupil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_pupil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_eye_parallelLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_cheekRaise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_squintInner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_lidPress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_nose_wrinkleUpper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_nose_wrinkleUpper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_squintInner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_cheekRaise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_lidPress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_nose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_nose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_upperLipRaise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_sharpCornerPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_cornerPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_dimple,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_cornerDepress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lowerLipDepress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lowerLipDepress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_towardsD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsBlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stickyInnerU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_jaw_chinCompress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_funnelU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_neck_mastoidContract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_neck_swallow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stickyOuterD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_mouth_stickyD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsPressU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_towardsU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stickyInnerD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipBiteD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_funnelD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_lookAtSwitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stickyOuterU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_mouth_stickyU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsTogetherU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue_press,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_tightenD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_pressU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_tightenD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue_roll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stickyInnerU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_funnelD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_neck_stretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_suckBlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_tightenU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_tightenU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_pressD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_neck_digastricUpDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsTogetherD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_funnelU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_towardsU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stickyOuterD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_purseD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipBiteU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_pressD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipSticky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_neck_stretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_pressU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_purseD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue_tip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_jaw_clench,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipSticky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_neck_throatExhaleInhale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipBiteU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue_narrowWide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_suckBlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_jaw_ChinRaiseD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_purseU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_towardsD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_jaw_ChinRaiseU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_jaw_openExtreme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_jaw_fwdBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stickyInnerD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipBiteD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_jaw_clench,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsTogetherU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_purseU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsPressU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_jaw_ChinRaiseU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stickyOuterU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_neck_mastoidContract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsBlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_jaw_chinCompress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_jaw_ChinRaiseD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsTogetherD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_neck_throatUpDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_tongue_inOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_ear_up,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_ear_up,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_cornerDepress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_upperLipRaise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_dimple,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_sharpCornerPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_cornerPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_teethD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_teethU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_teeth_fwdBackU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_corner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_corner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_teeth_fwdBackD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_faceScrunch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_pushPullU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eyelashes_tweakerOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_thicknessU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_pushPullD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_thicknessU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_cornerSharpnessD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_mouth_lipShiftD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsRollD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eyelashes_tweakerOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_thicknessD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_cornerSharpnessU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_mouth_lipShiftU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eyelashes_tweakerIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsRollU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_eyelidU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsRollD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_cornerSharpnessD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_thicknessD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_eyelidD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsRollU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_cornerSharpnessU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_nose_nasolabialDeepen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eye_faceScrunch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_pushPullU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsTowardsTeethD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsTowardsTeethD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_eyelidU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eyelashes_tweakerIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_nose_nasolabialDeepen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_pushPullD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsTowardsTeethU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eye_eyelidD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsTowardsTeethU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_lipsPressD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_lipsPressD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_mouth_stretchLipsClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_mouth_stretchLipsClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_C_eyesAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_L_eyeAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_R_eyeAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_convergenceSwitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_faceGUIfollowHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewProp_CTRL_eyesAimFollowHead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FgControlRig,
	nullptr,
	&NewStructOps,
	"FgContrlRigStruct",
	Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::PropPointers),
	sizeof(FFgContrlRigStruct),
	alignof(FFgContrlRigStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFgContrlRigStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FgContrlRigStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FgContrlRigStruct.InnerSingleton, Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FgContrlRigStruct.InnerSingleton;
}
// End ScriptStruct FFgContrlRigStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFgContrlRigStruct::StaticStruct, Z_Construct_UScriptStruct_FFgContrlRigStruct_Statics::NewStructOps, TEXT("FgContrlRigStruct"), &Z_Registration_Info_UScriptStruct_FgContrlRigStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFgContrlRigStruct), 2545448723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigTypes_h_3491112468(TEXT("/Script/FgControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FgControlRig_Source_FgControlRig_Public_FgControlRigTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
