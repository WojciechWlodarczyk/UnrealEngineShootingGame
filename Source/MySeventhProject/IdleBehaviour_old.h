// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIBehaviour_old.h"

/**
 * 
 */
class MYSEVENTHPROJECT_API IdleBehaviour_old : public AIBehaviour_old
{
public:
//	int liczba = 6;

	IdleBehaviour_old(AAIController* MyAIController) {
		this->MyAIController = MyAIController;
	}

	~IdleBehaviour_old() {
		UE_LOG(LogTemp, Warning, TEXT("WEWEFEFFFEE Destruktor IdleBehaviour"));
	}

	void Control(float& Forward, APawn* SeenPawn);

	AIBehaviourType_old GetCurrentBehaviourType();

//	void EnemyDetected(APawn* SeenPawn);
};
