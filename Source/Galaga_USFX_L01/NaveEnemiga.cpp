// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	// Create the mesh component
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	//mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;

	velocidad = 0.25; //velocidad media de la nave

	MinSpeed = 0.35; //desacelerar
	MaxSpeed = 200; //acelerar

	LimiteInferiorX = -900.0f;


}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}







