// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeathDelegate);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHitDelegate, int, CurrentHealth, APawn*, FromPawn);

UENUM(BlueprintType)
enum class ECombatSide : uint8 {
	ECS_Player       UMETA(DisplayName = "Player"),
	ECS_Enemy        UMETA(DisplayName = "Enemy"),
	ECS_Other        UMETA(DisplayName = "Other"),
};
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHealthChangedSignature, USHealthComponent*, HealthComp, float, Health, float, HealthDelta, const class UDamageType*, DamageType, class AController*, InstigatedBy, AActor*, DamageCauser);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYSEVENTHPROJECT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int Health;

	void SubstractHealth(int Amount, APawn* FromPawn);

	bool IsDead;

	float CurrentHealthPercent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ECombatSide MyCombatSide;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	int MaxHealth;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AddHealth(int amount);

	void Respawn();

//	UPROPERTY(BlueprintAssignable, Category = "Events")
	FDeathDelegate Death;

	FHitDelegate HitEvent;
};
