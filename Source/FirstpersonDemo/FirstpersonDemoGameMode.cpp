// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstpersonDemoGameMode.h"
#include "FirstpersonDemoHUD.h"
#include "FirstpersonDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstpersonDemoGameMode::AFirstpersonDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstpersonDemoHUD::StaticClass();
}
