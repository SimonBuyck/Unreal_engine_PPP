// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityComponent.h"
#include "MyCharacter.h"



// Sets default values
AAbilityComponent::AAbilityComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<AMyCharacter> MyCharacterObj(TEXT("Blueprint'/Game/MyCharacter.MyCharacter'"));
}

// Called when the game starts or when spawned
void AAbilityComponent::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Begin Play"));

	//getting a reference to the casted ability index
	if (MyCharacterInstance) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("reference established"));
		if (MyCharacterInstance->GetCastedAbility()) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("function is true"));
			//reference to the casted ability
			CastedAbility = MyCharacterInstance->GetCastedAbility();

			//converting the int to a string
			FString CastedAbilityString = FString::FromInt(CastedAbility);
			GEngine->AddOnScreenDebugMessage(-10, 1.f, FColor::Yellow, FString::Printf(TEXT("castedAbility: %i"), CastedAbility));

			//load data table
			static ConstructorHelpers::FObjectFinder<UDataTable> AbilityDataObject(TEXT("DataTable'/Game/Assets/DataTables/Abilities.Abilities'"));
			if (AbilityDataObject.Succeeded()) {
				AbilityDataTable = AbilityDataObject.Object;
				if (AbilityDataTable) {
					static const FString ContextString(TEXT("Abilitie context"));
					FAbilities* Abilities = AbilityDataTable->FindRow<FAbilities>(FName(CastedAbilityString), ContextString, true);
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
	}



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



