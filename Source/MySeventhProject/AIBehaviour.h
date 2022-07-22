
#pragma once

#include "CoreMinimal.h"

enum class AIBehaviourType : uint8;

class AAISoldier;

class MYSEVENTHPROJECT_API AIBehaviour
{
public:
	virtual void UpdateBeheviour() = 0;

	AIBehaviour(AAISoldier* Manager);

	~AIBehaviour();
protected:

	AIBehaviourType GetNextBehaviour();

	AAISoldier* MyMainManager;
};
