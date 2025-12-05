#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TheGauntletCharacter.generated.h"

UCLASS()
class THEGAUNTLET_API ATheGauntletCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ATheGauntletCharacter();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    int32 Keys;

    UFUNCTION(BlueprintCallable)
    void Interact();

protected:
    virtual void BeginPlay() override;

private:
    void TraceForInteractable();
};