// Fill out your copyright notice in the Description page of Project Settings.


#include "LTX_BP_FunctionLibrary.h"

FString ULTX_BP_FunctionLibrary::GetProjectVersion()
{
	FString ProjectVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		ProjectVersion,
		GGameIni
	);
	return ProjectVersion;
}