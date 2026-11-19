// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseTreeSelector() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTreeSelector();
AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTreeSelector_NoRegister();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UAkWwiseTreeSelector
void UAkWwiseTreeSelector::StaticRegisterNativesUAkWwiseTreeSelector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWwiseTreeSelector);
UClass* Z_Construct_UClass_UAkWwiseTreeSelector_NoRegister()
{
	return UAkWwiseTreeSelector::StaticClass();
}
struct Z_Construct_UClass_UAkWwiseTreeSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A widget that shows the Wwise tree items.\n*/" },
#endif
		{ "IncludePath", "AkWaapiUMG/Components/AkWwiseTreeSelector.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A widget that shows the Wwise tree items." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Widget Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the item selection changes. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the item selection changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemDragged_MetaData[] = {
		{ "Category", "Widget Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when an item is dragged from the wwise tree. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an item is dragged from the wwise tree." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDragged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWwiseTreeSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWwiseTreeSelector, OnSelectionChanged), Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData), NewProp_OnSelectionChanged_MetaData) }; // 587954356
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnItemDragged = { "OnItemDragged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkWwiseTreeSelector, OnItemDragged), Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemDragged_MetaData), NewProp_OnItemDragged_MetaData) }; // 1766376241
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkWwiseTreeSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnSelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnItemDragged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkWwiseTreeSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWwiseTreeSelector_Statics::ClassParams = {
	&UAkWwiseTreeSelector::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAkWwiseTreeSelector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::PropPointers),
	0,
	0x00B000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkWwiseTreeSelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkWwiseTreeSelector()
{
	if (!Z_Registration_Info_UClass_UAkWwiseTreeSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWwiseTreeSelector.OuterSingleton, Z_Construct_UClass_UAkWwiseTreeSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkWwiseTreeSelector.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkWwiseTreeSelector>()
{
	return UAkWwiseTreeSelector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWwiseTreeSelector);
UAkWwiseTreeSelector::~UAkWwiseTreeSelector() {}
// End Class UAkWwiseTreeSelector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTreeSelector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkWwiseTreeSelector, UAkWwiseTreeSelector::StaticClass, TEXT("UAkWwiseTreeSelector"), &Z_Registration_Info_UClass_UAkWwiseTreeSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWwiseTreeSelector), 2784993993U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTreeSelector_h_3482318589(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTreeSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkWwiseTreeSelector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
