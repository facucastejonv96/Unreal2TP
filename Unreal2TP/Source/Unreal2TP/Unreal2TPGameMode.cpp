// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Unreal2TPGameMode.h"
#include "Unreal2TPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal2TPGameMode::AUnreal2TPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
