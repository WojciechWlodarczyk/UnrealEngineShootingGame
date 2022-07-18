// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/UObjectBaseUtility.h"
#include "AIController.h"
#include "CoreMinimal.h"
//#include "AIBehaviour.generated.h"

enum AIBehaviourType_old;

/**
 * 
 */
//UCLASS()
class MYSEVENTHPROJECT_API AIBehaviour_old// : public UObject
{

protected:
	AAIController* MyAIController;

	AIBehaviour_old();

public:
	inline void Test() {
		GetCurrentBehaviourType();
	}

	virtual AIBehaviourType_old GetCurrentBehaviourType()=0;

	virtual void Control(float& Forward, APawn* SeenPawn)=0;

//	~AIBehaviour();

	//virtual void EnemyDetected(APawn* SeenPawn)=0;
};


enum AIBehaviourType_old {
	Idle,
	Fight,
	GoToAblicStation,
	ProtectAblicStation
};