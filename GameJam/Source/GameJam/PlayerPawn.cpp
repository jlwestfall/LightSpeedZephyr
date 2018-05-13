// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "GameJamProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

// Sets default values
APlayerPawn::APlayerPawn()
{

	//Set pawn to be controlled by lowest numbered player
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//Create dummy root component to attach things to
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCamera"));
	PlayerComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerComponent"));
	//Attach camera to root component. Offset and rotate the camera.
	OurCamera->SetupAttachment(RootComponent);
	OurCamera->SetRelativeLocation(FVector(250.0f, 500.0f, 400.0f));
	//OurCamera->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
	PlayerComponent->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(RootComponent);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	GunOffset = FVector(0.0f, 100.0f, 10.0f);

	ProjectileClass = AGameJamProjectile::StaticClass();

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	FP_MuzzleLocation->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Constant move forward
	FVector ConstMoveY = GetActorLocation();
	ConstMoveY.Y -= 5.0f;
	SetActorLocation(ConstMoveY);

	//Move based on input
	FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime);
	SetActorLocation(NewLocation);

	PlayerBounds();
	Camera_Lock();

		

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("Fire", IE_Pressed, this, &APlayerPawn::OnFire);

	InputComponent->BindAxis("MoveForward", this, &APlayerPawn::Move_XAxis);
	InputComponent->BindAxis("MoveRight", this, &APlayerPawn::Move_ZAxis);

}

void APlayerPawn::OnFire()
{// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			const FRotator SpawnRotation = GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			World->SpawnActor<AGameJamProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

		}
	}

}

void APlayerPawn::Camera_Lock()
{
	//Locking the camera in place 
	CamForceY -= 5.0f;
	FTransform transform(FVector(1100.0f, CamForceY, 2000.0f));
	transform.SetRotation(FQuat::MakeFromEuler(FVector(180.0f, -90.0f, 90.0f)));
	OurCamera->SetWorldTransform(transform);
}

void APlayerPawn::Move_XAxis(float AxisValue)
{
	//Move 100 units per second right or left
	// we may need to finagle these 
	CurrentVelocity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 500.0f;
}

void APlayerPawn::Move_ZAxis(float AxisValue)
{

	CurrentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 500.0f;
}


void APlayerPawn::Constant_Move()
{
	CurrentVelocity.Y = FMath::Clamp(100.0f, -1.0f, 1.0f) * 100.0f;
}

void APlayerPawn::PlayerBounds()
{
	//TODO:
	//Lock the player's position in the X && Y so they cannot escape the bounds of the screen
	MyPlayer = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	CamLocation = OurCamera->GetComponentLocation();
	CamY_Bound = CamLocation.Y;
	//Horiz Boundaries
	if (MyPlayer.X <= 300)
	{
		MyPlayer.X += 4.25f;
		SetActorLocation(MyPlayer);
	}
	else if (MyPlayer.X >= 1500.0f)
	{
		MyPlayer.X -= 4.25f;
		SetActorLocation(MyPlayer);
	}

	//Vert Boundaries
}


