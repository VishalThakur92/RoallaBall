// Fill out your copyright notice in the Description page of Project Settings.


#include "BallsGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Balls/Items/RollaBallItemBase.h"

void ABallsGameModeBase::BeginPlay()
{
    //Array of Type T , here array of type Actor
    TArray<AActor*> Items;

    //Get all Actors in the World of type RollaBallItemBase and store them in Items array
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARollaBallItemBase::StaticClass(), Items);

    //Get count of total RollaBallItemBase in level
    ItemsInLevel = Items.Num();
}

void ABallsGameModeBase::UpdateItemtext()
{
}

void ABallsGameModeBase::ItemCollected()
{
    //increment the items collected count
    ItemsCollected++;
}
