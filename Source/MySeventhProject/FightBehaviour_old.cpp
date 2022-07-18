// Fill out your copyright notice in the Description page of Project Settings.


#include "FightBehaviour_old.h"
#include "AIController.h"
#include <vector>
#include "HealthComponent.h"


/*
FightBehaviour::FightBehaviour(APawn* SeenPawn, AAIController MyAIController) : AIBehaviour(MyAIController)
{
	myvector.push_back(SeenPawn);
}*/
/*
void FightBehaviour::EnemyDetected(APawn* SeenPawn) {

}*/


void FightBehaviour_old::Control(float& Forward, APawn* SeenPawn) {
	if (SeenPawn->FindComponentByClass<UHealthComponent>()->IsDead) {
		Forward = 0;
		SeenPawn = nullptr;
	}

	FAIMoveRequest MoveRequest;
	APawn* PawnEnemy = myvector[0];
	MoveRequest.SetGoalActor(PawnEnemy);
	MoveRequest.SetAcceptanceRadius(300.f);

	FNavPathSharedPtr NavPath;

	FPathFollowingRequestResult result = MyAIController->MoveTo(MoveRequest, &NavPath);
	if (result.Code == EPathFollowingRequestResult::AlreadyAtGoal) {
		Forward = 0.f;
	}
	else {
		Forward = 50.f;
	}
	//SeenPawn = nullptr;
}

AIBehaviourType_old FightBehaviour_old::GetCurrentBehaviourType()
{
	return AIBehaviourType_old::Fight;
}
