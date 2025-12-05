#include "TheGauntletGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UTheGauntletGameInstance::LoadMainMenu()
{
    LoadLevelByName(TEXT("MainMenu"));
}

void UTheGauntletGameInstance::LoadLevel01()
{
    LoadLevelByName(TEXT("Level_01"));
}

void UTheGauntletGameInstance::QuitGame()
{
    UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}

void UTheGauntletGameInstance::LoadLevelByName(const FString& LevelName)
{
    UGameplayStatics::OpenLevel(GetWorld(), *LevelName);
}