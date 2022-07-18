
#pragma once

#include "CoreMinimal.h"

class APawn;

enum class ECombatSide : uint8;

class IDetectableUnit
{
public:
	virtual bool IsStillAlive() = 0;

	virtual APawn* GetPawn() = 0;

	virtual ECombatSide GetCombatSide() = 0;
};
