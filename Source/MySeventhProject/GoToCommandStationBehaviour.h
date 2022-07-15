// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIBehaviour.h"
#include "Kismet/GameplayStatics.h"
#include "MainGameInstance.h"

/**
 * 
 */
class MYSEVENTHPROJECT_API GoToCommandStationBehaviour : public AIBehaviour
{
protected:
	AActor* TargetCommandPost;

public:
	GoToCommandStationBehaviour(AAIController* MyAIController, AActor* TargetCommandPost) {
		this->MyAIController = MyAIController;
		this->TargetCommandPost = TargetCommandPost;
	//	TargetCommandPost = Cast<UMainGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()))->MainEnemyManager.GetCommandPost();
	}

	~GoToCommandStationBehaviour() {
		UE_LOG(LogTemp, Warning, TEXT("WEWEFEFFFEE Destruktor GoToCommandStationBehaviour"));
	}

	void Control(float& Forward, APawn* SeenPawn);

	AIBehaviourType GetCurrentBehaviourType();
};
