// Copyrights Simon Buyck 2020


#include "MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Runtime\Engine\Classes\Kismet\GameplayStatics.h"
#include "TheTravelersJourney\HealthComponent.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    //setting the size of the inventory
    Inventory.SetNum(3);

    AutoPossessPlayer = EAutoReceiveInput::Player0;

    bUseControllerRotationYaw = false;
    
    HealthComponent = Cast<UHealthComponent>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

    Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    Arm->SetupAttachment(RootComponent);
    Arm->TargetArmLength = 50.f;
    Arm->SetRelativeLocationAndRotation(FVector(0.f, 50.f, 50.f), FRotator(0.f, 0.f, 0.f));

    Camera->SetupAttachment(Arm, USpringArmComponent::SocketName);

    jumping = false;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (jumping) {
        Jump();
    }
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Ability1", IE_Pressed, this, &AMyCharacter::Ability1);
    PlayerInputComponent->BindAction("Ability2", IE_Pressed, this, &AMyCharacter::Ability2);
    PlayerInputComponent->BindAction("Ability3", IE_Pressed, this, &AMyCharacter::Ability3);

    //Hook up every-frame handling for our four axes
    PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);
    PlayerInputComponent->BindAxis("CameraYaw", this, &AMyCharacter::YawCamera);
    PlayerInputComponent->BindAxis("CameraPitch", this, &AMyCharacter::PitchCamera);

    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::CheckJump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyCharacter::CheckJump);
}

//Input functions
void AMyCharacter::MoveForward(float AxisValue)
{
    if (AxisValue) {
        AddMovementInput(GetActorForwardVector(), AxisValue);
    }
}

void AMyCharacter::MoveRight(float AxisValue)
{
    if (AxisValue) {
        AddMovementInput(GetActorRightVector(), AxisValue);
    }
}

void AMyCharacter::YawCamera(float AxisValue)
{
    if (AxisValue) {
        AddActorLocalRotation(FRotator(0, AxisValue, 0));
    }
}

void AMyCharacter::PitchCamera(float AxisValue)
{
    if (AxisValue) {
        float temp = Arm->GetRelativeRotation().Pitch + AxisValue;
        if (temp < 25 && temp > -65) {
            Arm->AddLocalRotation(FRotator(AxisValue, 0, 0));
        }
    }
}

void AMyCharacter::CheckJump()
{
    if (jumping) {
        jumping = false;
    }else {
        jumping = true;
    }
}

void AMyCharacter::Ability1() {
    CheckInventory(0);
}

void AMyCharacter::Ability2() {
    CheckInventory(1);
}

void AMyCharacter::Ability3() {
    CheckInventory(2);
}

void AMyCharacter::SpawnAbility(FVector Loc, FRotator Rot)
{
    FActorSpawnParameters SpawnParams;
    AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(Ability, Loc, Rot, SpawnParams);
}

void AMyCharacter::CheckInventory(int index) {
    CastedAbility = Inventory[index];
    CastedAbilityIndex = index;
    if (Inventory[index] != 0) {
        if (index == 0 && CanCast1 == true) {
            FVector ActorLocation = FVector(0.0f, 0.0f, -88.0f) + GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
            SpawnAbility(ActorLocation, GetControlRotation());
            CanCast1 = false;
        }
        else if (index == 1 && CanCast2 == true) {
            FVector ActorLocation = FVector(0.0f, 0.0f, -88.0f) + GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
            SpawnAbility(ActorLocation, GetControlRotation());
            CanCast2 = false;
        }
        else if(index == 2 && CanCast3 == true) {
            FVector ActorLocation = FVector(0.0f, 0.0f, -88.0f) + GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
            SpawnAbility(ActorLocation, GetControlRotation());
            CanCast3 = false;
        }
    }
    

}

int AMyCharacter::GetCastedAbility()
{
    return CastedAbility;
}

int AMyCharacter::GetCastedAbilityIndex()
{
    return CastedAbilityIndex;
}

