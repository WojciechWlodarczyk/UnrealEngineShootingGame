// Fill out your copyright notice in the Description page of Project Settings.


#include "IdleBehaviour_old.h"
#include "AIController.h"

/*
IdleBehaviour::IdleBehaviour(AAIController MyAIController) : AIBehaviour(MyAIController)
{
}*/


/*void IdleBehaviour::EnemyDetected(APawn* SeenPawn) {

}*/

void IdleBehaviour_old::Control(float& Forward, APawn* SeenPawn) {
	Forward = 0;
	SeenPawn = nullptr;
}

AIBehaviourType_old IdleBehaviour_old::GetCurrentBehaviourType()
{
	return AIBehaviourType_old::Idle;
}
