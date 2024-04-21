// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaFactory.h"


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

	/*UWorld* const World = GetWorld();
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
	}*/
	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	// Configura las coordenadas de spawn para cada tipo de nave
	FVector SpawnLocationCaza = FVector(500.0f, -1500.0f, 250.0f); // Ejemplo: spawn en el aire a 1000 unidades de altura
	FVector SpawnLocationTransporte = FVector(500.0f, -1600.0f, 250.0f); // Ejemplo: spawn a la derecha del centro a 1000 unidades de altura

	// Usa la fábrica para crear las naves enemigas con diferentes ubicaciones de spawn
	ANaveEnemiga* NuevaNaveCaza = ANaveEnemigaFactory::CrearNaveEnemiga("Caza", World, SpawnLocationCaza, FRotator::ZeroRotator);
	ANaveEnemiga* NuevaNaveTransporte =	ANaveEnemigaFactory::CrearNaveEnemiga("Transporte", World, SpawnLocationTransporte, FRotator::ZeroRotator);
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


