// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"


AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();

	UWorld* const World = GetWorld();
	if (World)
	{
		for (int i = 0; i < 20; i++)
		{
			FVector Position = FVector(500.0f, -1500.0f + i * 150, 250.0f);
			FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);
			if (FMath::RandBool())
			{
				ANaveEnemigaTransporte* TransportShip = World->SpawnActor<ANaveEnemigaTransporte>(Position, Rotation);
				TANavesEnemigas.Push(TransportShip);
			}
			else
			{
				ANaveEnemigaCaza* FighterShip = World->SpawnActor<ANaveEnemigaCaza>(Position, Rotation);
				TANavesEnemigas.Push(FighterShip);
			}
		}
		// timerhanlde para cambiar la velocidad de las naves cada 5 segundos
		FTimerHandle TimerHandle;
		float ChangeInterval = 4; // Intervalo de cambio en segundos

		GetWorldTimerManager().SetTimer(TimerHandle, this, &AGalaga_USFX_L01GameMode::RandomizeEnemySpeed, ChangeInterval, true);
	}

}

void AGalaga_USFX_L01GameMode::RandomizeEnemySpeed()
{
	for (ANaveEnemiga* Nave : TANavesEnemigas)
	{ 
		float NewSpeed = Nave->GetMaxSpeed();
		Nave->SetVelocidad(NewSpeed); //le actualizo el atributo 
	}
}

void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


