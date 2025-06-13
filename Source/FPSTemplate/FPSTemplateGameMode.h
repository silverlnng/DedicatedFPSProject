// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSTemplateGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AFPSTemplateGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AFPSTemplateGameMode();
};



