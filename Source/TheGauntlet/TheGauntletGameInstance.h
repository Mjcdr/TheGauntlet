#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TheGauntletGameInstance.generated.h"

UCLASS()
class THEGAUNTLET_API UTheGauntletGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    void LoadMainMenu();

    UFUNCTION(BlueprintCallable)
    void LoadLevel01();

    UFUNCTION(BlueprintCallable)
    void QuitGame();

private:
    void LoadLevelByName(const FString& LevelName);
};