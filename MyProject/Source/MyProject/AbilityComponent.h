// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilityComponent.generated.h"

UCLASS()
class MYPROJECT_API AAbilityComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		int rarity = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		FString name = "De naam";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		int category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
		float points = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability ")
		FString description = "De beschrijving van de ability";

	AAbilityComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
