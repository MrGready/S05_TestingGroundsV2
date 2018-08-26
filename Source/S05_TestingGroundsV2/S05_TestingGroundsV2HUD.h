// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "S05_TestingGroundsV2HUD.generated.h"

UCLASS()
class AS05_TestingGroundsV2HUD : public AHUD
{
	GENERATED_BODY()

public:
	AS05_TestingGroundsV2HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

