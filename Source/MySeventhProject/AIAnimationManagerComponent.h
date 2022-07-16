
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIAnimationManagerComponent.generated.h"

class AAISoldier;
class USkeletalMeshComponent;
class AWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYSEVENTHPROJECT_API UAIAnimationManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAIAnimationManagerComponent();

	inline void SoldierIsDead() {
		bDead = true;
	}
	
	inline void SetForward(float value) {
		Forward = value;
	}

protected:
	virtual void BeginPlay() override;

	AAISoldier* MyMainManager;

	USkeletalMeshComponent* MySkeletalMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		TSubclassOf<AWeapon> myWeaponPrefab;

	UPROPERTY(BlueprintReadWrite, Category = "Weapon")
		AWeapon* CurrentWeapon;

	UPROPERTY(BlueprintReadWrite, Category = "IsDead")
		bool bDead;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
		float Forward;


	UFUNCTION(BlueprintCallable, Category = "IK")
		FTransform GetRightHandIKTransform();


	UFUNCTION(BlueprintCallable, Category = "IK")
		FTransform GetLeftHandIKTransform();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	void SpawnWeapon();
		
	
};
