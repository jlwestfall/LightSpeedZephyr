// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class GAMEJAM_API APlayerPawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	USceneComponent* PlayerComponent;
	UPROPERTY(EditAnywhere)
	USceneComponent* OurCamera;

	//functions
	void Camera_Lock();
	void Move_XAxis(float AxisValue);
	void Move_ZAxis(float AxisValue);
	void Constant_Move();
	void PlayerBounds();
	void OnFire();

	//Input vars
	FVector CurrentVelocity;

	//Player location
	FVector MyPlayer;
	//Camera location
	FVector CamLocation;
	float CamY_Bound;

	//Const force for camera
	float CamForceY;



public:
	// Sets default values for this pawn's properties
	APlayerPawn();

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USceneComponent* FP_MuzzleLocation;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AGameJamProjectile> ProjectileClass;
	
	
};
