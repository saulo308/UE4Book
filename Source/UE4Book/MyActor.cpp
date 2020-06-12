// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "UserProfile.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

    UUserProfile* Object = NewObject<UUserProfile>(
        GetTransientPackage(),
        UserProfileClass
        );
		
    UE_LOG(LogTemp,Warning,TEXT("hello"));
    UE_LOG(LogTemp,Warning,TEXT("%f"),Object->armor);
    Object->ConditionalBeginDestroy();
    if(!Object)
        UE_LOG(LogTemp,Warning,TEXT("Object destroyed!"));
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

