// Licensed for use with Unreal Engine products only

#pragma once

#include "CoreMinimal.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "HISM_Foliage.generated.h" 

/**
 * 
 */


UCLASS()
class MEDIEVALGAME_API UHISM_Foliage : public UFoliageInstancedStaticMeshComponent
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tagging")
	FGameplayTag MeshTags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tagging")
	TMap<TSoftObjectPtr<UStaticMesh>, FGameplayTag> MapVariable;

	void BuildMap(); 
};
