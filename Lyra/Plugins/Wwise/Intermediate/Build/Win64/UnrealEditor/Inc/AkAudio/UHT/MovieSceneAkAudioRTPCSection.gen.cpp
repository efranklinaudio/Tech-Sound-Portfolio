// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/MovieSceneAkAudioRTPCSection.h"
#include "AkAudio/Classes/MovieSceneFloatChannelSerializationHelper.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCSection() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection();
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin Class UMovieSceneAkAudioRTPCSection
void UMovieSceneAkAudioRTPCSection::StaticRegisterNativesUMovieSceneAkAudioRTPCSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAkAudioRTPCSection);
UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister()
{
	return UMovieSceneAkAudioRTPCSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A single floating point section\n*/" },
#endif
		{ "IncludePath", "MovieSceneAkAudioRTPCSection.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single floating point section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTPC_MetaData[] = {
		{ "Category", "AkAudioRTPC" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "AkAudioRTPC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the RTPC to modify. */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the RTPC to modify." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve data */" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatChannelSerializationHelper_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enabled serialization of RTPCChannel when 4.24 support was added. \n" },
#endif
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabled serialization of RTPCChannel when 4.24 support was added." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTPCChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioRTPCSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RTPC;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatChannelSerializationHelper;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RTPCChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioRTPCSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, RTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTPC_MetaData), NewProp_RTPC_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurve_MetaData), NewProp_FloatCurve_MetaData) }; // 1340883375
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper = { "FloatChannelSerializationHelper", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, FloatChannelSerializationHelper), Z_Construct_UScriptStruct_FMovieSceneFloatChannelSerializationHelper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatChannelSerializationHelper_MetaData), NewProp_FloatChannelSerializationHelper_MetaData) }; // 3544769784
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPCChannel = { "RTPCChannel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAkAudioRTPCSection, RTPCChannel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTPCChannel_MetaData), NewProp_RTPCChannel_MetaData) }; // 139010471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_FloatChannelSerializationHelper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::NewProp_RTPCChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::ClassParams = {
	&UMovieSceneAkAudioRTPCSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCSection.OuterSingleton, Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCSection.OuterSingleton;
}
template<> AKAUDIO_API UClass* StaticClass<UMovieSceneAkAudioRTPCSection>()
{
	return UMovieSceneAkAudioRTPCSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioRTPCSection);
UMovieSceneAkAudioRTPCSection::~UMovieSceneAkAudioRTPCSection() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneAkAudioRTPCSection)
// End Class UMovieSceneAkAudioRTPCSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCSection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAkAudioRTPCSection, UMovieSceneAkAudioRTPCSection::StaticClass, TEXT("UMovieSceneAkAudioRTPCSection"), &Z_Registration_Info_UClass_UMovieSceneAkAudioRTPCSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAkAudioRTPCSection), 1346357663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCSection_h_26694524(TEXT("/Script/AkAudio"),
	Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Tech_Sound_Portfolio_Lyra_Plugins_Wwise_Source_AkAudio_Classes_MovieSceneAkAudioRTPCSection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
