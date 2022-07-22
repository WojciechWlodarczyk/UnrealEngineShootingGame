
#include "AISoldier.h"
#include "HealthComponent.h"
#include "AIAnimationManagerComponent.h"
#include "EnemyDetectorComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "BeingDetectableComponent.h"
#include "AIController.h"
#include "IdleBehaviour.h"
#include "AttackEnemyBehaviour.h"


AAISoldier::AAISoldier()
{
	PrimaryActorTick.bCanEverTick = true;

	MyHealthComponent = CreateDefaultSubobject <UHealthComponent>(TEXT("HealthComp"));
	MyHealthComponent->Death.AddDynamic(this, &AAISoldier::Death);

	AnimationManager = CreateDefaultSubobject <UAIAnimationManagerComponent>(TEXT("AnimManagerComp"));

	EnemyDetector = CreateDefaultSubobject <UEnemyDetectorComponent>(TEXT("EnemyDetector"));
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->OnSeePawn.AddDynamic(EnemyDetector, &UEnemyDetectorComponent::OnPawnSeen);

	MyHealthComponent->HitEvent.AddDynamic(EnemyDetector, &UEnemyDetectorComponent::OnHit);

	MyDetectableComponent = CreateDefaultSubobject<UBeingDetectableComponent>(TEXT("DetactableComp"));

	MySide = ECombatSide::ECS_EnemySide;
}

void AAISoldier::BeginPlay()
{
	Super::BeginPlay();
	MyHealthComponent->MyCombatSide = MySide;

	RequestBehaviour(AIBehaviourType::ABT_Inle);
}

void AAISoldier::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAISoldier::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAISoldier::RequestBehaviour(AIBehaviourType NewBehaviour)
{
	if (NewBehaviour == AIBehaviourType::ABT_Inle) {
		CurrentBehaviour = std::make_unique<IdleBehaviour>(this);
	}
	else if(NewBehaviour == AIBehaviourType::ABT_AttackEnemy) {
		if(CurrentBehaviourType != AIBehaviourType::ABT_AttackEnemy)
			CurrentBehaviour = std::make_unique<AttackEnemyBehaviour>(this, EnemyDetector->FindTheClosestEnemy());
	}
	CurrentBehaviourType = NewBehaviour;
}

AAIController* AAISoldier::GetAIController()
{
	return AIController;
}

void AAISoldier::Death() {
	AnimationManager->SoldierIsDead();
/*	isDead = true;
	AIController->StopMovement();
	UCapsuleComponent* CapComp = GetCapsuleComponent();
	CapComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetWorldTimerManager().PauseTimer(TimerHandle_TimeBetweenShooting);
	CurrentWeapon->Destroy();
	DeathEvent();*/
}

int AAISoldier::GetBehaviourPriority(AIBehaviourType Behaviour) {
	switch (Behaviour)
	{
	case AIBehaviourType::ABT_AttackEnemy:
		return 6;
	case AIBehaviourType::ABT_PatrolTerrain:
		break;
	case AIBehaviourType::ABT_ReachPoint:
		break;
	case AIBehaviourType::ABT_ReachCommandStation:
		break;
	case AIBehaviourType::ABT_CaptureCommandStation:
		break;
	case AIBehaviourType::ABT_ProtectCommandStation:
		break;
	default:
		break;
	}
//	IdleBehaviour ib (nullptr);
//	AAISoldier* t = Self
//	IdleBehaviour ib(t);
//	

	IdleBehaviour ib(this);

	IdleBehaviour ib2(this);

	std::unique_ptr< int> p1 { new int (2)};

	auto p2{ std::make_unique<int>(43) };

	auto p3{ std::make_unique<IdleBehaviour>(this) };

	std::unique_ptr<IdleBehaviour> p4{ std::make_unique<IdleBehaviour>(this) };

	std::unique_ptr<IdleBehaviour> p5 (std::move(&ib));

	std::unique_ptr<AIBehaviour> p6(std::move(&ib2));

	std::unique_ptr<AIBehaviour> p7;


	CurrentBehaviour = std::make_unique<IdleBehaviour>(this);

	//std::unique_ptr< IdleBehaviour> = 

	return 1;
}