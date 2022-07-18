
#include "AISoldier.h"
#include "HealthComponent.h"
#include "AIAnimationManagerComponent.h"
#include "EnemyDetectorComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "BeingDetectableComponent.h"

AAISoldier::AAISoldier()
{
	PrimaryActorTick.bCanEverTick = true;

	MyHealthComponent = CreateDefaultSubobject <UHealthComponent>(TEXT("HealthComp"));
	MyHealthComponent->Death.AddDynamic(this, &AAISoldier::Death);
	MyHealthComponent->HitEvent.AddDynamic(this, &AAISoldier::OnHit);

	AnimationManager = CreateDefaultSubobject <UAIAnimationManagerComponent>(TEXT("AnimManagerComp"));

	EnemyDetector = CreateDefaultSubobject <UEnemyDetectorComponent>(TEXT("EnemyDetector"));
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->OnSeePawn.AddDynamic(EnemyDetector, &UEnemyDetectorComponent::OnPawnSeen);

	MyDetectableComponent = CreateDefaultSubobject<UBeingDetectableComponent>(TEXT("DetactableComp"));

	MySide = ECombatSide::ECS_EnemySide;
}

void AAISoldier::BeginPlay()
{
	Super::BeginPlay();
	MyHealthComponent->MyCombatSide = MySide;
}

void AAISoldier::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAISoldier::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAISoldier::OnHit(int CurrentHealth, APawn* FromPawn) {
/*	if (PawnEnemy == nullptr) {
		if (FromPawn && Cast<AMyPlayer>(FromPawn))
		{
			PawnEnemy = FromPawn;

			if (MyCurrentBehaviour->GetCurrentBehaviourType() != AIBehaviourType::Fight)
			{
				MyPrint("WWWWW OnHit()");
				//	MyCurrentBehaviour = std::make_unique<FightBehaviour>(FightBehaviour(FromPawn, Cast<AAIController>(GetController())));

				std::unique_ptr<FightBehaviour> MyCurrentBehaviour_2(new FightBehaviour(FromPawn, Cast<AAIController>(GetController())));

				MyCurrentBehaviour = std::move(MyCurrentBehaviour_2);
			}
		}
	}*/
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