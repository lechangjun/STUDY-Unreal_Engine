// Fill out your copyright notice in the Description page of Project Settings.
/*
 C ++ Unreal 공부
 
 */
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_test.generated.h"

UCLASS() // Replication C++ && 리플래션 동적(테스트를 수행할 수 있는 프로그램) -> 클래스 템플릿
class U05_CPP_API AC_test : public AActor
{
   //  GENERATED_BODY 클래스 지정자 -> 처음에 있어야됨 그래야 언리얼에서 구동할 수 있음
   GENERATED_BODY()
   
public:   
   // Sets default values for this actor's properties
   AC_test();

protected:
   // Called when the game starts or when spawned
   virtual void BeginPlay() override;

/*
     다이렉트X 에서 Scene.cpp -> 프레임
     Scene.cpp
     1. 초기화 2. 소멸자 3. 프레임 돌고 4.정규화
     
     void Update()
     { statement( 구문 ) }
     
*/
    
public:   
   // Called every frame
   virtual void Tick(float DeltaTime) override;

private:
   UPROPERTY(EditAnywhere)
   int Test;
};
