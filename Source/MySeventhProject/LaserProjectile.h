
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaserProjectile.generated.h"

class UParticleSystem;
class APawn;
class UHealthComponent;

UCLASS()
class MYSEVENTHPROJECT_API ALaserProjectile : public AActor
{
	GENERATED_BODY()
	
public:
	ALaserProjectile();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
		float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
		int MinDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
		int MaxDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
		bool PlayerSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
		APawn* MyOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laser")
		UParticleSystem* DestoryParticle;

protected:

	AActor* DetectedActor;

	FVector LastHitLocation;

	void TakeDamageToDetectedActor();

	void DestoryOrDisable(bool useParticles);

	FTimerHandle TimerHandle;

	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};

USTRUCT()
struct FBulletStruct
{
	GENERATED_BODY()

	AActor* MyDetectedActor;

	FVector LastHitLocation;
};