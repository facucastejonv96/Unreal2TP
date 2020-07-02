// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerState.h"
#include "MyPlayerController.h"
#include "Unreal2TPGameMode.h"
#include "Unreal2TPCharacter.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Controller.h"



AMyPlayerState::AMyPlayerState()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMyPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyPlayerState, Dead);
}

void AMyPlayerState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

