// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "AITrainingStream.h"
#include "AITrainingStreamGameMode.h"
#include "AITrainingStreamCharacter.h"

AAITrainingStreamGameMode::AAITrainingStreamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
