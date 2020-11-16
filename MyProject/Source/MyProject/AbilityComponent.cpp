// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityComponent.h"

// Sets default values
AAbilityComponent::AAbilityComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//load data table
	static ConstructorHelpers::FObjectFinder<UDataTable> AbilityDataObject(TEXT("DataTable'/Game/Assets/DataTables/Abilities.Abilities'"));
	if (AbilityDataObject.Succeeded()) {
		AbilityDataTable = AbilityDataObject.Object;
		if (AbilityDataTable) {
			static const FString ContextString(TEXT("Abilitie context"));
			FAbilities* Abilities = AbilityDataTable->FindRow<FAbilities>(FName(TEXT("15")), ContextString, true);
			if (Abilities) {
				rarity = Abilities->rarity;
				category = Abilities->category;
				name = Abilities->name;
				Points = Abilities->Points;
				Cooldown = Abilities->Cooldown;
				description = Abilities->description;
			}
		}
	}
}

// Called when the game starts or when spawned
void AAbilityComponent::BeginPlay()
{
	Super::BeginPlay();

	if (category == "movement speed") {

	}
	else if (category == "shield") {

	}
	else  if (category == "healing") {

	}
	else {

	}

}

// Called every frame
void AAbilityComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

