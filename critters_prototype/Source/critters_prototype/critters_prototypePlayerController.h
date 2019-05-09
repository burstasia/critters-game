// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "critters_prototypePlayerController.generated.h"

UCLASS()
class Acritters_prototypePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	Acritters_prototypePlayerController();

	virtual FVector GetCurrentVelocity();

protected:
	

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	virtual void MoveForward(float scale);
	virtual void MoveRight(float scale);

private:
	FVector m_CurrentVelocity;
};


