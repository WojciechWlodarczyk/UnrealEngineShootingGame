// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "EnemyManager.h"
#include "MainGameInstance.generated.h"


class AEnemyManager;
/**
 * 
 */
UCLASS()
class MYSEVENTHPROJECT_API UMainGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	AEnemyManager* MainEnemyManager;
};
