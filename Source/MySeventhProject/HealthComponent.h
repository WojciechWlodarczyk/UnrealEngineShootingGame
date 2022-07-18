
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeathDelegate);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHitDelegate, int, CurrentHealth, APawn*, FromPawn);

UENUM(BlueprintType)
enum class ECombatSide : uint8 {
	ECS_PlayerSide       UMETA(DisplayName = "Player"),
	ECS_EnemySide        UMETA(DisplayName = "Enemy"),
	ECS_Other        UMETA(DisplayName = "Other"),
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYSEVENTHPROJECT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHealthComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int Health;

	void SubstractHealth(int Amount, APawn* FromPawn);

	bool IsDead;

	float CurrentHealthPercent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ECombatSide MyCombatSide;

protected:
	virtual void BeginPlay() override;

private:
	int MaxHealth;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AddHealth(int amount);

	void Respawn();

	FDeathDelegate Death;

	FHitDelegate HitEvent;
};
