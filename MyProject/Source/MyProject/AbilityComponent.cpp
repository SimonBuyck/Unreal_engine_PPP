// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityComponent.h"
#include "MyCharacter.h"
#include "Runtime\Engine\Classes\Kismet\GameplayStatics.h"



// Sets default values
AAbilityComponent::AAbilityComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//getting a reference to MyCharacter
	MyCharacter = Cast<AMyCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	//getting a reference to the casted ability index
	if (MyCharacter) {
		if (MyCharacter->GetCastedAbility()) {
			//reference to the casted ability
			CastedAbility = MyCharacter->GetCastedAbility();
			//converting the int to a string
			FString CastedAbilityString = FString::FromInt(CastedAbility);
			//changing the FString to a FName
			FName CastedAbilityName = FName(*CastedAbilityString);

			//load data table
			static ConstructorHelpers::FObjectFinder<UDataTable> AbilityDataObject(TEXT("DataTable'/Game/Assets/DataTables/Abilities.Abilities'"));
			if (AbilityDataObject.Succeeded()) {
				AbilityDataTable = AbilityDataObject.Object;
				if (AbilityDataTable) {
					static const FString ContextString(TEXT("Ability context"));
					FAbilities* Abilities = AbilityDataTable->FindRow<FAbilities>(CastedAbilityName, ContextString, true);
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

}

// Called when the game starts or when spawned
void AAbilityComponent::BeginPlay()
{
	Super::BeginPlay();

	if (category == "movement speed") {
		MyCharacter->GetMovementComponent();
	}
	else if (category == "shield") {

	}
	else  if (category == "healing") {
		if (CastedAbility = 1, 6, 7, 14) {

		}
		else {
			float Health = MyCharacter->GetPlayerHealth();
			float DefaultHealth = MyCharacter->GetPlayerDefaultHealth();
			float NewHealth = FMath::Clamp(Health + Points, 0.0f, DefaultHealth);	
		}
	}
	else {

	}

	GetWorld()->GetTimerManager().SetTimer(FuzeTimerHandle, this, &AAbilityComponent::OnCooldown, Cooldown, false);
}

void AAbilityComponent::OnCooldown() {
}





