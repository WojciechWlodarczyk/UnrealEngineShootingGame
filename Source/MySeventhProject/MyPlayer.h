// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyPlayer.generated.h"

class UCameraComponent;
class USpringArmComponent;
class USkeletalMeshComponent;
class APlayerWeapon;
class UHealthComponent;
class AMyGrenade;

UCLASS()
class MYSEVENTHPROJECT_API AMyPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyPlayer();

	UHealthComponent* MyHealthComponent;

private:
	FVector WeaponStartPos;

	FVector BoneStartPos;

	FVector SocketStartPos;

	TArray<FVector> PlayerPositions;

	FTimerHandle SavingPositionTimer;

	void SavePosition();

	FVector FindLastPosition(float Dystance);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveHorizontal(float Value);

	void MoveVertical(float Value);

	void StartRun();

	void StopRun();

	bool run;

	void StartZoom();

	void StopZoom();

	void Fire();

	void ThrowGrenade();

	void CameraSwitch();

	float CameraYTarget;

	void StartJumping();

	bool IsZooming;

	void Respawn();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, Category = "Grenade")
	TSubclassOf<AMyGrenade> MyGrenade;

	USkeletalMeshComponent* MySkeletalMesh;
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Deaths")
	bool IsDead;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
		float forward;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
		float right;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<APlayerWeapon> myWeaponPrefab;

	UPROPERTY(BlueprintReadWrite, Category = "Weapon")
	APlayerWeapon* CurrentWeapon;

	void AddHealth(int amount);

	UFUNCTION(BlueprintCallable, Category = "IK")
		FVector GetLeftHandLoactionFromMesh();


	UFUNCTION(BlueprintCallable, Category = "IK")
		FTransform GetRightHandIKTransform();


	UFUNCTION(BlueprintCallable, Category = "IK")
		FTransform GetLeftHandIKTransform();

//	[Header]

	UFUNCTION(BlueprintImplementableEvent)
		void JumpEvent();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Jumping")
	bool IsJumping;


	UFUNCTION(BlueprintCallable, Category = "Death")
		void MyDeath();

	UFUNCTION(BlueprintCallable, Category = "Death")
	void OnHit(int CurrentHealth, APawn* FromPawn);

	UFUNCTION(BlueprintCallable, Category = "Health")
		float CurrentHealth();
};
