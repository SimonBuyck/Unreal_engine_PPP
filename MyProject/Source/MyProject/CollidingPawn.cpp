// Fill out your copyright notice in the Description page of Project Settings.


#include "CollidingPawn.h"
#include "CollidingPawnMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ACollidingPawn::ACollidingPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    MovementSpeed = 3.f;

    //setting the size of the inventory
    Inventory.SetNum(3);


    // Create an instance of our movement component, and tell it to update the root.
    OurMovementComponent = CreateDefaultSubobject<UCollidingPawnMovementComponent>(TEXT("CustomMovementComponent"));
    OurMovementComponent->UpdatedComponent = RootComponent;

    //creating a spring arm
    OurCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
    OurCameraSpringArm->SetupAttachment(RootComponent);
    OurCameraSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, 0.0f, 0.0f));
    OurCameraSpringArm->TargetArmLength = 400.f;
    OurCameraSpringArm->AddLocalOffset(FVector(200.0f));

    //creating the player camera
    OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("GameCamera"));
    OurCamera->SetupAttachment(OurCameraSpringArm, USpringArmComponent::SocketName);

    // Take control of the default player
    AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ACollidingPawn::BeginPlay()
{
	Super::BeginPlay();
    
}

// Called every frame
void ACollidingPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


    //Rotate our actor's yaw, which will turn our camera because we're attached to it
    {
        FRotator NewRotation = GetActorRotation();
        NewRotation.Yaw += CameraInput.X;
        SetActorRotation(NewRotation);
    }

    //Rotate our camera's pitch, but limit it so we're always looking downward
    {
        FRotator NewRotation = OurCameraSpringArm->GetComponentRotation();
        NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch + CameraInput.Y, -80.0f, -15.0f);
        OurCameraSpringArm->SetWorldRotation(NewRotation);
    }

    //Handle movement based on our "MoveX" and "MoveY" axes
    {
        if (!MovementInput.IsZero())
        {
            //Scale our movement input axis values by 100 units per second
            MovementInput = MovementInput * 100.0f;
            FVector NewLocation = GetActorLocation();
            NewLocation += GetActorForwardVector() * MovementInput.X * DeltaTime;
            NewLocation += GetActorRightVector() * MovementInput.Y * DeltaTime;
            SetActorLocation(NewLocation);
        }
    }
}

// Called to bind functionality to input
void ACollidingPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Ability1", IE_Pressed, this, &ACollidingPawn::Ability1);
    PlayerInputComponent->BindAction("Ability2", IE_Pressed, this, &ACollidingPawn::Ability2);
    PlayerInputComponent->BindAction("Ability3", IE_Pressed, this, &ACollidingPawn::Ability3);


    //Hook up every-frame handling for our four axes
    PlayerInputComponent->BindAxis("MoveForward", this, &ACollidingPawn::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ACollidingPawn::MoveRight);
    PlayerInputComponent->BindAxis("CameraPitch", this, &ACollidingPawn::PitchCamera);
    PlayerInputComponent->BindAxis("CameraYaw", this, &ACollidingPawn::YawCamera);


}

//Input functions
void ACollidingPawn::MoveForward(float AxisValue)
{
    MovementInput.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * MovementSpeed;
}

void ACollidingPawn::MoveRight(float AxisValue)
{
    MovementInput.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * MovementSpeed;
}

void ACollidingPawn::PitchCamera(float AxisValue)
{
    CameraInput.Y = AxisValue;
}

void ACollidingPawn::YawCamera(float AxisValue)
{
    CameraInput.X = AxisValue;
}

void ACollidingPawn::Ability1() {
    CheckInventory(0);
    CastingAbility = 1;
}

void ACollidingPawn::Ability2() {
    CheckInventory(1);
    CastingAbility = 2;
}

void ACollidingPawn::Ability3() {
    CheckInventory(2);
    CastingAbility = 3;
}

void ACollidingPawn::CheckInventory(int index) {
    //if (Inventory[index] != 0) {
    //    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ability Casted!"));
    //}
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ability Casted!"));
}
