// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnPoint.h"
#include "MyGameState.h"
#include "Engine/World.h"
// Sets default values
ASpawnPoint::ASpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ASpawnPoint::BeginPlay()
{
	Cast<AMyGameState>(GetWorld()->GetGameState())->SpawnPointList.Add(this);
}


