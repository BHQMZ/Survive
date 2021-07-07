// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CubeActor.generated.h"

UCLASS()
class SURVIVE_API ACubeActor : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VisualMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CubeActor")
	float FloatSpeed = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CubeActor")
	float RotationSpeed = 20.0f;

public:	
	// Sets default values for this actor's properties
	ACubeActor();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitProperties() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
