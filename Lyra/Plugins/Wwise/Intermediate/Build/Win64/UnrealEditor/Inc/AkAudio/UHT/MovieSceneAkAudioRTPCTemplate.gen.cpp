// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Private/MovieSceneAkAudioRTPCTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCTemplate() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister();
AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

// Begin ScriptStruct FMovieSceneAkAudioRTPCTemplate
static_assert(std::is_polymorphic<FMovieSceneAkAudioRTPCTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneAkAudioRTPCTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneAkAudioRTPCTemplate;
class UScriptStruct* FMovieSceneAkAudioRTPCTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneAkAudioRTPCTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneAkAudioRTPCTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneAkAudioRTPCTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneAkAudioRTPCTemplate.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FMovieSceneAkAudioRTPCTemplate>()
{
	return FMovieSceneAkAudioRTPCTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneAkAudioRTPCTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieSceneAkAudioRTPCTemplate.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAkAudioRTPCTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneAkAudioRTPCTemplate, Section), Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneAkAudioRTPCTemplate",
	Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::PropPointers),
	sizeof(FMovieSceneAkAudioRTPCTemplate),
	alignof(FMovieSceneAkAudioRTPCTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneAkAudioRTPCTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneAkAudioRTPCTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneAkAudioRTPCTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneAkAudioRTPCTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Private_MovieSceneAkAudioRTPCTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneAkAudioRTPCTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_Statics::NewStructOps, TEXT("MovieSceneAkAudioRTPCTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneAkAudioRTPCTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneAkAudioRTPCTemplate), 56565337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Private_MovieSceneAkAudioRTPCTemplate_h_3753765101(TEXT("/Script/AkAudio"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Private_MovieSceneAkAudioRTPCTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ericf_Documents_Unreal_Projects_Lyra_Plugins_Wwise_Source_AkAudio_Private_MovieSceneAkAudioRTPCTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
