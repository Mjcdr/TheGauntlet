#include "TheGauntletGameMode.h"
#include "TimerManager.h"
#include "TheGauntletGameInstance.h"

ATheGauntletGameMode::ATheGauntletGameMode()
{
}

void ATheGauntletGameMode::BeginPlay()
{
    Super::BeginPlay();
}

void ATheGauntletGameMode::CompleteLevel()
{
    OnLevelComplete.Broadcast();

    // Delay 4 seconds then load main menu
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, [this]()
        {
            if (auto GI = Cast<UTheGauntletGameInstance>(GetGameInstance()))
            {
                GI->LoadMainMenu();
            }
        }, 4.0f, false);
}