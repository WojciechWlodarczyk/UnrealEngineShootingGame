// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Health = 100;
	IsDead = false;

	MyCombatSide = ECombatSide::ECS_Other;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	MaxHealth = Health;
	//Death.BindUFunction(this, )
	// ...
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::SubstractHealth(int Amount, APawn* FromPawn) {
	if (IsDead)
		return;

//	HitEvent.Broadcast(Health, FromPawn);

	Health -= Amount;
	Health = FMath::Max(0, Health);

	UE_LOG(LogTemp, Warning, TEXT("SubstractHealth! Health: %d"), Health);

	if (Health == 0) {
		IsDead = true;
		Death.Broadcast();
	}
	else {
		if(FromPawn != nullptr)
			HitEvent.Broadcast(Health, FromPawn);
	}
}

float UHealthComponent::CurrentHealthPercent() {
	return (float)Health / (float)MaxHealth;
}
void UHealthComponent::AddHealth(int amount) {
	Health += amount;
	Health = FMath::Min(Health, MaxHealth);
}
void UHealthComponent::Respawn() {
	Health = MaxHealth;
	IsDead = false;
}