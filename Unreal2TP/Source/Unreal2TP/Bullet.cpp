// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/AudioComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"

// Sets default values
ABullet::ABullet()
{
	UE_LOG(LogTemp, Warning, TEXT("Spawneo"));
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	SetRootComponent(StaticMesh);
	BulletMovement = CreateDefaultSubobject<UProjectileMovementComponent>("Projectile Movement");
	BulletMovement->InitialSpeed = 3000.f;
	BulletMovement->MaxSpeed = 3000.f;

	FireSound = CreateDefaultSubobject<UAudioComponent>("Audio");
	
	OnActorHit.AddDynamic(this, &ABullet::OnBulletHit);
	
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::OnBulletHit(AActor * SelfActor, AActor * OtherActor, FVector NormalImpulse, const FHitResult & Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("colisiona"));
}

