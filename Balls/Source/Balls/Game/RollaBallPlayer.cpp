// Fill out your copyright notice in the Description page of Project Settings.


#include "Balls/Game/RollaBallPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/Engine.h"

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


	//Set physics to be True
	Mesh->SetSimulatePhysics(true);


	Mesh->OnComponentHit.AddDynamic(this, &ARollaBallPlayer::OnHit);
}

// Called when the game starts or when spawned
void ARollaBallPlayer::BeginPlay()
{
	Super::BeginPlay();


	//Account for mass in MoveForce
	MoveForce *= Mesh->GetMass();
	JumpImpulse *= Mesh->GetMass();


	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("BeginPlay")));
	//}
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

	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("SetupPlayerInputComponent")));
	//}

	//Custom Input Axis Bindings
	InputComponent->BindAxis("MoveForward", this, &ARollaBallPlayer::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ARollaBallPlayer::MoveRight);

	//Custom Action Binding
	InputComponent->BindAction("Jump", IE_Pressed, this, &ARollaBallPlayer::Jump);

}

void ARollaBallPlayer::MoveRight(float Value)
{
	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("MoveRight Value: %f"), Value));
	}*/
	//Get the Right Vector of the Camera as it doesnt rotate and move the player in this direction
	//based on the input and MoveForce
	const FVector Right = Camera->GetRightVector() * MoveForce * Value;

	//Apply Right/Left force on the Mesh
	Mesh->AddForce(Right);
}

void ARollaBallPlayer::MoveForward(float Value)
{
	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("MoveForward Value: %f"), Value));
	}*/

	//Get the Forward Vector of the Camera 
	const FVector Forward = Camera->GetForwardVector() * MoveForce * Value;

	//Apply Forward/Backward force on the Mesh
	Mesh->AddForce(Forward);
}


void ARollaBallPlayer::Jump()
{
	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Jump Pressed"));
	}*/

	//Cap the number of jumps we can make
	if (JumpCount >= MaxJumpCount){ return; }

	//Apply an implulse to the Mesh in the Z-Axis
	Mesh->AddImpulse(FVector(0, 0, JumpImpulse));

	JumpCount++;
}

void ARollaBallPlayer::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	FVector NormalImpulse, const FHitResult& Hit)
{
	//Get Direction we hit the surface on the Z-axis
	float HitDirection = Hit.Normal.Z;

	//If its more than 0 then we've hit something below us, 1 is flat, anything between is a slope
	if (HitDirection > 0) {
		//Reset the jumpcount
		JumpCount = 0;
	}
}
