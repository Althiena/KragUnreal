// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "WhereIsDaltonGameMode.h"
#include "WhereIsDaltonPlayerController.h"
#include "WhereIsDaltonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWhereIsDaltonGameMode::AWhereIsDaltonGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AWhereIsDaltonPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}