// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MYPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:
    UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Damage")
    int32 TotalDamage;
    
    UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Damage")
    float DamageTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Transient, Category="Damage")
    float DamagePerSecond;
    
    UFUNCTION(BlueprintCallable, Category="Damage")
    void CalculateValues();
    
	AMyActor();
    
    virtual void Tick(float DeltaTime) override;
    virtual void PostInitProperties() override;
    virtual void PropertyChangedEvent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
};
