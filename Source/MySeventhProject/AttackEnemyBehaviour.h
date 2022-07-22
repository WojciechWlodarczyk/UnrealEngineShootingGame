
#pragma once

#include "AIBehaviour.h"
#include "CoreMinimal.h"

class UBeingDetectableComponent;

class MYSEVENTHPROJECT_API AttackEnemyBehaviour : public AIBehaviour
{
public:
	AttackEnemyBehaviour(AAISoldier* Manager, UBeingDetectableComponent* Enemy);
	~AttackEnemyBehaviour();

	virtual void UpdateBeheviour() override;

private:
	UBeingDetectableComponent* EnemyToAttack;

	bool CheckEnemyState(UBeingDetectableComponent* Enemy);

	void ControlSoldier();
};
