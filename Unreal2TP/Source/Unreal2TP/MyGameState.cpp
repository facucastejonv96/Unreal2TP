// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameState.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"
#include "Unreal2TPGameMode.h"
#include "Enemy.h"

AMyGameState::AMyGameState() {
	PrimaryActorTick.bCanEverTick = true;
	Time = 0;
	EnemiesLeft = 10;
	if(GetNetMode() == ENetMode::NM_DedicatedServer)
		GameMode = Cast<AUnreal2TPGameMode>(GetWorld()->GetAuthGameMode());
}
void AMyGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMyGameState, EnemiesLeft);
}



void AMyGameState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Time += GetServerWorldTimeSeconds();	

}

void AMyGameState::OnEnemyDead()
{
	if (GetNetMode() == ENetMode::NM_DedicatedServer){
		EnemiesLeft--;
		//GameMode->SpawnEnemy(); ----> No puedo usar esta funcion, porque por algun motivo en el GameMode el TSubClassOf del enemigo devuelve nulo. 
		SpawnEnemy();//-----> Por eso vuelvo a usar la funcion aca
	}
		
}

void AMyGameState::SpawnEnemy()
{
	FTransform BulletSpawnTransform;
	BulletSpawnTransform.SetLocation(FVector(0, -1020, 220));
	BulletSpawnTransform.SetScale3D(FVector(1.f));
	GetWorld()->SpawnActor<AEnemy>(Enemy, BulletSpawnTransform);
}