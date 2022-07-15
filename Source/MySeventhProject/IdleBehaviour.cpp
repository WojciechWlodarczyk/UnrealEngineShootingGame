// Fill out your copyright notice in the Description page of Project Settings.


#include "IdleBehaviour.h"
#include "AIController.h"

/*
IdleBehaviour::IdleBehaviour(AAIController MyAIController) : AIBehaviour(MyAIController)
{
}*/


/*void IdleBehaviour::EnemyDetected(APawn* SeenPawn) {

}*/

void IdleBehaviour::Control(float& Forward, APawn* SeenPawn) {
	Forward = 0;
	SeenPawn = nullptr;
}

AIBehaviourType IdleBehaviour::GetCurrentBehaviourType()
{
	return AIBehaviourType::Idle;
}
