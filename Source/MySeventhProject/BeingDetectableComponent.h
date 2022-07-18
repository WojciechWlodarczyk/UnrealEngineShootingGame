
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BeingDetectableComponent.generated.h"

class APawn;
class UHealthComponent;

enum class ECombatSide : uint8;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYSEVENTHPROJECT_API UBeingDetectableComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBeingDetectableComponent();

	bool IsDead();

	APawn* GetPawn();

	ECombatSide GetCombatSide();

	void SetCombatSide(ECombatSide side);

	FVector GetLocation();

protected:
	virtual void BeginPlay() override;

	ECombatSide MyCombatSide;

	APawn* PawnOwner;

	UHealthComponent* MyHealthComponent;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
