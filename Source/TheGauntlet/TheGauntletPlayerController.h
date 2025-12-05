#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TheGauntletPlayerController.generated.h"

UCLASS()
class THEGAUNTLET_API ATheGauntletPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    virtual void SetupInputComponent() override;

    UFUNCTION(BlueprintCallable)
    void ShowCursor(bool bShow);
};