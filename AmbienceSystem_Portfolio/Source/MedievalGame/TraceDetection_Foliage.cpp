// Licensed for use with Unreal Engine products only


#include "TraceDetection_Foliage.h"
#include "Kismet/KismetSystemLibrary.h"
#include "HISM_Foliage.h"

// Sets default values for this component's properties
UTraceDetection_Foliage::UTraceDetection_Foliage()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UTraceDetection_Foliage::FoliageDetection()
{
	AActor* OwningActor = GetOwner();
	ActorLocation = OwningActor->GetActorLocation();
	
	TreeArray.Reset();
	BushArray.Reset();

	FVector TraceEndPoint = OwningActor->GetActorLocation() - FVector(0.0f, 0.0f, TraceEnd);
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(OwningActor);
	TArray<FHitResult> HitArray;


	bool TraceHit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), ActorLocation, TraceEndPoint, TraceRadius,
		UEngineTypes::ConvertToTraceType(ECC_Visibility), false, ActorsToIgnore, EDrawDebugTrace::None, HitArray, false);

	if (TraceHit)
	{
		for (const FHitResult& HitResult : HitArray)
		{
			UPrimitiveComponent* HitComponent = HitResult.GetComponent();
			if (!HitComponent)
			{
				continue;
			}
			UHISM_Foliage* HISM = Cast<UHISM_Foliage>(HitComponent);
			if (!HISM)
			{
				continue;
			}

			FGameplayTag CompTag = HISM->MeshTags;

			if (CompTag.MatchesTagExact(TreeTag))
			{
				TreeArray.Add({ HitComponent, HitResult.ImpactPoint });
			}
			else if (CompTag.MatchesTagExact(BushTag))
			{
				BushArray.Add({ HitComponent, HitResult.ImpactPoint });
			}
			else
			{

			}
		}
			
		
	}
}


// Called when the game starts
void UTraceDetection_Foliage::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTraceDetection_Foliage::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

