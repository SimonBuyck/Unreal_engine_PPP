// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityComponent.h"

// Sets default values
AAbilityComponent::AAbilityComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//load data table
	static ConstructorHelpers::FObjectFinder<UDataTable> AbilityDataObject(TEXT("DataTable'/Game/Assets/Abilities.Abilities'"));
	if (AbilityDataObject.Succeeded()) {
		AbilityDataTable = AbilityDataObject.Object;
	}
}

// Called when the game starts or when spawned
void AAbilityComponent::BeginPlay()
{
	Super::BeginPlay();

	if (AbilityDataTable) {
		static const FString ContextString(TEXT("Abilitie context"));
		FAbilities* Abilities = AbilityDataTable->FindRow<FAbilities>(1, ContextString, true);
		if (Abilities) {
			category = Abilities->category;
		}
	}

}

// Called every frame
void AAbilityComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

