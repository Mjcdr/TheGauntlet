#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "TimerSwitch.generated.h"

UCLASS()
class THEGAUNTLET_API ATimerSwitch : public AActor, public IInteractableInterface
{
    GENERATED_BODY()

public:
    ATimerSwitch();

    virtual void Interact_Implementation(AActor* Caller) override;

protected:
    UPROPERTY(EditAnywhere)
    float OpenDuration;

    void OpenPassage();
    void ClosePassage();

    FTimerHandle TimerHandle;
};