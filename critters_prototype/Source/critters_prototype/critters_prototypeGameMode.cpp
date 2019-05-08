// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "critters_prototypeGameMode.h"
#include "critters_prototypePlayerController.h"
#include "critters_prototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

Acritters_prototypeGameMode::Acritters_prototypeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Acritters_prototypePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}