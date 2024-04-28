// Copyright 2023 FACEGOOD, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FgControlRigTypes.generated.h"

USTRUCT(BlueprintType)
struct FGCONTROLRIG_API FFgContrlRigStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_C_mouth =  FVector2D(0,0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_C_jaw = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_L_eye = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eye_blink = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_R_eye = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eye_blink = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_brow_lateral = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_brow_lateral = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_brow_down = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_brow_down = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_brow_raiseOut = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_brow_raiseIn = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_brow_raiseIn = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_brow_raiseOut = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eye_pupil = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eye_pupil = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_C_eye = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_eye_parallelLook = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eye_cheekRaise = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eye_squintInner = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eye_lidPress = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_nose_wrinkleUpper = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_nose_wrinkleUpper = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eye_squintInner = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eye_cheekRaise = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eye_lidPress = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_R_nose = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_L_nose = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_upperLipRaise = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_sharpCornerPull = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_cornerPull = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_dimple = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_cornerDepress = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_stretch = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lowerLipDepress = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lowerLipDepress = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_stretch = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_towardsD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipsBlow = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_stickyInnerU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_jaw_chinCompress = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_funnelU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_neck_mastoidContract = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_neck_swallow = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_stickyOuterD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_mouth_stickyD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipsPressU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_towardsU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_stickyInnerD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipBiteD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_funnelD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_lookAtSwitch = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_stickyOuterU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_mouth_stickyU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipsTogetherU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_tongue_press = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_tightenD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_pressU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_tightenD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_C_tongue_roll = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_stickyInnerU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_funnelD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_neck_stretch = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_suckBlow = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_tightenU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_tightenU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_pressD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_neck_digastricUpDown = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipsTogetherD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_funnelU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_towardsU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_stickyOuterD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_purseD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipBiteU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_pressD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipSticky = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_neck_stretch = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_pressU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_purseD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_C_tongue_tip = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_jaw_clench = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipSticky = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_neck_throatExhaleInhale = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_C_tongue = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipBiteU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_tongue_narrowWide = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_suckBlow = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_jaw_ChinRaiseD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_purseU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_towardsD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_jaw_ChinRaiseU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_jaw_openExtreme = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_jaw_fwdBack = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_stickyInnerD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipBiteD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_jaw_clench = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipsTogetherU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_purseU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipsPressU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_jaw_ChinRaiseU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_stickyOuterU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_neck_mastoidContract = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipsBlow = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_jaw_chinCompress = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_jaw_ChinRaiseD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipsTogetherD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_neck_throatUpDown = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_tongue_inOut = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_ear_up = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_ear_up = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_cornerDepress = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_upperLipRaise = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_dimple = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_sharpCornerPull = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_cornerPull = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_C_teethD = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_C_teethU = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_teeth_fwdBackU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_L_mouth_corner = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		FVector2D  CTRL_R_mouth_corner = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_teeth_fwdBackD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eye_faceScrunch = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_pushPullU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eyelashes_tweakerOut = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_thicknessU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_pushPullD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_thicknessU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_cornerSharpnessD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_mouth_lipShiftD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipsRollD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eyelashes_tweakerOut = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_thicknessD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_cornerSharpnessU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_mouth_lipShiftU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eyelashes_tweakerIn = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipsRollU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eye_eyelidU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipsRollD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_cornerSharpnessD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_thicknessD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eye_eyelidD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipsRollU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_cornerSharpnessU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_nose_nasolabialDeepen = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eye_faceScrunch = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_pushPullU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipsTowardsTeethD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipsTowardsTeethD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eye_eyelidU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eyelashes_tweakerIn = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_nose_nasolabialDeepen = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_pushPullD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipsTowardsTeethU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eye_eyelidD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipsTowardsTeethU = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_lipsPressD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_lipsPressD = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_mouth_stretchLipsClose = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_mouth_stretchLipsClose = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_C_eyesAim = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_L_eyeAim = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_R_eyeAim = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_convergenceSwitch = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_faceGUIfollowHead = 0.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FaceGood)
		float  CTRL_eyesAimFollowHead = 0.0;


	TMap<FName, FVector2D> vectorCtrlValues;
	TMap<FName, float> floatCtrlValues;




	bool set_editor_property(const FName& name, const float& value)
	{
		auto field = this->StaticStruct()->FindPropertyByName(name);
		if (field == NULL)
			return false;
		float* Value = field->ContainerPtrToValuePtr<float>(this);
		(*Value) = value;
		return true;
	}
	bool set_editor_property(const FName& name, const FVector2d& value)
	{
		auto field = this->StaticStruct()->FindPropertyByName(name);
		if (field == NULL)
			return false;
		FVector2d* Value = field->ContainerPtrToValuePtr<FVector2d>(this);
		(*Value) = value;
		return true;
	}

	bool get_property(const FName& name, FVector2d& value)
	{
		auto field = this->StaticStruct()->FindPropertyByName(name);
		if (field == NULL)
			return false;
		FVector2d* Value = field->ContainerPtrToValuePtr<FVector2d>(this);
		value = *Value;
		return true;
	}
	bool get_property(const FName& name, float& value)
	{
		auto field = this->StaticStruct()->FindPropertyByName(name);
		if (field == NULL)
			return false;
		float* Value = field->ContainerPtrToValuePtr<float>(this);
		value = (*Value);
		return true;
	}
};
