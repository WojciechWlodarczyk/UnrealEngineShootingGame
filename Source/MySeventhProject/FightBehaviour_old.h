// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIBehaviour_old.h"
#include <vector>

/**
 * 
 */
//UCLASS()
class MYSEVENTHPROJECT_API FightBehaviour_old : public AIBehaviour_old
{

protected:

	std::vector<APawn*> myvector;

public:
	FightBehaviour_old(APawn* SeenPawn, AAIController* MyAIController){
		this->MyAIController = MyAIController;
		myvector.push_back(SeenPawn);
	}


	void Control(float& Forward, APawn* SeenPawn);

	AIBehaviourType_old GetCurrentBehaviourType();
//	~FightBehaviour();


//	void EnemyDetected(APawn* SeenPawn);
};
