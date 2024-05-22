// Fill out your copyright notice in the Description page of Project Settings.


#include "Balls/Game/RollaBallPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
ARollaBallPlayer::ARollaBallPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Create components, Before this step they wont exist on our actor, they've only been defined
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	//Set the root component to be our Mesh
	RootComponent = Mesh;

	//Attach the SpringArm to the Mesh, Spring will now follow the Mesh Transform
	SpringArm->SetupAttachment(Mesh);

	//Attach the Camera to the SpringArm, Camera will now follow the SpringArm trasform 
	Camera->SetupAttachment(SpringArm);

}

// Called when the game starts or when spawned
void ARollaBallPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
//void ARollaBallPlayer::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

// Called to bind functionality to input
void ARollaBallPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARollaBallPlayer::MoveRight(float value)
{
}

void ARollaBallPlayer::MoveLeft(float value)
{
}

void ARollaBallPlayer::Jump()
{
}

