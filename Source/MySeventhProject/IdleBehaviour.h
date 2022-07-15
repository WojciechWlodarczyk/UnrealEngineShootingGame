// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIBehaviour.h"

/**
 * 
 */
class MYSEVENTHPROJECT_API IdleBehaviour : public AIBehaviour
{
public:
//	int liczba = 6;

	IdleBehaviour(AAIController* MyAIController) {
		this->MyAIController = MyAIController;
	}

	~IdleBehaviour() {
		UE_LOG(LogTemp, Warning, TEXT("WEWEFEFFFEE Destruktor IdleBehaviour"));
	}

	void Control(float& Forward, APawn* SeenPawn);

	AIBehaviourType GetCurrentBehaviourType();

//	void EnemyDetected(APawn* SeenPawn);
};
