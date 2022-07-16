// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NewBullet.generated.h"

class UParticleSystem;
class APawn;
class UHealthComponent;

UCLASS()
class MYSEVENTHPROJECT_API ANewBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANewBullet();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
		int MinDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
		int MaxDamage;

//	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Laser")
//		UParticleSystem* Laser;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
	bool PlayerSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
		APawn* MyOwner;
	//ECombatSide MyCombatSide ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
		UParticleSystem* DestoryParticle;

protected:

	AActor* DetectedActor;

	FVector LastHitLocation;

	void TakeDamageToDetectedActor();

	void DestoryOrDisable(bool useParticles);
	
	FTimerHandle TimerHandle;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

//private:
//	FBulletStruct* MyBulletStruct;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ECombatSide MyCombatSide;
	*/
};

USTRUCT()
struct FBulletStructX
{
	GENERATED_BODY()

	AActor* MyDetectedActor;

	FVector LastHitLocation;

};