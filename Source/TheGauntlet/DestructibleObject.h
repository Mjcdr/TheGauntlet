#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "DestructibleObject.generated.h"

UCLASS()
class THEGAUNTLET_API ADestructibleObject : public AActor, public IInteractableInterface
{
    GENERATED_BODY()

public:
    ADestructibleObject();

    virtual void Interact_Implementation(AActor* Caller) override;

    void TakeDamage(float DamageAmount);

protected:
    UPROPERTY(EditAnywhere)
    float Health;
};