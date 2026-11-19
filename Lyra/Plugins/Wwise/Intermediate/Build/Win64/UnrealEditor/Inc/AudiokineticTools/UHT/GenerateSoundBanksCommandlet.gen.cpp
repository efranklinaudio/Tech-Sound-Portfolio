// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/AssetManagement/GenerateSoundBanksCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateSoundBanksCommandlet() {}

// Begin Cross Module References
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet();
AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References

// Begin Class UGenerateSoundBanksCommandlet
void UGenerateSoundBanksCommandlet::StaticRegisterNativesUGenerateSoundBanksCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateSoundBanksCommandlet);
UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet_NoRegister()
{
	return UGenerateSoundBanksCommandlet::StaticClass();
}
struct Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AssetManagement/GenerateSoundBanksCommandlet.h" },
		{ "ModuleRelativePath", "Classes/AssetManagement/GenerateSoundBanksCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateSoundBanksCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::ClassParams = {
	&UGenerateSoundBanksCommandlet::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenerateSoundBanksCommandlet()
{
	if (!Z_Registration_Info_UClass_UGenerateSoundBanksCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateSoundBanksCommandlet.OuterSingleton, Z_Construct_UClass_UGenerateSoundBanksCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenerateSoundBanksCommandlet.OuterSingleton;
}
template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UGenerateSoundBanksCommandlet>()
{
	return UGenerateSoundBanksCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateSoundBanksCommandlet);
UGenerateSoundBanksCommandlet::~UGenerateSoundBanksCommandlet() {}
// End Class UGenerateSoundBanksCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateSoundBanksCommandlet, UGenerateSoundBanksCommandlet::StaticClass, TEXT("UGenerateSoundBanksCommandlet"), &Z_Registration_Info_UClass_UGenerateSoundBanksCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateSoundBanksCommandlet), 1984295998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_4111702415(TEXT("/Script/AudiokineticTools"),
	Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_GenerateSoundBanksCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
