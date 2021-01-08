// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownShooterGameGameMode.h"
#include "TopDownShooterGamePlayerController.h"
#include "TopDownShooterGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopDownShooterGameGameMode::ATopDownShooterGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDownShooterGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}