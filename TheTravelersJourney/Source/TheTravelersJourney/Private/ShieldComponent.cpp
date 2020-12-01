// Fill out your copyright notice in the Description page of Project Settings.


#include "ShieldComponent.h"

// Sets default values for this component's properties
UShieldComponent::UShieldComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	DefaultShield = 100;
	Shield = DefaultShield;
}


// Called when the game starts
void UShieldComponent::BeginPlay()
{
	Super::BeginPlay();

	if (Owner) {
		Owner->OnTakeAnyDamage.AddDynamic(this, &UShieldComponent::TakeDamage);
	}
}

void UShieldComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* instigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0) {
		return;
	}

	Shield = FMath::Clamp(Shield - Damage, 0.0f, DefaultShield);
}


