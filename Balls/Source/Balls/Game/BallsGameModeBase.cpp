// Fill out your copyright notice in the Description page of Project Settings.


#include "BallsGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Balls/Items/RollaBallItemBase.h"
#include "Blueprint/UserWidget.h"
#include "RollaBallWidget.h"

void ABallsGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    //Array of Type T , here array of type Actor
    TArray<AActor*> Items;

    //Get all Actors in the World of type RollaBallItemBase and store them in Items array
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARollaBallItemBase::StaticClass(), Items);

    //Get count of total RollaBallItemBase in level
    ItemsInLevel = Items.Num();


    if (GameWidgetClass) {
        GameWidget = Cast<URollaBallWidget>(CreateWidget(GetWorld(), GameWidgetClass));

        if (GameWidget) {
            GameWidget->AddToViewport();
            UpdateItemtext();

        }
    }
}

void ABallsGameModeBase::UpdateItemtext()
{
    GameWidget->SetItemText(ItemsCollected, ItemsInLevel);
}

void ABallsGameModeBase::ItemCollected()
{
    //increment the items collected count
    ItemsCollected++;

    UpdateItemtext();

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Item Collected")));
    }
}
