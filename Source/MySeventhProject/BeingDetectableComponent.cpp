
#include "BeingDetectableComponent.h"
#include "HealthComponent.h"
#include "GameFramework/Pawn.h"

UBeingDetectableComponent::UBeingDetectableComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UBeingDetectableComponent::BeginPlay()
{
	Super::BeginPlay();

	PawnOwner = GetOwner<APawn>();
	MyHealthComponent = PawnOwner->FindComponentByClass<UHealthComponent>();
}

bool UBeingDetectableComponent::IsDead()
{
	return MyHealthComponent->IsDead;
}

APawn* UBeingDetectableComponent::GetPawn()
{
	return PawnOwner;
}

ECombatSide UBeingDetectableComponent::GetCombatSide()
{
	return MyCombatSide;
}

void UBeingDetectableComponent::SetCombatSide(ECombatSide side)
{
	MyCombatSide = side;
}

FVector UBeingDetectableComponent::GetLocation()
{
	return PawnOwner->GetActorLocation();
}

void UBeingDetectableComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

