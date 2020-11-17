// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/TimelineComponent.h"
#include "CollidingPawn.generated.h"

UCLASS()
class MYPROJECT_API ACollidingPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties

	//particle system
	UPROPERTY()
		class UParticleSystemComponent* OurParticleSystem;

	//custom movementComponent
	UPROPERTY()
		class UCollidingPawnMovementComponent* OurMovementComponent;

	//properties for the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MovementSpeed")
		float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<int32> Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int CastingAbility;

	ACollidingPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();

	UPROPERTY(EditAnywhere)
		class USpringArmComponent* OurCameraSpringArm;
		class UCameraComponent* OurCamera;

		//Input variables
		FVector2D MovementInput;
		FVector2D CameraInput;

		TArray<int32> IntArray;

		//Input functions
		void MoveForward(float AxisValue);
		void MoveRight(float AxisValue);
		void PitchCamera(float AxisValue);
		void YawCamera(float AxisValue);

		void Ability1();
		void Ability2();
		void Ability3();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CheckInventory(int index);
};
