// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIBehaviour.h"
#include <vector>

/**
 * 
 */
//UCLASS()
class MYSEVENTHPROJECT_API FightBehaviour : public AIBehaviour
{

protected:

	std::vector<APawn*> myvector;

public:
	FightBehaviour(APawn* SeenPawn, AAIController* MyAIController){
		this->MyAIController = MyAIController;
		myvector.push_back(SeenPawn);
	}


	void Control(float& Forward, APawn* SeenPawn);

	AIBehaviourType GetCurrentBehaviourType();
//	~FightBehaviour();


//	void EnemyDetected(APawn* SeenPawn);
};
