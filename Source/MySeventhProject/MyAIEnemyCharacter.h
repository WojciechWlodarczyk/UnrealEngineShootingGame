// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIBehaviour_old.h"
#include "IdleBehaviour_old.h"
#include <memory>
#include "MyAIEnemyCharacter.generated.h"

class UPawnSensingComponent;
class AAIController;
class APlayerWeapon;
class UHealthComponent;
class UUserWidget;
class UWidget;
class AIBehaviour;
class IdleBehaviour;


UCLASS()
class MYSEVENTHPROJECT_API AMyAIEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyAIEnemyCharacter();


	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Shoot();

	UHealthComponent* MyHealthComponent;

	FTimerHandle TimerHandle_TimeBetweenShooting;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
		float Forward;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TSubclassOf<APlayerWeapon> myWeaponPrefab;

	UPROPERTY(BlueprintReadWrite, Category = "Weapon")
		APlayerWeapon* CurrentWeapon;

	UPROPERTY(BlueprintReadWrite, Category = "IsDead")
		bool isDead;

/*	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyUI")
		TSubclassOf<class UUserWidget> HealthBarAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyUI")
		UUserWidget* MyHealthBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyUI")
		UWidget* MyWidget;*/

//	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = UI)
//		TSubclassOf<UUserWidget> WidgetTemplate;

//	UPROPERTY(BlueprintReadWrite, Category = "UI")
//		UUserWidget* MyWidget;

//	UPROPERTY(BlueprintReadWrite, Category = "UI")
//		UWidgetBlueprint* MyWidgetBlueprint;

//	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

//	__event void MyEvent(int nValue);

	AAIController* AIController;

	void OnHit(int CurrentHealth);

	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	USkeletalMeshComponent* MySkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	APawn* PawnEnemy;


	UPROPERTY(VisibleAnywhere, Category = "Component")
		UPawnSensingComponent* PawnSensingComp;

	std::unique_ptr<AIBehaviour_old> MyCurrentBehaviour;
	//AIBehaviour* MyCurrentBehaviour;// = AIBehaviour();

	UFUNCTION()
		void OnPawnSeen(APawn* SeenPawn);

public:

	UFUNCTION(BlueprintCallable, Category = "IK")
		FTransform GetRightHandIKTransform();


	UFUNCTION(BlueprintCallable, Category = "IK")
		FTransform GetLeftHandIKTransform();

	UFUNCTION(BlueprintCallable, Category = "Death")
	void MyDeath();

	UFUNCTION(BlueprintCallable, Category = "Health")
	float CurrentHealth();

	UFUNCTION(BlueprintImplementableEvent, Category = "Death")
		void DeathEvent();

	UFUNCTION(BlueprintCallable, Category = "Death")
		void DestoryOrDisable();

	UFUNCTION(BlueprintCallable, Category = "Death")
		void OnHit(int CurrentHealth, APawn* FromPawn);
};
