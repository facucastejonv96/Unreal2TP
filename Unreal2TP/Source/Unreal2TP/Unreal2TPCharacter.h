// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Unreal2TPCharacter.generated.h"
UCLASS(config=Game)
class AUnreal2TPCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	AUnreal2TPCharacter();

	void RecieveDamage(const float damage);

	UPROPERTY(Replicated, BlueprintReadOnly)
		float Life = 500;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UAudioComponent* FireSound;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UAudioComponent* DamageSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BulletSpawn;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(Server, Reliable)
		void Server_OnDestroy();

	UFUNCTION(NetMulticast, Reliable)
		void Multicast_OnDestroy();


	UFUNCTION(Server, Reliable)
		void Server_StartShooting();

	UFUNCTION(Server, Reliable)
		void Server_StopShooting();

	UFUNCTION(Server, Reliable)
		void Server_Aim();

	UFUNCTION(Server, Reliable)
		void Server_Unaim();

	void Turn(float Amount);
	UPROPERTY(EditAnywhere, Category = "Class")
		TSubclassOf<class ABullet> BulletClass;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UCharacterAnimInstance* Animator;

	float FiringTime;

	UPROPERTY(Replicated,  BlueprintReadOnly)
	bool Triggering;


	UPROPERTY(Replicated, BlueprintReadOnly)
	bool Ready = false;

	UPROPERTY(EditAnywhere, Category = "Firing")
		float FireRate;

	UPROPERTY(Replicated, BlueprintReadOnly)
	bool Aiming;

	UPROPERTY(Replicated, BlueprintReadOnly)
		bool Shooting;

	UPROPERTY(Replicated, BlueprintReadOnly)
		bool Hitting;

	float HittingTime;

	bool Dead;

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	void Aim();
	void Unaim();
	void AnimMove();
    void Shoot();
	void StartShooting();
	void StopShooting();
	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface
public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

};

