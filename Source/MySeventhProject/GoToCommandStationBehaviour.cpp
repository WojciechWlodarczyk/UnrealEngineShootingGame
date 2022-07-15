// Fill out your copyright notice in the Description page of Project Settings.


#include "GoToCommandStationBehaviour.h"
#include "AIController.h"
#include "AIBehaviour.h"
#include "Engine/World.h"
//#include <string>

void GoToCommandStationBehaviour::Control(float& Forward, APawn* SeenPawn) {
	
//	std::string rr = "OnPawnSeen" + (bool)(TargetCommandPost == nullptr);
//	char tabChar[55];
//	bool OpenGenusArray[5] = {};

	//TChar tCharTable[];

	//UE_LOG(LogTemp, Warning, TEXT("OnPawnSeen" + (bool)(TargetCommandPost == nullptr)));

	FAIMoveRequest MoveRequest;
	MoveRequest.SetGoalActor(TargetCommandPost);
	MoveRequest.SetAcceptanceRadius(600.f);

	FNavPathSharedPtr NavPath;

	FPathFollowingRequestResult result = MyAIController->MoveTo(MoveRequest, &NavPath);
	if (result.Code == EPathFollowingRequestResult::AlreadyAtGoal) {
		Forward = 0.f;
		TargetCommandPost = Cast<UMainGameInstance>(UGameplayStatics::GetGameInstance(MyAIController->GetWorld()))->MainEnemyManager->GetCommandPost();
	}
	else {
		Forward = 50.f;
	}
	SeenPawn = nullptr;
}

AIBehaviourType GoToCommandStationBehaviour::GetCurrentBehaviourType()
{
	return AIBehaviourType::GoToAblicStation;
}