
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyDetectorComponent.generated.h"

class AAISoldier;
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

	UFUNCTION()
		void OnHit(int CurrentHealth, APawn* FromPawn);

	bool ShouldAttackEnemy(UBeingDetectableComponent* Enemy);

	UBeingDetectableComponent* FindTheClosestEnemy();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	TArray<UBeingDetectableComponent*> EnemiesNearby;

	bool IsThisEnemy(ECombatSide side);

	AAISoldier* MyMainManager;

	void NewEnemyDetected();

	void DetectEnemy(APawn* Enemy);

	float DistanceToEnemy(UBeingDetectableComponent* Enemy);
};
