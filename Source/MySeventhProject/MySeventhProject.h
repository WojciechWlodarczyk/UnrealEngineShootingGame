// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"


#define MyPrint(X)		UE_LOG(LogTemp, Warning, TEXT(X));
#define MyPrintParam(Format, __VA_ARGS__)		UE_LOG(LogTemp, Warning, Format, __VA_ARGS__);
#define MyPrintTEXTParam(X, __VA_ARGS__)		UE_LOG(LogTemp, Warning, TEXT(X), __VA_ARGS__);