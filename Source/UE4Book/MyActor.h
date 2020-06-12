// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

USTRUCT(BlueprintType)
struct FColoredTexture{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "HUD")
	UTexture* Texture;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "HUD")
	FLinearColor Color;
};

UCLASS()
class UE4BOOK_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	TSubclassOf<class UUserProfile> UserProfileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
	FColoredTexture ColoredTexture;

};
