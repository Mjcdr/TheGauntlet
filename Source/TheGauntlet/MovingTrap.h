#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingTrap.generated.h"

UCLASS()
class THEGAUNTLET_API AMovingTrap : public AActor
{
    GENERATED_BODY()

public:
    AMovingTrap();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    FVector StartLocation;

    UPROPERTY(EditAnywhere)
    float Amplitude;

    UPROPERTY(EditAnywhere)
    float Frequency;
};