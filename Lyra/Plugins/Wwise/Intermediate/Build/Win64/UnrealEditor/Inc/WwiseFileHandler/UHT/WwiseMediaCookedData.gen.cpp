// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseMediaCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseMediaCookedData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
// End Cross Module References

// Begin ScriptStruct FWwiseMediaCookedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseMediaCookedData;
class UScriptStruct* FWwiseMediaCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseMediaCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("WwiseMediaCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.OuterSingleton;
}
template<> WWISEFILEHANDLER_API UScriptStruct* StaticStruct<FWwiseMediaCookedData>()
{
	return FWwiseMediaCookedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaId_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Short ID for the Media\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Short ID for the Media" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPathName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Path name relative to the platform's root.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Path name relative to the platform's root." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefetchSize_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief How many bytes need to be retrieved at load-time. Only set if streaming.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief How many bytes need to be retrieved at load-time. Only set if streaming." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryAlignment_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Alignment required to load the asset on device. Can be 0 if no particular requirements.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Alignment required to load the asset on device. Can be 0 if no particular requirements." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeviceMemory_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief True if the asset needs to be loaded in a special memory zone on the device.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief True if the asset needs to be loaded in a special memory zone on the device." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief True if the asset should not be fully loaded in memory at load time.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief True if the asset should not be fully loaded in memory at load time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Wwise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseMediaCookedData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Optional debug name. Can be empty in release, contain the name, or the full path of the asset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MediaId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MediaPathName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrefetchSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryAlignment;
	static void NewProp_bDeviceMemory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeviceMemory;
	static void NewProp_bStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreaming;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseMediaCookedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaId = { "MediaId", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, MediaId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaId_MetaData), NewProp_MediaId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaPathName = { "MediaPathName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, MediaPathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPathName_MetaData), NewProp_MediaPathName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_PrefetchSize = { "PrefetchSize", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, PrefetchSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefetchSize_MetaData), NewProp_PrefetchSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MemoryAlignment = { "MemoryAlignment", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, MemoryAlignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryAlignment_MetaData), NewProp_MemoryAlignment_MetaData) };
void Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory_SetBit(void* Obj)
{
	((FWwiseMediaCookedData*)Obj)->bDeviceMemory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory = { "bDeviceMemory", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwiseMediaCookedData), &Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeviceMemory_MetaData), NewProp_bDeviceMemory_MetaData) };
void Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming_SetBit(void* Obj)
{
	((FWwiseMediaCookedData*)Obj)->bStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming = { "bStreaming", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWwiseMediaCookedData), &Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreaming_MetaData), NewProp_bStreaming_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseMediaCookedData, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MediaPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_PrefetchSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_MemoryAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bDeviceMemory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_bStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewProp_DebugName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WwiseFileHandler,
	nullptr,
	&NewStructOps,
	"WwiseMediaCookedData",
	Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::PropPointers),
	sizeof(FWwiseMediaCookedData),
	alignof(FWwiseMediaCookedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WwiseMediaCookedData.InnerSingleton;
}
// End ScriptStruct FWwiseMediaCookedData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWwiseMediaCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseMediaCookedData_Statics::NewStructOps, TEXT("WwiseMediaCookedData"), &Z_Registration_Info_UScriptStruct_WwiseMediaCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseMediaCookedData), 1980696819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_2594412088(TEXT("/Script/WwiseFileHandler"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_WwiseFileHandler_Public_Wwise_CookedData_WwiseMediaCookedData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
