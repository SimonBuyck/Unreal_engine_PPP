// Fill out your copyright notice in the Description page of Project Settings.



#include "Components/TextRenderComponent.h"
#include "Runtime\Engine\Classes\Kismet\GameplayStatics.h"
#include "MyCharacter.h"
#include "AbilityComponent.h"

// Sets default values
AAbilityComponent::AAbilityComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CountdownText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("CountdownNumber"));
	CountdownText->SetHorizontalAlignment(EHTA_Center);
	CountdownText->SetWorldSize(150.0f);
	RootComponent = CountdownText;

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

	UpdateTimerDisplay();
	GetWorld()->GetTimerManager().SetTimer(CountdownTimerHandle, this, &AAbilityComponent::AdvanceTimer, Cooldown, true);
}

void AAbilityComponent::UpdateTimerDisplay()
{
	CountdownText->SetText(FString::FromInt(Cooldown));
}

void AAbilityComponent::AdvanceTimer()
{
	--Cooldown;
	UpdateTimerDisplay();
	if (Cooldown < 1)
	{
		// We're done counting down, so stop running the timer.
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		//Perform any special actions we want to do when the timer ends.
		CountdownHasFinished();
	}
}

void AAbilityComponent::CountdownHasFinished_Implementation()
{
	//Change to a special readout
	CountdownText->SetText(TEXT("DELETE ME!"));
}






