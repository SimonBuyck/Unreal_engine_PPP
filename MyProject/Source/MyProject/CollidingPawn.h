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

	UPROPERTY()
		class UParticleSystemComponent* OurParticleSystem;

	UPROPERTY()
		class UCollidingPawnMovementComponent* OurMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MovementSpeed")
		float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float FullHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float HealthPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float PreviousHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		bool TakingDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		UCurveFloat* HealthCurve;

	UPROPERTY(EditAnywhere, Category = "Health")
		FTimeline MyTimeline;

	float CurveFloatValue;
	float TimelineValue;
	bool bCanUseMagic1;
	bool bCanUseMagic2;
	bool bCanUseMagic3;

	//UFUNCTION(BlueprintPure, Category = "Health")
	//	float GetHealth();

	//UFUNCTION(BlueprintPure, Category = "Health")
	//	float GetHealthInText();

	//UFUNCTION()
	//	void SetHealthState();

	////UFUNCTION(BlueprintPure, Category = "Health")
	////	void PlayTakingDamage();

	//UFUNCTION()
	//	void recievePointDamage(float Damage, const UDamageType* DamageType, FVector HitLocation, FVector Hitnormal, UPrimitiveComponent * HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamagaCauser, const FHitResult & HitInfo);

	//UFUNCTION(BlueprintCallable, Category = "Health")
	//	void UpdateHealth(float HealthChange);

	//UFUNCTION(BlueprintCallable, Category = "MovementSpeed")
	//	void UpdateMovementSpeed(float HealthChange);

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

	virtual UPawnMovementComponent* GetMovementComponent() const override;

};
