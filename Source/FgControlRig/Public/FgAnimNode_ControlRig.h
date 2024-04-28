// Copyright 2023 FACEGOOD, Inc. All Rights Reserved.
#pragma once

#include <ControlRig.h>
#include "Animation/InputScaleBias.h"
#include "AnimNode_ControlRigBase.h"
#include "Animation/AnimBulkCurves.h"
#include "FgControlRigTypes.h"
#include "AnimNode_ControlRig.h"

#include "FgAnimNode_ControlRig.generated.h"


class UNodeMappingContainer;

/**
 * Animation node that allows animation ControlRig output to be used in an animation graph
 */
USTRUCT()
struct FGCONTROLRIG_API FFgAnimNode_ControlRig : public FAnimNode_ControlRig
{
	GENERATED_BODY()

	virtual void PropagateInputProperties(const UObject* InSourceInstance) override;

	UPROPERTY(EditAnywhere, Category = Settings, meta = (PinShownByDefault))
		FFgContrlRigStruct fgControlRigData;
};

template<>
struct TStructOpsTypeTraits<FFgAnimNode_ControlRig> : public TStructOpsTypeTraitsBase2<FFgAnimNode_ControlRig>
{
	enum
	{
		WithPostSerialize = true,
	};
};
