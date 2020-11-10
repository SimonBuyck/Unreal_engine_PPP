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

    //setting up the default values of the character and the callback functions
    FullHealth = 100.f;
    Health = FullHealth;
    HealthPercentage = 1.f;

    MovementSpeed = 3.f;

    // Create and position a mesh component so we can see where our sphere is
    UStaticMeshComponent* SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
    SphereVisual->SetupAttachment(RootComponent);
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_NarrowCapsule"));
    if (SphereVisualAsset.Succeeded())
    {
        SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
        SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
        SphereVisual->SetWorldScale3D(FVector(1.f));
    }

    // Create an instance of our movement component, and tell it to update the root.
    OurMovementComponent = CreateDefaultSubobject<UCollidingPawnMovementComponent>(TEXT("CustomMovementComponent"));
    OurMovementComponent->UpdatedComponent = RootComponent;

    //creating a spring arm
    OurCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
    OurCameraSpringArm->SetupAttachment(RootComponent);
    OurCameraSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, 0.0f, 0.0f));
    OurCameraSpringArm->TargetArmLength = 400.f;

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
    
    if (HealthCurve) {
        FOnTimelineFloat TimelineCallback;
        FOnTimelineEventStatic TimelineFinishedCallback;

        TimelineCallback.BindUFunction(this, FName("SetHealthValue"));
        TimelineFinishedCallback.BindUFunction(this, FName("SetHealthState"));
        MyTimeline.AddInterpFloat(HealthCurve, TimelineCallback);
        MyTimeline.SetTimelineFinishedFunc(TimelineFinishedCallback);
    }
}

// Called every frame
void ACollidingPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    //setting the timeline to the tick
    MyTimeline.TickTimeline(DeltaTime);


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

    //PlayerInputComponent->BindAction("Ability1", this, &ACollidingPawn::Ability1);
    //PlayerInputComponent->BindAction("Ability2", this, &ACollidingPawn::Ability2);
    //PlayerInputComponent->BindAction("Ability3", this, &ACollidingPawn::Ability3);

    //Hook up every-frame handling for our four axes
    PlayerInputComponent->BindAxis("MoveForward", this, &ACollidingPawn::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ACollidingPawn::MoveRight);
    PlayerInputComponent->BindAxis("CameraPitch", this, &ACollidingPawn::PitchCamera);
    PlayerInputComponent->BindAxis("CameraYaw", this, &ACollidingPawn::YawCamera);


}

UPawnMovementComponent* ACollidingPawn::GetMovementComponent() const
{
    return OurMovementComponent;
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

}

void ACollidingPawn::Ability2() {

}

void ACollidingPawn::Ability3() {

}