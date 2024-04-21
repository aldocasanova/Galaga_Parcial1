// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"

#include "GameFramework/Actor.h"
#include "NaveEnemigaFactory.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaFactory : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	//ANaveEnemigaFactory();
	//UFUNCTION(BlueprintCallable, Category = "NaveEnemigaFactory")
	//static ANaveEnemiga* CrearNaveEnemiga(FString tipoNave, float MinSpeed, float MaxSpeed, float LimiteInferiorX);
	UFUNCTION(BlueprintCallable, Category = "NaveEnemigaFactory")
	static ANaveEnemiga* CrearNaveEnemiga(FString tipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

