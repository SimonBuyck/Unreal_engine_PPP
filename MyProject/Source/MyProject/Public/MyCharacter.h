// Copyrights Simon Buyck 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyProject\HealthComponent.h"
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

	UPROPERTY()
		bool jumping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TArray<int32> Inventory;

	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	TSubclassOf<AActor> Ability;

	UPROPERTY(EditAnywhere)
		bool CanCast1 = true;

	UPROPERTY(EditAnywhere)
		bool CanCast2 = true;

	UPROPERTY(EditAnywhere)
		bool CanCast3 = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Ability1Cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Ability2Cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Ability3Cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Shield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Dead;

	int GetCastedAbility();
	int GetCastedAbilityIndex();

	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USpringArmComponent* Arm;

	UPROPERTY()
		class UCameraComponent* Camera;
		class UHealthComponent* HealthComponent;

	//Input functions
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void YawCamera(float AxisValue);
	void PitchCamera(float AxisValue);

	void CheckJump();

	void Ability1();
	void Ability2();
	void Ability3();

	UFUNCTION()
		void SpawnAbility(FVector Loc, FRotator Rot);

	UPROPERTY(EditAnywhere)
		int CastedAbility;

	UPROPERTY(EditAnywhere)
		int CastedAbilityIndex;

	FVector CurrentVelocity;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CheckInventory(int index);
};
