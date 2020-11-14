// Copyrights Simon Buyck 2020

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CooldownComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UCooldownComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCooldownComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "cooldown")
		float DefaultCooldownTimer = 20;

	UPROPERTY(BlueprintReadOnly)
		float CooldownTimer = DefaultCooldownTimer;

	UPROPERTY(BlueprintReadOnly)
		bool CanCast = true;

	UFUNCTION()
		void StartCooldown();
};
