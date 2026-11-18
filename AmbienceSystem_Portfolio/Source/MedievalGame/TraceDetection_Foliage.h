// Licensed for use with Unreal Engine products only

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "TraceDetection_Foliage.generated.h"

USTRUCT(BlueprintType)
struct FFoliageInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	UPrimitiveComponent* Component = nullptr;

	UPROPERTY(BlueprintReadOnly)
	FVector HitLocation = FVector::ZeroVector;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MEDIEVALGAME_API UTraceDetection_Foliage : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTraceDetection_Foliage();


	UFUNCTION(BlueprintCallable, Category = "HISM Trace")
	void FoliageDetection();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arrays")
	TArray<FFoliageInfo> TreeArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arrays")
	TArray<FFoliageInfo> BushArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trace")
	float TraceRadius = 800.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trace")
	float TraceEnd = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trace")
	FGameplayTag TreeTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trace")
	FGameplayTag BushTag;

	UPROPERTY()
	FVector ActorLocation;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
