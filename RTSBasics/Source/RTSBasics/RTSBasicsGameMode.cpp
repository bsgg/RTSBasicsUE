// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "RTSBasicsGameMode.h"
#include "RTSBasicsPlayerController.h"
#include "RTSBasicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARTSBasicsGameMode::ARTSBasicsGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARTSBasicsPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}