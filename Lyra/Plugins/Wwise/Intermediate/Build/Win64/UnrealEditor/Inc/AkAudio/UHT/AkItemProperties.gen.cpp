// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiUMG/Components/AkItemProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemProperties() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkItemProperties();
AKAUDIO_API UClass* Z_Construct_UClass_UAkItemProperties_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv();
AKAUDIO_API UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature();
AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Delegate FOnItemPropertySelectionChanged
struct Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics
{
	struct _Script_AkAudio_eventOnItemPropertySelectionChanged_Parms
	{
		FString PropertySelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A delegate type invoked when a selection changes somewhere. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A delegate type invoked when a selection changes somewhere." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertySelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::NewProp_PropertySelected = { "PropertySelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms, PropertySelected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::NewProp_PropertySelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemPropertySelectionChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemPropertySelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemPropertySelectionChanged, const FString& PropertySelected)
{
	struct _Script_AkAudio_eventOnItemPropertySelectionChanged_Parms
	{
		FString PropertySelected;
	};
	_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms Parms;
	Parms.PropertySelected=PropertySelected;
	OnItemPropertySelectionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemPropertySelectionChanged

// Begin Delegate FOnItemPropertyDragDetected
struct Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics
{
	struct _Script_AkAudio_eventOnItemPropertyDragDetected_Parms
	{
		FString PropertyDragged;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A delegate type invoked when a property is being dragged. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A delegate type invoked when a property is being dragged." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyDragged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged = { "PropertyDragged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnItemPropertyDragDetected_Parms, PropertyDragged), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemPropertyDragDetected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnItemPropertyDragDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnItemPropertyDragDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemPropertyDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemPropertyDragDetected, const FString& PropertyDragged)
{
	struct _Script_AkAudio_eventOnItemPropertyDragDetected_Parms
	{
		FString PropertyDragged;
	};
	_Script_AkAudio_eventOnItemPropertyDragDetected_Parms Parms;
	Parms.PropertyDragged=PropertyDragged;
	OnItemPropertyDragDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemPropertyDragDetected

// Begin ScriptStruct FAkPropertyToControl
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkPropertyToControl;
class UScriptStruct* FAkPropertyToControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkPropertyToControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkPropertyToControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPropertyToControl, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPropertyToControl"));
	}
	return Z_Registration_Info_UScriptStruct_AkPropertyToControl.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPropertyToControl>()
{
	return FAkPropertyToControl::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAkPropertyToControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Structure for property to be controlled by the UI.\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure for property to be controlled by the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[] = {
		{ "Category", "ItemProperty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09* The name of the item to control\n\x09\x09*/" },
#endif
		{ "DisplayName", "Property" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the item to control" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPropertyToControl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkPropertyToControl, ItemProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemProperty_MetaData), NewProp_ItemProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	nullptr,
	&NewStructOps,
	"AkPropertyToControl",
	Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers),
	sizeof(FAkPropertyToControl),
	alignof(FAkPropertyToControl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl()
{
	if (!Z_Registration_Info_UScriptStruct_AkPropertyToControl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkPropertyToControl.InnerSingleton, Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AkPropertyToControl.InnerSingleton;
}
// End ScriptStruct FAkPropertyToControl

// Begin Class UAkItemPropertiesConv Function Conv_FAkPropertyToControlToString
struct Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics
{
	struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms
	{
		FAkPropertyToControl INAkPropertyToControl;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an AkPropertyToControl value to a string */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FAkPropertyToControl)" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an AkPropertyToControl value to a string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_INAkPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_INAkPropertyToControl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl = { "INAkPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms, INAkPropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_INAkPropertyToControl_MetaData), NewProp_INAkPropertyToControl_MetaData) }; // 983768871
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_INAkPropertyToControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemPropertiesConv, nullptr, "Conv_FAkPropertyToControlToString", nullptr, nullptr, Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::AkItemPropertiesConv_eventConv_FAkPropertyToControlToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkItemPropertiesConv::execConv_FAkPropertyToControlToString)
{
	P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(Z_Param_Out_INAkPropertyToControl);
	P_NATIVE_END;
}
// End Class UAkItemPropertiesConv Function Conv_FAkPropertyToControlToString

// Begin Class UAkItemPropertiesConv Function Conv_FAkPropertyToControlToText
struct Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics
{
	struct AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms
	{
		FAkPropertyToControl INAkPropertyToControl;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an AkPropertyToControl value to a localizable text */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (FAkPropertyToControl)" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an AkPropertyToControl value to a localizable text" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_INAkPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_INAkPropertyToControl;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl = { "INAkPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms, INAkPropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_INAkPropertyToControl_MetaData), NewProp_INAkPropertyToControl_MetaData) }; // 983768871
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_INAkPropertyToControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemPropertiesConv, nullptr, "Conv_FAkPropertyToControlToText", nullptr, nullptr, Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::AkItemPropertiesConv_eventConv_FAkPropertyToControlToText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkItemPropertiesConv::execConv_FAkPropertyToControlToText)
{
	P_GET_STRUCT_REF(FAkPropertyToControl,Z_Param_Out_INAkPropertyToControl);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(Z_Param_Out_INAkPropertyToControl);
	P_NATIVE_END;
}
// End Class UAkItemPropertiesConv Function Conv_FAkPropertyToControlToText

// Begin Class UAkItemPropertiesConv
void UAkItemPropertiesConv::StaticRegisterNativesUAkItemPropertiesConv()
{
	UClass* Class = UAkItemPropertiesConv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Conv_FAkPropertyToControlToString", &UAkItemPropertiesConv::execConv_FAkPropertyToControlToString },
		{ "Conv_FAkPropertyToControlToText", &UAkItemPropertiesConv::execConv_FAkPropertyToControlToText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkItemPropertiesConv);
UClass* Z_Construct_UClass_UAkItemPropertiesConv_NoRegister()
{
	return UAkItemPropertiesConv::StaticClass();
}
struct Z_Construct_UClass_UAkItemPropertiesConv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\nUAkItemPropertiesConv\n------------------------------------------------------------------------------------*/" },
#endif
		{ "IncludePath", "AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAkItemPropertiesConv" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToString, "Conv_FAkPropertyToControlToString" }, // 680551521
		{ &Z_Construct_UFunction_UAkItemPropertiesConv_Conv_FAkPropertyToControlToText, "Conv_FAkPropertyToControlToText" }, // 2602604445
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemPropertiesConv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAkItemPropertiesConv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemPropertiesConv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkItemPropertiesConv_Statics::ClassParams = {
	&UAkItemPropertiesConv::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkItemPropertiesConv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkItemPropertiesConv()
{
	if (!Z_Registration_Info_UClass_UAkItemPropertiesConv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkItemPropertiesConv.OuterSingleton, Z_Construct_UClass_UAkItemPropertiesConv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkItemPropertiesConv.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkItemPropertiesConv>()
{
	return UAkItemPropertiesConv::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemPropertiesConv);
UAkItemPropertiesConv::~UAkItemPropertiesConv() {}
// End Class UAkItemPropertiesConv

// Begin Class UAkItemProperties Function GetSearchText
struct Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics
{
	struct AkItemProperties_eventGetSearchText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** returns the current text of the searchBox */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "returns the current text of the searchBox" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemProperties_eventGetSearchText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemProperties, nullptr, "GetSearchText", nullptr, nullptr, Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::AkItemProperties_eventGetSearchText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::AkItemProperties_eventGetSearchText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkItemProperties_GetSearchText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemProperties_GetSearchText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkItemProperties::execGetSearchText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSearchText();
	P_NATIVE_END;
}
// End Class UAkItemProperties Function GetSearchText

// Begin Class UAkItemProperties Function GetSelectedProperty
struct Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics
{
	struct AkItemProperties_eventGetSelectedProperty_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns all properties currently selected in the Wwise properties list */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all properties currently selected in the Wwise properties list" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemProperties_eventGetSelectedProperty_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemProperties, nullptr, "GetSelectedProperty", nullptr, nullptr, Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::AkItemProperties_eventGetSelectedProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::AkItemProperties_eventGetSelectedProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkItemProperties::execGetSelectedProperty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSelectedProperty();
	P_NATIVE_END;
}
// End Class UAkItemProperties Function GetSelectedProperty

// Begin Class UAkItemProperties Function SetSearchText
struct Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics
{
	struct AkItemProperties_eventSetSearchText_Parms
	{
		FString newText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** sets the current text of the searchBox */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sets the current text of the searchBox" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_newText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_newText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::NewProp_newText = { "newText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemProperties_eventSetSearchText_Parms, newText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_newText_MetaData), NewProp_newText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::NewProp_newText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemProperties, nullptr, "SetSearchText", nullptr, nullptr, Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::AkItemProperties_eventSetSearchText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::AkItemProperties_eventSetSearchText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAkItemProperties_SetSearchText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemProperties_SetSearchText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAkItemProperties::execSetSearchText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_newText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSearchText(Z_Param_newText);
	P_NATIVE_END;
}
// End Class UAkItemProperties Function SetSearchText

// Begin Class UAkItemProperties
void UAkItemProperties::StaticRegisterNativesUAkItemProperties()
{
	UClass* Class = UAkItemProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSearchText", &UAkItemProperties::execGetSearchText },
		{ "GetSelectedProperty", &UAkItemProperties::execGetSelectedProperty },
		{ "SetSearchText", &UAkItemProperties::execSetSearchText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkItemProperties);
UClass* Z_Construct_UClass_UAkItemProperties_NoRegister()
{
	return UAkItemProperties::StaticClass();
}
struct Z_Construct_UClass_UAkItemProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A widget that shows the Wwise properties list.\n*/" },
#endif
		{ "IncludePath", "AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A widget that shows the Wwise properties list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Widget Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the property selection changes. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the property selection changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDragged_MetaData[] = {
		{ "Category", "Widget Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when a property is dragged from the property list. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a property is dragged from the property list." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDragged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemProperties_GetSearchText, "GetSearchText" }, // 1672902198
		{ &Z_Construct_UFunction_UAkItemProperties_GetSelectedProperty, "GetSelectedProperty" }, // 3740027975
		{ &Z_Construct_UFunction_UAkItemProperties_SetSearchText, "SetSearchText" }, // 889936929
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkItemProperties, OnSelectionChanged), Z_Construct_UDelegateFunction_AkAudio_OnItemPropertySelectionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectionChanged_MetaData), NewProp_OnSelectionChanged_MetaData) }; // 1149615000
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnPropertyDragged = { "OnPropertyDragged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkItemProperties, OnPropertyDragged), Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPropertyDragged_MetaData), NewProp_OnPropertyDragged_MetaData) }; // 1740102513
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkItemProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnSelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkItemProperties_Statics::NewProp_OnPropertyDragged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAkItemProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkItemProperties_Statics::ClassParams = {
	&UAkItemProperties::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAkItemProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemProperties_Statics::PropPointers),
	0,
	0x00B000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkItemProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAkItemProperties()
{
	if (!Z_Registration_Info_UClass_UAkItemProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkItemProperties.OuterSingleton, Z_Construct_UClass_UAkItemProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAkItemProperties.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UAkItemProperties>()
{
	return UAkItemProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemProperties);
UAkItemProperties::~UAkItemProperties() {}
// End Class UAkItemProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAkPropertyToControl::StaticStruct, Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewStructOps, TEXT("AkPropertyToControl"), &Z_Registration_Info_UScriptStruct_AkPropertyToControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkPropertyToControl), 983768871U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAkItemPropertiesConv, UAkItemPropertiesConv::StaticClass, TEXT("UAkItemPropertiesConv"), &Z_Registration_Info_UClass_UAkItemPropertiesConv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkItemPropertiesConv), 2132297035U) },
		{ Z_Construct_UClass_UAkItemProperties, UAkItemProperties::StaticClass, TEXT("UAkItemProperties"), &Z_Registration_Info_UClass_UAkItemProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkItemProperties), 4157397416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_283843537(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
