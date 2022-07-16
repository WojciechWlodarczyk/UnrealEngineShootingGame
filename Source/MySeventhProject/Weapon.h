
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

class UStaticMeshComponent;
class ALaserProjectile;

UCLASS()
class MYSEVENTHPROJECT_API AWeapon : public AActor
{
		GENERATED_BODY()

	public:
		AWeapon();

		void Fire(FVector target);

	protected:
		virtual void BeginPlay() override;

	public:
		UPROPERTY(EditAnywhere, Category = "Mesh")
			UStaticMeshComponent* MyStaticMesh;

		UFUNCTION(BlueprintCallable, Category = "IK")
			FTransform RightHandTransform();

		UFUNCTION(BlueprintCallable, Category = "IK")
			FTransform LeftHandTransform();

		UPROPERTY(EditAnywhere, Category = "Laser")
			TSubclassOf<ALaserProjectile> Laser;

		UPROPERTY(EditAnywhere, Category = "Laser")
			float Dispersion;
};