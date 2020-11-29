// Copyrights Simon Buyck 2020

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THETRAVELERSJOURNEY_API UHealthComponent : public UActorComponent
{
	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
		TSubclassOf<AActor> Ability;

	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float DefaultHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float Health;

	AActor* Owner = GetOwner();

	UFUNCTION()
		void TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* instigatedBy, AActor* DamageCauser);
};
