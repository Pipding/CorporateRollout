// Copyright Epic Games, Inc. All Rights Reserved.

#include "CorporateRolloutGameMode.h"
#include "CorporateRolloutCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACorporateRolloutGameMode::ACorporateRolloutGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
