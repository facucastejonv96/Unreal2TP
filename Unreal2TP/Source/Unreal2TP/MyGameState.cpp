// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameState.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"
#include "Unreal2TPGameMode.h"
#include "Enemy.h"

AMyGameState::AMyGameState() {
	PrimaryActorTick.bCanEverTick = true;
	Time = 0;
	EnemiesLeft = 6;
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
	Time += GetWorld()->GetDeltaSeconds();
	int n = SpawnPointList.Num();
	UE_LOG(LogTemp, Warning, TEXT("%d"), n);

}

void AMyGameState::OnEnemyDead(bool CanRespawn)
{
	if (GetNetMode() == ENetMode::NM_DedicatedServer){
		if(CanRespawn)
			SpawnEnemy();
		else
			EnemiesLeft--;
		//GameMode->SpawnEnemy(); ----> No puedo usar esta funcion, porque por algun motivo en el GameMode el TSubClassOf del enemigo devuelve nulo. 
	}
		
}

void AMyGameState::SpawnEnemy()
{

		FTransform SpawnTransform;
		SpawnTransform.SetLocation(SpawnPointList[rand() % 3]->GetActorLocation());
		SpawnTransform.SetRotation(SpawnPointList[rand() % 3]->GetActorRotation().Quaternion());
		SpawnTransform.SetScale3D(FVector(1.f));
		AEnemy* E;
		E = GetWorld()->SpawnActor<AEnemy>(Enemy, SpawnTransform);
		E->SpawnsLeft--;
}