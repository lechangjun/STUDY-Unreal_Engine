// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_test.generated.h"

UCLASS() // 마찬가지로 있어야 언리얼 구동가능함 리플래션 리플리케이션 
class U05_CPP_API AC_test : public AActor
{
   //  GENERATED_BODY 있어야됨 그래야 언리얼에서 구동할 수 있음 
   GENERATED_BODY()
   
public:   
   // Sets default values for this actor's properties
   AC_test();

protected:
   // Called when the game starts or when spawned
   virtual void BeginPlay() override;

public:   
   // Called every frame
   virtual void Tick(float DeltaTime) override; // 업데이트 같은거  다이렉트에서 (void 업데이트) 와 같은거

private:
   UPROPERTY(EditAnywhere)
   int Test;
};