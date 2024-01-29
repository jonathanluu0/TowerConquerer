// Copyright Epic Games, Inc. All Rights Reserved.

#include "TowerConquererGameMode.h"
#include "TowerConquererCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATowerConquererGameMode::ATowerConquererGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
