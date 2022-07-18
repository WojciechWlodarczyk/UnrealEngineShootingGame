
#include "EnemyDetectorComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "AISoldier.h"
#include "HealthComponent.h"
#include "IDetectableUnit.h"
#include "AISoldier.h"
#include "BeingDetectableComponent.h"

UEnemyDetectorComponent::UEnemyDetectorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UEnemyDetectorComponent::BeginPlay()
{
	Super::BeginPlay();

	MyMainManager = GetOwner<AAISoldier>();
	EnemiesNearby.Init(0, 0);
}

void UEnemyDetectorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UEnemyDetectorComponent::IsThisEnemy(ECombatSide side)
{
	return side != MyMainManager->MySide;
}

#include "AISoldier.h"
void UEnemyDetectorComponent::OnPawnSeen(APawn* SeenPawn) {
	if (SeenPawn == nullptr)
		return;
	
	UBeingDetectableComponent* DetectableSoldier = SeenPawn->FindComponentByClass<UBeingDetectableComponent>();

 if (DetectableSoldier == nullptr)
		return;

	if (EnemiesNearby.Contains(DetectableSoldier) == false) {
		EnemiesNearby.Add(DetectableSoldier);
		UE_LOG(LogTemp, Warning, TEXT("New enemy was added! %d"), EnemiesNearby.Num());
	}
}

UBeingDetectableComponent* UEnemyDetectorComponent::FindTheClosestEnemy()
{
	int ClosestEnemyID = -1;
	float SmallestDistance = 9999999;

	for (int i = 0; i < EnemiesNearby.Num(); i++)
	{
		float CurrentDistance = FVector::Distance(MyMainManager->GetActorLocation(), EnemiesNearby[i]->GetLocation());

		if (EnemiesNearby[i]->IsDead() || CurrentDistance > 3000) {
			EnemiesNearby.RemoveAt(i);
			i--;
			UE_LOG(LogTemp, Warning, TEXT("Enemy was deleted! %d"), EnemiesNearby.Num());
			continue;
		}
		if (CurrentDistance < SmallestDistance) {
			SmallestDistance = CurrentDistance;
			ClosestEnemyID = i;
		}
	}
	if (ClosestEnemyID != -1) 
		return EnemiesNearby[ClosestEnemyID];

	return nullptr;
}