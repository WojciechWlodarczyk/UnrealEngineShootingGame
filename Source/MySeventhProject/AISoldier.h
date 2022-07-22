
#pragma once

#include <memory>

#include "AIBehaviour.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IDetectableUnit.h"
#include "AISoldier.generated.h"


class UHealthComponent;
class UAIAnimationManagerComponent;
class UEnemyDetectorComponent;
class UPawnSensingComponent;
class UBeingDetectableComponent;
class AAIController;
class AIBehaviour;

enum class ECombatSide : uint8;

UENUM(BlueprintType)
enum class AIBehaviourType : uint8 {
	ABT_Inle					UMETA(DisplayName = "Indle"),

	ABT_AttackEnemy				UMETA(DisplayName = "AttackEnemy"),
	ABT_PatrolTerrain			UMETA(DisplayName = "PatrolTerrain"),
	ABT_ReachPoint				UMETA(DisplayName = "ReachPoint"),

	ABT_ReachCommandStation     UMETA(DisplayName = "ReachCommandStation"),
	ABT_CaptureCommandStation   UMETA(DisplayName = "CaptureCommandStation"),
	ABT_ProtectCommandStation   UMETA(DisplayName = "ProtectCommandStation"),
};

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

	void RequestBehaviour(AIBehaviourType NewBehaviour);

	AAIController* GetAIController();

protected:
	void Death();

	virtual void BeginPlay() override;

	AIBehaviourType CurrentBehaviourType;


public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	int GetBehaviourPriority(AIBehaviourType Behaviour);

	AAIController* AIController;

 	std::unique_ptr<AIBehaviour> CurrentBehaviour;
//	std::unique_ptr<IdleBehaviour> p4{ std::make_unique<IdleBehaviour>(this) };

//	std::unique_ptr<int> CurrentBehaviour;
//	std::unique_ptr<class AIBehaviour> CurrentBehaviour;
//	std::unique_ptr<AIBehaviour> CurrentBehaviour;
//	AIBehaviour* CurrentBehaviour;
};



