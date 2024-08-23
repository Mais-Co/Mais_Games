// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_zeroGameMode.h"
#include "Project_zeroCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_zeroGameMode::AProject_zeroGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
