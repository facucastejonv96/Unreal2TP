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
void AMyPlayerController::Tick(float DeltaTime)
{
	if (GetNetMode() == ENetMode::NM_DedicatedServer) {
		Super::Tick(DeltaTime);
		PS = Cast<AMyPlayerState>(PlayerState);

		if (PS != nullptr) {
			if (PS->Dead) {
				RespawnCharacter();
				PS->Dead = false;
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
