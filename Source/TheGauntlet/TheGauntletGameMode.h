#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TheGauntletGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLevelCompleteDelegate);

UCLASS()
class THEGAUNTLET_API ATheGauntletGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ATheGauntletGameMode();

    UPROPERTY(BlueprintAssignable)
    FLevelCompleteDelegate OnLevelComplete;

    UFUNCTION(BlueprintCallable)
    void CompleteLevel();

protected:
    virtual void BeginPlay() override;
};