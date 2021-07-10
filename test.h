// Fill out your copyright notice in the Description page of Project Settings.
// 언리얼 플러그인 제작도 가능 

#include "C_test.h"
#include "Engine.h"

// Sets default values
AC_test::AC_test()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_test::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, "Test");

}

// Called every frame
void AC_test::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
