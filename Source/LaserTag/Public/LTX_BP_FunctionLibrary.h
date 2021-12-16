// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LTX_BP_FunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LASERTAG_API ULTX_BP_FunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	//Returns the project version
	UFUNCTION(BlueprintPure, Category = "Project")
	static FString GetProjectVersion();

};
