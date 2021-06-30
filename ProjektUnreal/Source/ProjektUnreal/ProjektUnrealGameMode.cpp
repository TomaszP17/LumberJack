// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjektUnrealGameMode.h"
#include "ProjektUnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjektUnrealGameMode::AProjektUnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
