// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/UObjectBaseUtility.h"
#include "AIController.h"
#include "CoreMinimal.h"
//#include "AIBehaviour.generated.h"

enum AIBehaviourType;

/**
 * 
 */
//UCLASS()
class MYSEVENTHPROJECT_API AIBehaviour// : public UObject
{

protected:
	AAIController* MyAIController;

	AIBehaviour();

public:
	inline void Test() {
		GetCurrentBehaviourType();
	}

	virtual AIBehaviourType GetCurrentBehaviourType()=0;

	virtual void Control(float& Forward, APawn* SeenPawn)=0;

//	~AIBehaviour();

	//virtual void EnemyDetected(APawn* SeenPawn)=0;
};


enum AIBehaviourType {
	Idle,
	Fight,
	GoToAblicStation,
	ProtectAblicStation
};