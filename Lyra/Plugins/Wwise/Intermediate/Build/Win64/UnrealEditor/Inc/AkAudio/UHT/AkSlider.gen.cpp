// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiUMG/Components/AkSlider.h"
#include "AkAudio/Classes/AkWaapiUMG/Components/AkItemProperties.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSlider() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkSlider();
AKAUDIO_API UClass* Z_Construct_UClass_UAkSlider_NoRegister();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Delegate FAkOnFloatValueChangedEvent
struct Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics
{
	struct _Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A delegate type invoked when the value of the slider changes. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A delegate type invoked when the value of the slider changes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "AkOnFloatValueChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAkOnFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& AkOnFloatValueChangedEvent, float Value)
{
	struct _Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms
	{
		float Value;
	};
	_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms Parms;
	Parms.Value=Value;
	AkOnFloatValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAkOnFloatValueChangedEvent

// Begin Delegate FOnItemDropDetected
struct Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics
{
	struct _Script_AkAudio_eventOnItemDropDetected_Parms
	{
		FGuid ItemDroppedID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A delegate type invoked when an item is being dragged. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A delegate type invoked when an item is being dragged." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDroppedID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::NewProp_ItemDroppedID = { "ItemDroppedID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnItemDropDetected_Parms, ItemDroppedID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::NewProp_ItemDroppedID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemDropDetected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnItemDropDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnItemDropDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemDropDetected, FGuid ItemDroppedID)
{
	struct _Script_AkAudio_eventOnItemDropDetected_Parms
	{
		FGuid ItemDroppedID;
	};
	_Script_AkAudio_eventOnItemDropDetected_Parms Parms;
	Parms.ItemDroppedID=ItemDroppedID;
	OnItemDropDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemDropDetected

// Begin Delegate FOnPropertyDropDetected
struct Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics
{
	struct _Script_AkAudio_eventOnPropertyDropDetected_Parms
	{
		FString PropertyDropped;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A delegate type invoked when a property is being dragged. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A delegate type invoked when a property is being dragged." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyDropped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::NewProp_PropertyDropped = { "PropertyDropped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnPropertyDropDetected_Parms, PropertyDropped), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::NewProp_PropertyDropped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnPropertyDropDetected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnPropertyDropDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnPropertyDropDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPropertyDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnPropertyDropDetected, const FString& PropertyDropped)
{
	struct _Script_AkAudio_eventOnPropertyDropDetected_Parms
	{
		FString PropertyDropped;
	};
	_Script_AkAudio_eventOnPropertyDropDetected_Parms Parms;
	Parms.PropertyDropped=PropertyDropped;
	OnPropertyDropDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPropertyDropDetected

// Begin ScriptStruct FAkWwiseObjectDetails
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails;
class UScriptStruct* FAkWwiseObjectDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseObjectDetails, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseObjectDetails"));
	}
	return Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWwiseObjectDetails>()
{
	return FAkWwiseObjectDetails::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Structure for Wwise item details.\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure for Wwise item details." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemName" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The name of the item to control\n\x09*/" },
#endif
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the item to control" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[] = {
		{ "Category", "ItemPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The id of the item to control\n\x09*/" },
#endif
		{ "DisplayName", "Path" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the item to control" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "ItemId" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The id of the item to control\n\x09*/" },
#endif
		{ "DisplayName", "Id" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the item to control" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWwiseObjectDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPath_MetaData), NewProp_ItemPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkWwiseObjectDetails, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewProp_ItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkWwiseObjectDetails",
	Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::PropPointers),
	sizeof(FAkWwiseObjectDetails),
	alignof(FAkWwiseObjectDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails()
{
	if (!Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.InnerSingleton, Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails.InnerSingleton;
}
// End ScriptStruct FAkWwiseObjectDetails

// Begin ScriptStruct FAkWwiseItemToControl
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWwiseItemToControl;
class UScriptStruct* FAkWwiseItemToControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseItemToControl, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseItemToControl"));
	}
	return Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWwiseItemToControl>()
{
	return FAkWwiseItemToControl::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Structure for Wwise items that are displayed in the UMG.\n*///: public UObject\n" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure for Wwise items that are displayed in the UMG.\n//: public UObject" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPicked_MetaData[] = {
		{ "Category", "ItemPicked" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The item to control\n\x09*/" },
#endif
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The item to control" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[] = {
		{ "Category", "ItemPath" },
		{ "DisplayName", "Path" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemPicked;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWwiseItemToControl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked = { "ItemPicked", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkWwiseItemToControl, ItemPicked), Z_Construct_UScriptStruct_FAkWwiseObjectDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPicked_MetaData), NewProp_ItemPicked_MetaData) }; // 4118391284
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkWwiseItemToControl, ItemPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPath_MetaData), NewProp_ItemPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkWwiseItemToControl",
	Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers),
	sizeof(FAkWwiseItemToControl),
	alignof(FAkWwiseItemToControl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl()
{
	if (!Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.InnerSingleton, Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkWwiseItemToControl.InnerSingleton;
}
// End ScriptStruct FAkWwiseItemToControl

// Begin Class UAkSlider Function GetAkSliderItemId
struct Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics
{
	struct AkSlider_eventGetAkSliderItemId_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current item id.\n\x09*\n\x09*  @return an id as GUID.\n\x09*/" },
#endif
		{ "Keywords", "Get Item Id" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current item id.\n\n@return an id as GUID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSlider_eventGetAkSliderItemId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "GetAkSliderItemId", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::AkSlider_eventGetAkSliderItemId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::AkSlider_eventGetAkSliderItemId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execGetAkSliderItemId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetAkSliderItemId();
	P_NATIVE_END;
}
// End Class UAkSlider Function GetAkSliderItemId

// Begin Class UAkSlider Function GetAkSliderItemProperty
struct Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics
{
	struct AkSlider_eventGetAkSliderItemProperty_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current item property.\n\x09*\n\x09*  @return a property as string.\n\x09*/" },
#endif
		{ "Keywords", "Get Item Property" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current item property.\n\n@return a property as string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSlider_eventGetAkSliderItemProperty_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "GetAkSliderItemProperty", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::AkSlider_eventGetAkSliderItemProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::AkSlider_eventGetAkSliderItemProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execGetAkSliderItemProperty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAkSliderItemProperty();
	P_NATIVE_END;
}
// End Class UAkSlider Function GetAkSliderItemProperty

// Begin Class UAkSlider Function GetValue
struct Z_Construct_UFunction_UAkSlider_GetValue_Statics
{
	struct AkSlider_eventGetValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current value of the slider. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current value of the slider." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkSlider_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSlider_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_GetValue_Statics::AkSlider_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_GetValue_Statics::AkSlider_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UAkSlider Function GetValue

// Begin Class UAkSlider Function SetAkSliderItemId
struct Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics
{
	struct AkSlider_eventSetAkSliderItemId_Parms
	{
		FGuid ItemId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the item id to the new one.\n\x09*  @param ItemId - value (new id) to set\n\x09*/" },
#endif
		{ "Keywords", "Set Item Id" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the item id to the new one.\n@param ItemId - value (new id) to set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSlider_eventSetAkSliderItemId_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetAkSliderItemId", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::AkSlider_eventSetAkSliderItemId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::AkSlider_eventSetAkSliderItemId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execSetAkSliderItemId)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAkSliderItemId(Z_Param_Out_ItemId);
	P_NATIVE_END;
}
// End Class UAkSlider Function SetAkSliderItemId

// Begin Class UAkSlider Function SetAkSliderItemProperty
struct Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics
{
	struct AkSlider_eventSetAkSliderItemProperty_Parms
	{
		FString ItemProperty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the item property to the new one.\n\x09*  @param ItemId - value (new id) to set\n\x09*/" },
#endif
		{ "Keywords", "Set Item Property" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the item property to the new one.\n@param ItemId - value (new id) to set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSlider_eventSetAkSliderItemProperty_Parms, ItemProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemProperty_MetaData), NewProp_ItemProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetAkSliderItemProperty", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::AkSlider_eventSetAkSliderItemProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::AkSlider_eventSetAkSliderItemProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execSetAkSliderItemProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemProperty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAkSliderItemProperty(Z_Param_ItemProperty);
	P_NATIVE_END;
}
// End Class UAkSlider Function SetAkSliderItemProperty

// Begin Class UAkSlider Function SetIndentHandle
struct Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics
{
	struct AkSlider_eventSetIndentHandle_Parms
	{
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets if the slidable area should be indented to fit the handle */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets if the slidable area should be indented to fit the handle" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((AkSlider_eventSetIndentHandle_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSlider_eventSetIndentHandle_Parms), &Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetIndentHandle", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::AkSlider_eventSetIndentHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::AkSlider_eventSetIndentHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_SetIndentHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execSetIndentHandle)
{
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIndentHandle(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAkSlider Function SetIndentHandle

// Begin Class UAkSlider Function SetLocked
struct Z_Construct_UFunction_UAkSlider_SetLocked_Statics
{
	struct AkSlider_eventSetLocked_Parms
	{
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the handle to be interactive or fixed */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the handle to be interactive or fixed" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((AkSlider_eventSetLocked_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkSlider_eventSetLocked_Parms), &Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetLocked", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::AkSlider_eventSetLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_SetLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::AkSlider_eventSetLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_SetLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execSetLocked)
{
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLocked(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAkSlider Function SetLocked

// Begin Class UAkSlider Function SetSliderBarColor
struct Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics
{
	struct AkSlider_eventSetSliderBarColor_Parms
	{
		FLinearColor InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the color of the slider bar */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the color of the slider bar" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSlider_eventSetSliderBarColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetSliderBarColor", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::AkSlider_eventSetSliderBarColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::AkSlider_eventSetSliderBarColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_SetSliderBarColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execSetSliderBarColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSliderBarColor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAkSlider Function SetSliderBarColor

// Begin Class UAkSlider Function SetSliderHandleColor
struct Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics
{
	struct AkSlider_eventSetSliderHandleColor_Parms
	{
		FLinearColor InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the color of the handle bar */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the color of the handle bar" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSlider_eventSetSliderHandleColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetSliderHandleColor", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::AkSlider_eventSetSliderHandleColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::AkSlider_eventSetSliderHandleColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_SetSliderHandleColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execSetSliderHandleColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSliderHandleColor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAkSlider Function SetSliderHandleColor

// Begin Class UAkSlider Function SetStepSize
struct Z_Construct_UFunction_UAkSlider_SetStepSize_Statics
{
	struct AkSlider_eventSetStepSize_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the amount to adjust the value by, when using a controller or keyboard */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the amount to adjust the value by, when using a controller or keyboard" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSlider_eventSetStepSize_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetStepSize", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::AkSlider_eventSetStepSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::AkSlider_eventSetStepSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_SetStepSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execSetStepSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStepSize(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAkSlider Function SetStepSize

// Begin Class UAkSlider Function SetValue
struct Z_Construct_UFunction_UAkSlider_SetValue_Statics
{
	struct AkSlider_eventSetValue_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the current value of the slider. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the current value of the slider." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkSlider_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkSlider_eventSetValue_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetValue_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_UAkSlider_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkSlider_SetValue_Statics::AkSlider_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkSlider_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkSlider_SetValue_Statics::AkSlider_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkSlider_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkSlider::execSetValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UAkSlider Function SetValue

// Begin Class UAkSlider
void UAkSlider::StaticRegisterNativesUAkSlider()
{
	UClass* Class = UAkSlider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAkSliderItemId", &UAkSlider::execGetAkSliderItemId },
		{ "GetAkSliderItemProperty", &UAkSlider::execGetAkSliderItemProperty },
		{ "GetValue", &UAkSlider::execGetValue },
		{ "SetAkSliderItemId", &UAkSlider::execSetAkSliderItemId },
		{ "SetAkSliderItemProperty", &UAkSlider::execSetAkSliderItemProperty },
		{ "SetIndentHandle", &UAkSlider::execSetIndentHandle },
		{ "SetLocked", &UAkSlider::execSetLocked },
		{ "SetSliderBarColor", &UAkSlider::execSetSliderBarColor },
		{ "SetSliderHandleColor", &UAkSlider::execSetSliderHandleColor },
		{ "SetStepSize", &UAkSlider::execSetStepSize },
		{ "SetValue", &UAkSlider::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSlider);
UClass* Z_Construct_UClass_UAkSlider_NoRegister()
{
	return UAkSlider::StaticClass();
}
struct Z_Construct_UClass_UAkSlider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n *\n * * No Children\n */" },
#endif
		{ "IncludePath", "AkWaapiUMG/Components/AkSlider.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n\n* No Children" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The volume value to display. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The volume value to display." },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The progress bar style */" },
#endif
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The progress bar style" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The slider's orientation. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The slider's orientation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The color to draw the slider bar in. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The color to draw the slider bar in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderHandleColor_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The color to draw the slider handle in. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The color to draw the slider handle in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndentHandle_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the slidable area should be indented to fit the handle. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the slidable area should be indented to fit the handle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the handle is interactive or fixed. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the handle is interactive or fixed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The amount to adjust the value by, when using a controller or keyboard */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount to adjust the value by, when using a controller or keyboard" },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should the slider be focusable? */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the slider be focusable?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThePropertyToControl_MetaData[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
		{ "DisplayName", "Property to control" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToControl_MetaData[] = {
		{ "Category", "Audiokinetic|WAAPI|Slider" },
		{ "DisplayName", "Item to control" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Widget Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the value is changed by slider or typing. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the value is changed by slider or typing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemDropped_MetaData[] = {
		{ "Category", "Widget Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the item selection changes. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the item selection changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDropped_MetaData[] = {
		{ "Category", "Widget Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the item selection changes. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the item selection changes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SliderHandleColor;
	static void NewProp_IndentHandle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IndentHandle;
	static void NewProp_Locked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Locked;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
	static void NewProp_IsFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThePropertyToControl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToControl;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDropped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDropped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkSlider_GetAkSliderItemId, "GetAkSliderItemId" }, // 1871423404
		{ &Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty, "GetAkSliderItemProperty" }, // 3064405326
		{ &Z_Construct_UFunction_UAkSlider_GetValue, "GetValue" }, // 2011612174
		{ &Z_Construct_UFunction_UAkSlider_SetAkSliderItemId, "SetAkSliderItemId" }, // 2237971302
		{ &Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty, "SetAkSliderItemProperty" }, // 3995472219
		{ &Z_Construct_UFunction_UAkSlider_SetIndentHandle, "SetIndentHandle" }, // 1950775048
		{ &Z_Construct_UFunction_UAkSlider_SetLocked, "SetLocked" }, // 607665043
		{ &Z_Construct_UFunction_UAkSlider_SetSliderBarColor, "SetSliderBarColor" }, // 1863604700
		{ &Z_Construct_UFunction_UAkSlider_SetSliderHandleColor, "SetSliderHandleColor" }, // 1014944568
		{ &Z_Construct_UFunction_UAkSlider_SetStepSize, "SetStepSize" }, // 3124782824
		{ &Z_Construct_UFunction_UAkSlider_SetValue, "SetValue" }, // 687481671
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSlider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueDelegate_MetaData), NewProp_ValueDelegate_MetaData) }; // 4086961303
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, WidgetStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 3452507566
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 349032367
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, SliderBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBarColor_MetaData), NewProp_SliderBarColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor = { "SliderHandleColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, SliderHandleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderHandleColor_MetaData), NewProp_SliderHandleColor_MetaData) };
void Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_SetBit(void* Obj)
{
	((UAkSlider*)Obj)->IndentHandle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle = { "IndentHandle", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSlider), &Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndentHandle_MetaData), NewProp_IndentHandle_MetaData) };
void Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_SetBit(void* Obj)
{
	((UAkSlider*)Obj)->Locked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSlider), &Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locked_MetaData), NewProp_Locked_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
void Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_SetBit(void* Obj)
{
	((UAkSlider*)Obj)->IsFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkSlider), &Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFocusable_MetaData), NewProp_IsFocusable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl = { "ThePropertyToControl", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, ThePropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThePropertyToControl_MetaData), NewProp_ThePropertyToControl_MetaData) }; // 983768871
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl = { "ItemToControl", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, ItemToControl), Z_Construct_UScriptStruct_FAkWwiseItemToControl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToControl_MetaData), NewProp_ItemToControl_MetaData) }; // 4031588197
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, OnValueChanged), Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChanged_MetaData), NewProp_OnValueChanged_MetaData) }; // 1434446824
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped = { "OnItemDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, OnItemDropped), Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemDropped_MetaData), NewProp_OnItemDropped_MetaData) }; // 904777702
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped = { "OnPropertyDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkSlider, OnPropertyDropped), Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPropertyDropped_MetaData), NewProp_OnPropertyDropped_MetaData) }; // 2963570532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSlider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkSlider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSlider_Statics::ClassParams = {
	&UAkSlider::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkSlider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::PropPointers),
	0,
	0x00B000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkSlider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkSlider()
{
	if (!Z_Registration_Info_UClass_UAkSlider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSlider.OuterSingleton, Z_Construct_UClass_UAkSlider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkSlider.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkSlider>()
{
	return UAkSlider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSlider);
UAkSlider::~UAkSlider() {}
// End Class UAkSlider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkWwiseObjectDetails::StaticStruct, Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics::NewStructOps, TEXT("AkWwiseObjectDetails"), &Z_Registration_Info_UScriptStruct_AkWwiseObjectDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWwiseObjectDetails), 4118391284U) },
		{ FAkWwiseItemToControl::StaticStruct, Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewStructOps, TEXT("AkWwiseItemToControl"), &Z_Registration_Info_UScriptStruct_AkWwiseItemToControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWwiseItemToControl), 4031588197U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkSlider, UAkSlider::StaticClass, TEXT("UAkSlider"), &Z_Registration_Info_UClass_UAkSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSlider), 1816362353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_1817559094(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
