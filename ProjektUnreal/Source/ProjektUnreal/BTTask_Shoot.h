// Male wielkie studio gier z Bemowa, ktore ma mniej bugow niz CD PROJEKT

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_Shoot.generated.h"

/**
 *
 */
UCLASS()
class PROJEKTUNREAL_API UBTTask_Shoot : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTTask_Shoot();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

