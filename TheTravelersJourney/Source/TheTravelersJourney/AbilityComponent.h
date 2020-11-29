// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCharacter.h"
#include "Engine/DataTable.h"
#include "Components/TextRenderComponent.h"
#include "AbilityComponent.generated.h"



USTRUCT(BlueprintType)
struct FAbilities : public FTableRowBase {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		int rarity = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		FString name = "De naam";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		FString category = "category";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		float Points = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		float Cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability ")
		FString description = "De beschrijving van de ability";
};

UCLASS()
class THETRAVELERSJOURNEY_API AAbilityComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DataTable")
		class UDataTable* AbilityDataTable;

	AAbilityComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		int rarity = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		FString name = "De naam";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		FString category = "category";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		float Points = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		float Cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability ")
		FString description = "De beschrijving van de ability";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "reference ")
		int CastedAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "reference ")
		int AbilityIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "reference")
		AMyCharacter* MyCharacter;

	void UpdateTimerDisplay();
	void AdvanceTimer();

	UTextRenderComponent* CountdownText;

	UFUNCTION(BlueprintNativeEvent)
		void CountdownHasFinished();
		virtual void CountdownHasFinished_Implementation();

	FTimerHandle CountdownTimerHandle;
};
