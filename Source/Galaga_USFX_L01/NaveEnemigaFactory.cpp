// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaFactory.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
// Sets default values
/*ANaveEnemigaFactory::ANaveEnemigaFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}*/

ANaveEnemiga* ANaveEnemigaFactory::CrearNaveEnemiga(FString tipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
    /*if (tipoNave == "Caza")
    {
        ANaveEnemigaCaza* nave = NewObject<ANaveEnemigaCaza>();
        if (nave)
        {
            nave->SetMinSpeed(MinSpeed);
            nave->SetMaxSpeed(MaxSpeed);
            nave->SetLimiteInferiorX(LimiteInferiorX);
        }
        return nave;
    }
    else if (tipoNave == "Transporte")
    {
        ANaveEnemigaTransporte* nave = NewObject<ANaveEnemigaTransporte>();
        if (nave)
        {
            nave->SetMinSpeed(MinSpeed);
            nave->SetMaxSpeed(MaxSpeed);
            nave->SetLimiteInferiorX(LimiteInferiorX);
        }
        return nave;
    }
    return nullptr;*/
    if (!World)
    {
        return nullptr;
    }
    FVector SpawnLocationAdjusted = SpawnLocation;
    if (tipoNave == "Caza")
    {
        ANaveEnemigaCaza* NuevaNave = World->SpawnActor<ANaveEnemigaCaza>(SpawnLocationAdjusted, SpawnRotation);
        return NuevaNave;
    }
    else if (tipoNave == "Transporte")
    {
        ANaveEnemigaTransporte* NuevaNave = World->SpawnActor<ANaveEnemigaTransporte>(SpawnLocationAdjusted, SpawnRotation);
        return NuevaNave;
    }
   /* if (!World)
    {
        return nullptr;
    }

    if (tipoNave == "Caza")
    {
        ANaveEnemigaCaza* NuevaNave = World->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);
        return NuevaNave;
    }
    else if (tipoNave == "Transporte")
    {
        ANaveEnemigaTransporte* NuevaNave = World->SpawnActor<ANaveEnemigaTransporte>(SpawnLocation, SpawnRotation);
        return NuevaNave;
    }*/

    return nullptr;
}

// Called when the game starts or when spawned
void ANaveEnemigaFactory::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ANaveEnemigaFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

