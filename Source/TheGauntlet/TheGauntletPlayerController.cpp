#include "TheGauntletPlayerController.h"
#include "Blueprint/UserWidget.h"

void ATheGauntletPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    // Bind UI input here if needed
}

void ATheGauntletPlayerController::ShowCursor(bool bShow)
{
    bShowMouseCursor = bShow;
    SetInputMode(bShow ? FInputModeUIOnly() : FInputModeGameOnly());
}