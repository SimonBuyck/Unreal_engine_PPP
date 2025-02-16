// Copyrights Simon Buyck 2020


#include "MyCharacter.h"
#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	DefaultHealth = 100;
	Health = DefaultHealth;
}

// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	if (Owner) {
		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
	}
	
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* instigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0) {
		return;
	}

	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);

	
}


