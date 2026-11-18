// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGeometryComponent.h"
#include "AkAudio/Classes/AkGeometryData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometryComponent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister();
AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMeshType();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Enum AkMeshType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkMeshType;
static UEnum* AkMeshType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AkMeshType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AkMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMeshType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMeshType"));
	}
	return Z_Registration_Info_UEnum_AkMeshType.OuterSingleton;
}
template<> AKAUDIO_API UEnum* StaticEnum<AkMeshType>()
{
	return AkMeshType_StaticEnum();
}
struct Z_Construct_UEnum_AkAudio_AkMeshType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CollisionMesh.DisplayName", "Simple Collision" },
		{ "CollisionMesh.Name", "AkMeshType::CollisionMesh" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "StaticMesh.Name", "AkMeshType::StaticMesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AkMeshType::StaticMesh", (int64)AkMeshType::StaticMesh },
		{ "AkMeshType::CollisionMesh", (int64)AkMeshType::CollisionMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkMeshType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	"AkMeshType",
	"AkMeshType",
	Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AkAudio_AkMeshType()
{
	if (!Z_Registration_Info_UEnum_AkMeshType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkMeshType.InnerSingleton, Z_Construct_UEnum_AkAudio_AkMeshType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AkMeshType.InnerSingleton;
}
// End Enum AkMeshType

// Begin ScriptStruct FAkGeometrySurfaceOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride;
class UScriptStruct* FAkGeometrySurfaceOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometrySurfaceOverride"));
	}
	return Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometrySurfaceOverride>()
{
	return FAkGeometrySurfaceOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Acoustic Texture represents the sound absorption on the surface of the geometry when a sound bounces off of it.\n\x09* If left to None, the mesh's physical material will be used to fetch an acoustic texture.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture represents the sound absorption on the surface of the geometry when a sound bounces off of it.\nIf left to None, the mesh's physical material will be used to fetch an acoustic texture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusionOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable Transmission Loss Override */" },
#endif
		{ "DisplayName", "Enable Transmission Loss Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable Transmission Loss Override" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transmission loss value to set when modeling sound transmission through geometry. Transmission is modeled only when there is no direct line of sight from the emitter to the listener.\n\x09* If there is more than one surface between the emitter and the listener, the maximum of each surface's transmission loss value is used. If the emitter and listener are in different rooms, the room's transmission loss value is taken into account.\n\x09* Valid range : (0.0, 1.0)\n\x09*/" },
#endif
		{ "DisplayName", "Transmission Loss" },
		{ "EditCondition", "bEnableOcclusionOverride" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transmission loss value to set when modeling sound transmission through geometry. Transmission is modeled only when there is no direct line of sight from the emitter to the listener.\nIf there is more than one surface between the emitter and the listener, the maximum of each surface's transmission loss value is used. If the emitter and listener are in different rooms, the room's transmission loss value is taken into account.\nValid range : (0.0, 1.0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
	static void NewProp_bEnableOcclusionOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusionOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfaceOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcousticTexture_MetaData), NewProp_AcousticTexture_MetaData) };
void Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit(void* Obj)
{
	((FAkGeometrySurfaceOverride*)Obj)->bEnableOcclusionOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride = { "bEnableOcclusionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkGeometrySurfaceOverride), &Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOcclusionOverride_MetaData), NewProp_bEnableOcclusionOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, OcclusionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionValue_MetaData), NewProp_OcclusionValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, SurfaceArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceArea_MetaData), NewProp_SurfaceArea_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkGeometrySurfaceOverride",
	Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers),
	sizeof(FAkGeometrySurfaceOverride),
	alignof(FAkGeometrySurfaceOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride()
{
	if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton;
}
// End ScriptStruct FAkGeometrySurfaceOverride

// Begin Class UAkGeometryComponent Function ConvertMesh
struct Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convert the mesh into a local representation suited for Wwise:\n\x09* a set of vertices, triangles, surfaces, acoustic textures and transmission loss values. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert the mesh into a local representation suited for Wwise:\na set of vertices, triangles, surfaces, acoustic textures and transmission loss values." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "ConvertMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execConvertMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertMesh();
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function ConvertMesh

// Begin Class UAkGeometryComponent Function RemoveGeometry
struct Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove the geometry and the corresponding instance from Wwise. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the geometry and the corresponding instance from Wwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "RemoveGeometry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execRemoveGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGeometry();
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function RemoveGeometry

// Begin Class UAkGeometryComponent Function SendGeometry
struct Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update a geometry in Spatial Audio by sending the converted mesh, as well as the rest of the AkGeometryParams to Wwise.\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateGeometry(). */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update a geometry in Spatial Audio by sending the converted mesh, as well as the rest of the AkGeometryParams to Wwise.\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateGeometry()." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "SendGeometry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_SendGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execSendGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendGeometry();
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function SendGeometry

// Begin Class UAkGeometryComponent Function UpdateGeometry
struct Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update an instance of the geometry by sending the transform of this component to Wwise.\n\x09* A geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update an instance of the geometry by sending the transform of this component to Wwise.\nA geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "UpdateGeometry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkGeometryComponent::execUpdateGeometry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGeometry();
	P_NATIVE_END;
}
// End Class UAkGeometryComponent Function UpdateGeometry

// Begin Class UAkGeometryComponent
void UAkGeometryComponent::StaticRegisterNativesUAkGeometryComponent()
{
	UClass* Class = UAkGeometryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertMesh", &UAkGeometryComponent::execConvertMesh },
		{ "RemoveGeometry", &UAkGeometryComponent::execRemoveGeometry },
		{ "SendGeometry", &UAkGeometryComponent::execSendGeometry },
		{ "UpdateGeometry", &UAkGeometryComponent::execUpdateGeometry },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkGeometryComponent);
UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister()
{
	return UAkGeometryComponent::StaticClass();
}
struct Z_Construct_UClass_UAkGeometryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkGeometryComponent.h" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Static Mesh's LOD to use */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Static Mesh's LOD to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The local distance in Unreal units between two vertices to be welded together.\n\x09* Any two vertices closer than this threshold will be treated as the same unique vertex and assigned the same position.\n\x09* Increasing this threshold decreases the number of gaps between triangles, resulting in a more continuous mesh and less sound leaking though, as well as eliminating triangles that are too small to be significant.\n\x09* Increasing this threshold also helps Spatial Audio's edge-finding algorithm to find more valid diffraction edges.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The local distance in Unreal units between two vertices to be welded together.\nAny two vertices closer than this threshold will be treated as the same unique vertex and assigned the same position.\nIncreasing this threshold decreases the number of gaps between triangles, resulting in a more continuous mesh and less sound leaking though, as well as eliminating triangles that are too small to be significant.\nIncreasing this threshold also helps Spatial Audio's edge-finding algorithm to find more valid diffraction edges." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSurfaceOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the acoustic properties of this mesh per material.*/" },
#endif
		{ "DisplayName", "Acoustic Properties Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the acoustic properties of this mesh per material." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshSurfaceOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the acoustic properties of the collision mesh.*/" },
#endif
		{ "DisplayName", "Acoustic Properties Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the acoustic properties of the collision mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process.  */" },
#endif
		{ "EditCondition", "bEnableDiffraction" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedRoom_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** (Deprecated) Associate this Geometry component with a Room.\n\x09* This property is deprecated and will be removed in a future version. We recommend not using it by leaving it set to None.\n\x09* Associating a Geometry component with a particular Room limits the scope in which the geometry is accessible. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\n\x09* When set to None, this geometry has a global scope.\n\x09* Note if one or more geometry sets are associated with a room, that room can no longer access geometry that is in the global scope.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Deprecated) Associate this Geometry component with a Room.\nThis property is deprecated and will be removed in a future version. We recommend not using it by leaving it set to None.\nAssociating a Geometry component with a particular Room limits the scope in which the geometry is accessible. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\nWhen set to None, this geometry has a global scope.\nNote if one or more geometry sets are associated with a room, that room can no longer access geometry that is in the global scope." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceAreas_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshSurfaceOverride_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshSurfaceOverride_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StaticMeshSurfaceOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionMeshSurfaceOverride;
	static void NewProp_bEnableDiffraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
	static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedRoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryData;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceAreas_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SurfaceAreas_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceAreas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh, "ConvertMesh" }, // 2620871713
		{ &Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry, "RemoveGeometry" }, // 3339836888
		{ &Z_Construct_UFunction_UAkGeometryComponent_SendGeometry, "SendGeometry" }, // 2362715583
		{ &Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry, "UpdateGeometry" }, // 2723201454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGeometryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, MeshType), Z_Construct_UEnum_AkAudio_AkMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) }; // 3161239178
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, LOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_MetaData), NewProp_LOD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, WeldingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeldingThreshold_MetaData), NewProp_WeldingThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 1727873215
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp = { "StaticMeshSurfaceOverride_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, StaticMeshSurfaceOverride), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshSurfaceOverride_MetaData), NewProp_StaticMeshSurfaceOverride_MetaData) }; // 1727873215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride = { "CollisionMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, CollisionMeshSurfaceOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMeshSurfaceOverride_MetaData), NewProp_CollisionMeshSurfaceOverride_MetaData) }; // 1727873215
void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
{
	((UAkGeometryComponent*)Obj)->bEnableDiffraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiffraction_MetaData), NewProp_bEnableDiffraction_MetaData) };
void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
{
	((UAkGeometryComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiffractionOnBoundaryEdges_MetaData), NewProp_bEnableDiffractionOnBoundaryEdges_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom = { "AssociatedRoom", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, AssociatedRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedRoom_MetaData), NewProp_AssociatedRoom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData = { "GeometryData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, GeometryData), Z_Construct_UScriptStruct_FAkGeometryData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryData_MetaData), NewProp_GeometryData_MetaData) }; // 1505456838
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_ValueProp = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_Key_KeyProp = { "SurfaceAreas_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, SurfaceAreas), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceAreas_MetaData), NewProp_SurfaceAreas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkGeometryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAcousticTextureSetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams = {
	&UAkGeometryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkGeometryComponent()
{
	if (!Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton, Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkGeometryComponent>()
{
	return UAkGeometryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGeometryComponent);
UAkGeometryComponent::~UAkGeometryComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGeometryComponent)
// End Class UAkGeometryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ AkMeshType_StaticEnum, TEXT("AkMeshType"), &Z_Registration_Info_UEnum_AkMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3161239178U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkGeometrySurfaceOverride::StaticStruct, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewStructOps, TEXT("AkGeometrySurfaceOverride"), &Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometrySurfaceOverride), 1727873215U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkGeometryComponent, UAkGeometryComponent::StaticClass, TEXT("UAkGeometryComponent"), &Z_Registration_Info_UClass_UAkGeometryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGeometryComponent), 1729641640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_4116978881(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
