
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyDetectorComponent.generated.h"

class AAISoldier;
class IDetectableUnit;
class UBeingDetectableComponent;

enum class ECombatSide : uint8;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYSEVENTHPROJECT_API UEnemyDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UEnemyDetectorComponent();

	UFUNCTION()
		void OnPawnSeen(APawn* SeenPawn);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



private:
	TArray<UBeingDetectableComponent*> EnemiesNearby;

	bool IsThisEnemy(ECombatSide side);

	AAISoldier* MyMainManager;

	UBeingDetectableComponent* FindTheClosestEnemy();
};
