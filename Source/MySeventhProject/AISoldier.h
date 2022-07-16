
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AISoldier.generated.h"

class UHealthComponent;
class UAIAnimationManagerComponent;

UCLASS()
class MYSEVENTHPROJECT_API AAISoldier : public ACharacter
{
	GENERATED_BODY()

public:
	AAISoldier();

	UHealthComponent* MyHealthComponent;

	UAIAnimationManagerComponent* MyUAIAnimationManagerComponent;


protected:
	void OnHit(int CurrentHealth, APawn* FromPawn);

	void Death();

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
