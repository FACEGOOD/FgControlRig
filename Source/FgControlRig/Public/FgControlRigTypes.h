#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FgControlRigTypes.generated.h"

USTRUCT(BlueprintType)
struct FGCONTROLRIG_API FFgContrlRigStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_C_mouth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_C_jaw;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_L_eye;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eye_blink;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_R_eye;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eye_blink;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_brow_lateral;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_brow_lateral;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_brow_down;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_brow_down;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_brow_raiseOut;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_brow_raiseIn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_brow_raiseIn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_brow_raiseOut;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eye_pupil;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eye_pupil;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_C_eye;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_eye_parallelLook;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eye_cheekRaise;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eye_squintInner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eye_lidPress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_nose_wrinkleUpper;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_nose_wrinkleUpper;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eye_squintInner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eye_cheekRaise;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eye_lidPress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_R_nose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_L_nose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_upperLipRaise;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_sharpCornerPull;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_cornerPull;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_dimple;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_cornerDepress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_stretch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lowerLipDepress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lowerLipDepress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_stretch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_towardsD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipsBlow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_stickyInnerU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_jaw_chinCompress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_funnelU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_neck_mastoidContract;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_neck_swallow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_stickyOuterD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_mouth_stickyD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipsPressU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_towardsU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_stickyInnerD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipBiteD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_funnelD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_lookAtSwitch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_stickyOuterU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_mouth_stickyU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipsTogetherU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_tongue_press;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_tightenD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_pressU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_tightenD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_C_tongue_roll;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_stickyInnerU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_funnelD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_neck_stretch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_suckBlow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_tightenU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_tightenU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_pressD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_neck_digastricUpDown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipsTogetherD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_funnelU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_towardsU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_stickyOuterD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_purseD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipBiteU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_pressD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipSticky;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_neck_stretch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_pressU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_purseD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_C_tongue_tip;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_jaw_clench;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipSticky;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_neck_throatExhaleInhale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_C_tongue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipBiteU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_tongue_narrowWide;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_suckBlow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_jaw_ChinRaiseD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_purseU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_towardsD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_jaw_ChinRaiseU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_jaw_openExtreme;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_jaw_fwdBack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_stickyInnerD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipBiteD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_jaw_clench;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipsTogetherU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_purseU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipsPressU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_jaw_ChinRaiseU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_stickyOuterU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_neck_mastoidContract;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipsBlow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_jaw_chinCompress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_jaw_ChinRaiseD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipsTogetherD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_neck_throatUpDown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_tongue_inOut;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_ear_up;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_ear_up;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_cornerDepress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_upperLipRaise;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_dimple;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_sharpCornerPull;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_cornerPull;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_C_teethD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_C_teethU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_teeth_fwdBackU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_L_mouth_corner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D  CTRL_R_mouth_corner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_teeth_fwdBackD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eye_faceScrunch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_pushPullU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eyelashes_tweakerOut;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_thicknessU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_pushPullD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_thicknessU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_cornerSharpnessD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_mouth_lipShiftD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipsRollD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eyelashes_tweakerOut;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_thicknessD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_cornerSharpnessU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_mouth_lipShiftU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eyelashes_tweakerIn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipsRollU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eye_eyelidU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipsRollD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_cornerSharpnessD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_thicknessD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eye_eyelidD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipsRollU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_cornerSharpnessU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_nose_nasolabialDeepen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eye_faceScrunch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_pushPullU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipsTowardsTeethD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipsTowardsTeethD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eye_eyelidU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eyelashes_tweakerIn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_nose_nasolabialDeepen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_pushPullD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipsTowardsTeethU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eye_eyelidD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipsTowardsTeethU;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_lipsPressD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_lipsPressD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_mouth_stretchLipsClose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_mouth_stretchLipsClose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_C_eyesAim;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_L_eyeAim;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_R_eyeAim;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_convergenceSwitch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_faceGUIfollowHead;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float  CTRL_eyesAimFollowHead;


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
