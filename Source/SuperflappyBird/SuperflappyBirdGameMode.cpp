// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SuperflappyBird.h"
#include "SuperflappyBirdGameMode.h"
#include "SuperflappyBirdCharacter.h"

ASuperflappyBirdGameMode::ASuperflappyBirdGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
