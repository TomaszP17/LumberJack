// Male wielkie studio gier z Bemowa, ktore ma mniej bugow niz CD PROJEKT

#pragma once

#include "CoreMinimal.h"
#include "ProjektUnrealGameMode.h"
#include "KillEmAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJEKTUNREAL_API AKillEmAllGameMode : public AProjektUnrealGameMode
{
	GENERATED_BODY()
	
public:
	virtual void PawnKilled(APawn* PawnKilled) override;
};
