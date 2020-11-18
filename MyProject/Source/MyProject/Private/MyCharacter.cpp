// Copyrights Simon Buyck 2020


#include "MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"



// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    MovementSpeed = 3.0f;

    //setting the size of the inventory
    Inventory.SetNum(3);

    //creating a spring arm
    OurCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
    OurCameraSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 25.0f, 150.0f), FRotator(-5.0f, 0.0f, 0.0f));
    OurCameraSpringArm->TargetArmLength = 50.f;

    //creating the player camerad
    OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("GameCamera"));
    OurCamera->SetupAttachment(OurCameraSpringArm, USpringArmComponent::SocketName);



    // Take control of the default player
    AutoPossessPlayer = EAutoReceiveInput::Player0;
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
}

//Input functions
void AMyCharacter::MoveForward(float AxisValue)
{
    // find out which way is forward
    FRotator Rotation = Controller->GetControlRotation();

    // add movement in that direction
    const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
    AddMovementInput(Direction, AxisValue);
}

void AMyCharacter::MoveRight(float AxisValue)
{
    // Find out which way is "right" and record that the player wants to move that way.
    FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
    AddMovementInput(Direction, AxisValue);
}

void AMyCharacter::YawCamera(float AxisValue)
{

    //need to add a sensitivity
    AddControllerYawInput(AxisValue);
}

void AMyCharacter::Ability1() {
    CheckInventory(0);
    CastedAbility = 1;
}

void AMyCharacter::Ability2() {
    CheckInventory(1);
    CastedAbility = 2;
}

void AMyCharacter::Ability3() {
    CheckInventory(2);
    CastedAbility = 3;
}

void AMyCharacter::SpawnAbility(FVector Loc, FRotator Rot)
{
    FActorSpawnParameters SpawnParams;
    AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(Ability, Loc, Rot, SpawnParams);
}

void AMyCharacter::CheckInventory(int index) {
    if (Inventory[index] != 0) {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ability Casted!"));
        SpawnAbility(GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation(), GetControlRotation());
    }
}

int AMyCharacter::GetCastedAbility()
{
    return CastedAbility;
}

