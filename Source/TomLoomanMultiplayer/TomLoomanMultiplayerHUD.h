// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TomLoomanMultiplayerHUD.generated.h"

UCLASS()
class ATomLoomanMultiplayerHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATomLoomanMultiplayerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

