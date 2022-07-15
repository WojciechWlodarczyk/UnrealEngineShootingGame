// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MedicalKit.generated.h"

class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class MYSEVENTHPROJECT_API AMedicalKit : public AActor
{
	GENERATED_BODY()
	
public:	
	AMedicalKit();

	UPROPERTY(EditAnywhere, Category = "Health");
	int Healing;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Mesh")
		UStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere, Category = "Trigger")
		USphereComponent* MySphereTrigger;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
