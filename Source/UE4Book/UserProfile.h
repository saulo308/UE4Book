// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserProfile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UE4BOOK_API UUserProfile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float armor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float HpMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	TSubclassOf<UObject> UPlayerClass;
	UPROPERTY(EditAnywhere, meta = (MetaClass = "GameMode"), Category = "Setup")
	FStringClassReference UPlayerClassString;
};
