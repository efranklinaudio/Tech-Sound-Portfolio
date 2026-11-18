// Licensed for use with Unreal Engine products only


#include "HISM_Foliage.h"

void UHISM_Foliage::BuildMap()
{
}

void UHISM_Foliage::BeginPlay()
{
	Super::BeginPlay();

	UStaticMesh* CurrentMesh = GetStaticMesh();
	if (!CurrentMesh) { return; }

	TSoftObjectPtr<UStaticMesh> SoftRefMesh(CurrentMesh);

	FGameplayTag* FoundTag = MapVariable.Find(SoftRefMesh);
	if (FoundTag)
	{
		MeshTags = *FoundTag;
	}
}