// Fill out your copyright notice in the Description page of Project Settings.


#include "AIBehaviour.h"
#include "AISoldier.h"



AIBehaviour::AIBehaviour(AAISoldier* Manager) : MyMainManager(Manager)
{

	UE_LOG(LogTemp, Warning, TEXT("AIBehaviour Konstruktor!"));
}

AIBehaviour::~AIBehaviour()
{
	UE_LOG(LogTemp, Warning, TEXT("AIBehaviour Destruktor!"));
}

AIBehaviourType AIBehaviour::GetNextBehaviour()
{
	return AIBehaviourType::ABT_CaptureCommandStation;
}