// Copyright Epic Games, Inc. All Rights Reserved.

#include "UngaBungaGameMode.h"
#include "UngaBungaPlayerController.h"
#include "UngaBungaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUngaBungaGameMode::AUngaBungaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUngaBungaPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}