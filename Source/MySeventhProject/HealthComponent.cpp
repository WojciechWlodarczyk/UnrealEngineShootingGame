
#include "HealthComponent.h"

UHealthComponent::UHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	Health = 100;
	IsDead = false;

	MyCombatSide = ECombatSide::ECS_Other;
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	MaxHealth = Health;
}

void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UHealthComponent::SubstractHealth(int Amount, APawn* FromPawn) {
	if (IsDead)
		return;

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