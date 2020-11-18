// Copyrights Simon Buyck 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class MYPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties

	//properties for the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MovementSpeed")
		float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<int32> Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int CastingAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		float Sensitivity = 5;

	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	TSubclassOf<AActor> Ability;

	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		class USpringArmComponent* OurCameraSpringArm;
		class UCameraComponent* OurCamera;

	//Input functions
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void PitchCamera(float AxisValue);
	void YawCamera(float AxisValue);

	void Ability1();
	void Ability2();
	void Ability3();

	UFUNCTION()
		void SpawnAbility(FVector Loc, FRotator Rot);

	FVector CurrentVelocity;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CheckInventory(int index);
};
