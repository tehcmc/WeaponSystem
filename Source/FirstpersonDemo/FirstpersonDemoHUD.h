// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FirstpersonDemoHUD.generated.h"

UCLASS()
class AFirstpersonDemoHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFirstpersonDemoHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

