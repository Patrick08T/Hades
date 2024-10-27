// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HadesGameMode.generated.h"

/**
 * 
 */
UCLASS()
class HADES_API AHadesGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AHadesGameMode();

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);
};
