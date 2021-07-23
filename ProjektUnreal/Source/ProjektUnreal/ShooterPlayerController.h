// Male wielkie studio gier z Bemowa, ktore ma mniej bugow niz CD PROJEKT

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PROJEKTUNREAL_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void GameHasEnded(class AActor* EndGameFocus = nullptr, bool bIsWinner = false) override;

private:
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> LoseScreenClass;

	UPROPERTY(EditAnywhere)
		float RestartDelay = 5;

	FTimerHandle RestartTimer;
};
