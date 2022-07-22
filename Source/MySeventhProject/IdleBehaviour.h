
#pragma once

#include "AIBehaviour.h"
#include "CoreMinimal.h"

class MYSEVENTHPROJECT_API IdleBehaviour : public AIBehaviour
{
public:
	IdleBehaviour(AAISoldier* Manager);
	~IdleBehaviour();

	// Inherited via AIBehaviour
	virtual void UpdateBeheviour() override;
};
