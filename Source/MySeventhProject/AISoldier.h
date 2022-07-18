
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IDetectableUnit.h"
#include "AISoldier.generated.h"

class UHealthComponent;
class UAIAnimationManagerComponent;
class UEnemyDetectorComponent;
class UPawnSensingComponent;
class UBeingDetectableComponent;

enum class ECombatSide : uint8;


UCLASS()
class MYSEVENTHPROJECT_API AAISoldier : public ACharacter
{
	GENERATED_BODY()

public:
	AAISoldier();

	UHealthComponent* MyHealthComponent;

	UAIAnimationManagerComponent* AnimationManager;

	UEnemyDetectorComponent* EnemyDetector;

	UPROPERTY(VisibleAnywhere, Category = "Component")
		UPawnSensingComponent* PawnSensingComp;

	UPROPERTY(EditDefaultsOnly, Category = "Side")
		ECombatSide MySide;

	UBeingDetectableComponent* MyDetectableComponent;

protected:
	void OnHit(int CurrentHealth, APawn* FromPawn);

	void Death();

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
