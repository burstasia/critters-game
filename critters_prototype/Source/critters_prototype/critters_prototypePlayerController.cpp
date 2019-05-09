// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "critters_prototypePlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "critters_prototypeCharacter.h"
#include "Engine/World.h"

Acritters_prototypePlayerController::Acritters_prototypePlayerController()
{
	
}

void Acritters_prototypePlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

}

void Acritters_prototypePlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this,&Acritters_prototypePlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &Acritters_prototypePlayerController::MoveRight);

}

void Acritters_prototypePlayerController::MoveForward(float scale)
{
	m_CurrentVelocity.X = FMath::Clamp(scale, -1.0f, 1.0f) * 100.0f;
}

void Acritters_prototypePlayerController::MoveRight(float scale)
{
	m_CurrentVelocity.Y = FMath::Clamp(scale, -1.0f, 1.0f) * 100.0f;
}

FVector Acritters_prototypePlayerController::GetCurrentVelocity()
{
	return m_CurrentVelocity;
}


