// Copyright Epic Games, Inc. All Rights Reserved.


#include "HadesGameMode.h"
#include "Hades.h"

AHadesGameMode::AHadesGameMode()
{
}

void AHadesGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	UE_LOG(LogHades, Log, TEXT("Game is running: %s %s"), *MapName, *Options);
}