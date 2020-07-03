// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "MyPlayerState.h"
#include "Unreal2TPGameMode.h"
#include "Unreal2TPCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"

AMyPlayerController::AMyPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;

}


void AMyPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyPlayerController, IsRespawning);
	DOREPLIFETIME(AMyPlayerController, TimeToRespawn);
	DOREPLIFETIME(AMyPlayerController, Lost);
}


void AMyPlayerController::Tick(float DeltaTime)
{
	if (GetNetMode() == ENetMode::NM_DedicatedServer) {
		Super::Tick(DeltaTime);
		PS = Cast<AMyPlayerState>(PlayerState);

		if (PS != nullptr) {
			if (PS->Dead) {
				if (PS->SpawnsLeft > 0) {
					IsRespawning = true;
				}
				else {
					MyCharacter = Cast<AUnreal2TPCharacter>(GetPawn());
					if (MyCharacter != nullptr) {
						MyCharacter->Multicast_OnDestroy();
						Lost = true;
					}
				}			
			}
		}
		
		if (IsRespawning) {
			TimeToRespawn -= GetWorld()->GetDeltaSeconds();
			if (TimeToRespawn <= 0) {
				PS->SpawnsLeft--;
				RespawnCharacter();
				TimeToRespawn = 5;
				IsRespawning = false;
			}
				
		}
	}
}

void AMyPlayerController::RespawnCharacter()
{
	MyCharacter = Cast<AUnreal2TPCharacter>(GetPawn());
	if (MyCharacter != nullptr) {
		MyCharacter->Multicast_OnDestroy();
		FTransform BulletSpawnTransform;
		BulletSpawnTransform.SetLocation(FVector(0, -1020, 220));
		BulletSpawnTransform.SetScale3D(FVector(1.f));
		MyCharacter = GetWorld()->SpawnActor<AUnreal2TPCharacter>(CharacterClass, BulletSpawnTransform);
		Possess(MyCharacter);
		PS->Dead = false;
	}
}
