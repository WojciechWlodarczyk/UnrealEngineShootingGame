// Fill out your copyright notice in the Description page of Project Settings.


#include "AISoldier.h"
#include "IdleBehaviour.h"
#include "AIAnimationManagerComponent.h"

IdleBehaviour::IdleBehaviour(AAISoldier* Manager) : AIBehaviour(Manager)
{
	UE_LOG(LogTemp, Warning, TEXT("IdleBehaviour Konstruktor!"));
}

IdleBehaviour::~IdleBehaviour()
{
	UE_LOG(LogTemp, Warning, TEXT("IdleBehaviour Destruktor!"));
}

void IdleBehaviour::UpdateBeheviour()
{
	MyMainManager->AnimationManager->SetForward(0);
}
