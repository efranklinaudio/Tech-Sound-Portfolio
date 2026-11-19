// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/InitializationSettings/AkPlatformInitialisationSettingsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPlatformInitialisationSettingsBase() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase();
AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Interface UAkPlatformInitialisationSettingsBase
void UAkPlatformInitialisationSettingsBase::StaticRegisterNativesUAkPlatformInitialisationSettingsBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkPlatformInitialisationSettingsBase);
UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister()
{
	return UAkPlatformInitialisationSettingsBase::StaticClass();
}
struct Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkPlatformInitialisationSettingsBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAkPlatformInitialisationSettingsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::ClassParams = {
	&UAkPlatformInitialisationSettingsBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase()
{
	if (!Z_Registration_Info_UClass_UAkPlatformInitialisationSettingsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkPlatformInitialisationSettingsBase.OuterSingleton, Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkPlatformInitialisationSettingsBase.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkPlatformInitialisationSettingsBase>()
{
	return UAkPlatformInitialisationSettingsBase::StaticClass();
}
UAkPlatformInitialisationSettingsBase::UAkPlatformInitialisationSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPlatformInitialisationSettingsBase);
UAkPlatformInitialisationSettingsBase::~UAkPlatformInitialisationSettingsBase() {}
// End Interface UAkPlatformInitialisationSettingsBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitialisationSettingsBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkPlatformInitialisationSettingsBase, UAkPlatformInitialisationSettingsBase::StaticClass, TEXT("UAkPlatformInitialisationSettingsBase"), &Z_Registration_Info_UClass_UAkPlatformInitialisationSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkPlatformInitialisationSettingsBase), 1173514589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitialisationSettingsBase_h_2185572982(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitialisationSettingsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkPlatformInitialisationSettingsBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
