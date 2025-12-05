#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "Door.generated.h"

UCLASS()
class THEGAUNTLET_API ADoor : public AActor, public IInteractableInterface
{
    GENERATED_BODY()

public:
    ADoor();

    virtual void Interact_Implementation(AActor* Caller) override;

protected:
    UPROPERTY(EditAnywhere)
    bool bIsOpen;

    UPROPERTY(EditAnywhere)
    bool bRequiresKey;

    void OpenDoor();
};