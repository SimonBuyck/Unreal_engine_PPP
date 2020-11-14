// Copyrights Simon Buyck 2020


#include "CooldownComponent.h"

// Sets default values for this component's properties
UCooldownComponent::UCooldownComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCooldownComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();
	if (Owner) {
		Owner->BeingCasted.AddDynamic(this, &UCooldownComponent::StartCooldown);
	}
	
}

void UCooldownComponent::StartCooldown() {

}

