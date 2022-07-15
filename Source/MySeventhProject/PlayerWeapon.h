// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerWeapon.generated.h"

class UStaticMeshComponent;
class ANewBullet;

UCLASS()
class MYSEVENTHPROJECT_API APlayerWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerWeapon();

	void Fire(FVector target);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Mesh")
	UStaticMeshComponent* MyStaticMesh;

	UFUNCTION(BlueprintCallable, Category = "IK")
	FTransform RightHandTransform();

	UFUNCTION(BlueprintCallable, Category = "IK")
	FTransform LeftHandTransform();

	UPROPERTY(EditAnywhere, Category = "Leser")
		TSubclassOf<ANewBullet> Laser;

	UPROPERTY(EditAnywhere, Category = "Leser")
		float dispersion;
};
