// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyManager.h"
#include "MainGameInstance.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AEnemyManager::AEnemyManager()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemyManager::BeginPlay()
{
	Super::BeginPlay();

	Cast<UMainGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()))->MainEnemyManager = this;
//	Instance = this;
//	AEnemyManager::staticNumber = 9;
	
	//myInstance = this;
	
}

// Called every frame
void AEnemyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

AActor* AEnemyManager::GetCommandPost()
{
	return AblicStations[rand() % AblicStations.Num()];
}

/*
void AEnemyManager::SetInstance(AEnemyManager* ThisManager)
{
	AEnemyManager::myInstance = nullptr;// = ThisManager;
}*/


/*
AEnemyManager& AEnemyManager::Instance()
{
	return new AEnemyManager();
	// TODO: insert return statement here
}*/
/*
AEnemyManager AEnemyManager::Instance() {
	return nullptr;
}
*/