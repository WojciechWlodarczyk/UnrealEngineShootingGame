
#include "AttackEnemyBehaviour.h"
#include "BeingDetectableComponent.h"
#include "AISoldier.h"
#include "AIController.h"
#include "EnemyDetectorComponent.h"
#include "AIAnimationManagerComponent.h"

AttackEnemyBehaviour::AttackEnemyBehaviour(AAISoldier* Manager, UBeingDetectableComponent* Enemy) : AIBehaviour(Manager)
{
	EnemyToAttack = Enemy;
	UE_LOG(LogTemp, Warning, TEXT("AttackEnemyBehaviour Konstruktor!"));
}

AttackEnemyBehaviour::~AttackEnemyBehaviour()
{
	UE_LOG(LogTemp, Warning, TEXT("AttackEnemyBehaviour Destruktor!"));
}

void AttackEnemyBehaviour::UpdateBeheviour()
{
	if (CheckEnemyState(EnemyToAttack)) {
		EnemyToAttack = MyMainManager->EnemyDetector->FindTheClosestEnemy();
		if (EnemyToAttack == nullptr) {
			MyMainManager->RequestBehaviour(GetNextBehaviour());
			return;
		}
	}

	ControlSoldier();
}

bool AttackEnemyBehaviour::CheckEnemyState(UBeingDetectableComponent* Enemy)
{
	if (Enemy == nullptr)
		return false;

	if (Enemy->IsDead())
		return false;

	if (FVector::Distance(MyMainManager->GetActorLocation(), Enemy->GetLocation()) > 3000)
		return false;

	return true;
}

void AttackEnemyBehaviour::ControlSoldier()
{
	FAIMoveRequest MoveRequest;
	APawn* PawnEnemy = EnemyToAttack->GetPawn();
	MoveRequest.SetGoalActor(PawnEnemy);
	MoveRequest.SetAcceptanceRadius(300.f);

	FNavPathSharedPtr NavPath;

	FPathFollowingRequestResult result = MyMainManager->GetAIController()->MoveTo(MoveRequest, &NavPath);
	if (result.Code == EPathFollowingRequestResult::AlreadyAtGoal) {
		MyMainManager->AnimationManager->SetForward(0);
	}
	else {
		MyMainManager->AnimationManager->SetForward(50);
	}
}
