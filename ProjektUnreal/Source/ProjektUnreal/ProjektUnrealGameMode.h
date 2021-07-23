// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProjektUnrealGameMode.generated.h"

UCLASS()
class AProjektUnrealGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled);
};



