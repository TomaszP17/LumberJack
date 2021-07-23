// Male wielkie studio gier z Bemowa, ktore ma mniej bugow niz CD PROJEKT

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_PlayerLocation.generated.h"

/**
 * 
 */
UCLASS()
class PROJEKTUNREAL_API UBTService_PlayerLocation : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UBTService_PlayerLocation();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
