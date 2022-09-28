// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerCourseGameMode.h"
#include "MultiplayerCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerCourseGameMode::AMultiplayerCourseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
