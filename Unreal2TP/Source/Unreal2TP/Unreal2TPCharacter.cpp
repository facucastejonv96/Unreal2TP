// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Unreal2TPCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Bullet.h"
#include "Net/UnrealNetwork.h"
#include "CharacterAnimInstance.h"
//////////////////////////////////////////////////////////////////////////
// AUnreal2TPCharacter

AUnreal2TPCharacter::AUnreal2TPCharacter()
{
	SetReplicates(true);
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	FiringTime = 2;
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void AUnreal2TPCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AUnreal2TPCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AUnreal2TPCharacter::MoveRight);
	PlayerInputComponent->BindAxis("MoveForward", this, &AUnreal2TPCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AUnreal2TPCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AUnreal2TPCharacter::TurnAtRate);
	//PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	//PlayerInputComponent->BindAxis("LookUpRate", this, &AUnreal2TPCharacter::LookUpAtRate);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AUnreal2TPCharacter::Aim);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AUnreal2TPCharacter::Unaim);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AUnreal2TPCharacter::StartShooting);
	PlayerInputComponent->BindAction("Fire", IE_Released,this, &AUnreal2TPCharacter::StopShooting);
	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AUnreal2TPCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AUnreal2TPCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AUnreal2TPCharacter::OnResetVR);
}
void AUnreal2TPCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AUnreal2TPCharacter, Y);
}

void AUnreal2TPCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}
void AUnreal2TPCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	if (Y == 0 && Z == 0) {
		Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Moving = false;
	}
	else {
		Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Moving = true;
	}
		FiringTime += GetWorld()->GetDeltaSeconds();

		if (Triggering && Ready) {

			Shoot();
		}
		if (FiringTime > FireRate) {
			Ready = true;
		}
}
void AUnreal2TPCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AUnreal2TPCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AUnreal2TPCharacter::Shoot()
{
		UE_LOG(LogTemp, Warning, TEXT("Entra"));
		//Animator->Firing = true;
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.bNoFail = true;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = this;

		FTransform BulletSpawnTransform;
		BulletSpawnTransform.SetLocation(GetActorForwardVector() * 500.f + GetActorLocation());
		BulletSpawnTransform.SetRotation(GetActorRotation().Quaternion());
		BulletSpawnTransform.SetScale3D(FVector(1.f));
		GetWorld()->SpawnActor<ABullet>(BulletClass, BulletSpawnTransform, SpawnParams);
		FiringTime = 0;
		Ready = false;
}

void AUnreal2TPCharacter::StartShooting() {
	Triggering = true;
}
void AUnreal2TPCharacter::StopShooting() {
	Triggering = false;
}

void AUnreal2TPCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AUnreal2TPCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AUnreal2TPCharacter::Aim()
{
	Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Aiming = true;
}
void AUnreal2TPCharacter::Unaim() {
	Cast<UCharacterAnimInstance>(Mesh->GetAnimInstance())->Aiming = false;
}

void AUnreal2TPCharacter::OnRep_Y() {
	OnYReplicated();
}

void AUnreal2TPCharacter::Server_Y_Implementation(const float newY) {
	Y = newY;
}

void AUnreal2TPCharacter::OnYReplicated() {
	Server_Y_Implementation(Y);
}

void AUnreal2TPCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{

		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);

		//Move animator
		
	}
	Y = Value;
}

void AUnreal2TPCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
		//Move animator
		
	}
	Z = Value;
}


