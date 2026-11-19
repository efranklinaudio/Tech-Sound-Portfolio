// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSubmixInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSubmixInputComponent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSubmixInputComponent();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSubmixInputComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkSubmixInputComponent
void UAkSubmixInputComponent::StaticRegisterNativesUAkSubmixInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSubmixInputComponent);
UClass* Z_Construct_UClass_UAkSubmixInputComponent_NoRegister()
{
	return UAkSubmixInputComponent::StaticClass();
}
struct Z_Construct_UClass_UAkSubmixInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\nUAkSubmixInputComponent\n------------------------------------------------------------------------------------*/" },
#endif
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkSubmixInputComponent.h" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAkSubmixInputComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixToRecord_MetaData[] = {
		{ "Category", "SubmixInput" },
		{ "ModuleRelativePath", "Classes/AkSubmixInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSubmixInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSubmixInputComponent, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixToRecord_MetaData), NewProp_SubmixToRecord_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSubmixInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSubmixInputComponent_Statics::NewProp_SubmixToRecord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSubmixInputComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkSubmixInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAkAudioInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSubmixInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSubmixInputComponent_Statics::ClassParams = {
	&UAkSubmixInputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkSubmixInputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkSubmixInputComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSubmixInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkSubmixInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkSubmixInputComponent()
{
	if (!Z_Registration_Info_UClass_UAkSubmixInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSubmixInputComponent.OuterSingleton, Z_Construct_UClass_UAkSubmixInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkSubmixInputComponent.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkSubmixInputComponent>()
{
	return UAkSubmixInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSubmixInputComponent);
UAkSubmixInputComponent::~UAkSubmixInputComponent() {}
// End Class UAkSubmixInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkSubmixInputComponent, UAkSubmixInputComponent::StaticClass, TEXT("UAkSubmixInputComponent"), &Z_Registration_Info_UClass_UAkSubmixInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSubmixInputComponent), 1024529522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_481393947(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkSubmixInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
