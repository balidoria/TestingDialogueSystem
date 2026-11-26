// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgSystemSettings.h"
#include "Layout/Margin.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgSystemSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings(ETypeConstructPhase);
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment(ETypeConstructPhase);
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgSystemSettings(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgNoSatisfiedChildBehavior(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgSystemSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EDlgDialogueTextFormat ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgDialogueTextFormat>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "All.Comment", "// Output all text formats, mostly used for debugging\n" },
		{ "All.Hidden", "" },
		{ "All.Name", "EDlgDialogueTextFormat::All" },
		{ "All.ToolTip", "Output all text formats, mostly used for debugging" },
		{ "Comment", "// Defines the format of the Dialogue text\n" },
		{ "DialogueDEPRECATED.Comment", "// DEPRECATED. The own Dialogue Text format. DEPRECATED.\n// NOTE: this format is deprecated AND in the next version it will be removed\n" },
		{ "DialogueDEPRECATED.Hidden", "" },
		{ "DialogueDEPRECATED.Name", "EDlgDialogueTextFormat::DialogueDEPRECATED" },
		{ "DialogueDEPRECATED.ToolTip", "DEPRECATED. The own Dialogue Text format. DEPRECATED.\nNOTE: this format is deprecated AND in the next version it will be removed" },
		{ "JSON.Comment", "// The JSON format.\n" },
		{ "JSON.DisplayName", "JSON" },
		{ "JSON.Name", "EDlgDialogueTextFormat::JSON" },
		{ "JSON.ToolTip", "The JSON format." },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "None.Comment", "// No Text Format used.\n" },
		{ "None.DisplayName", "No Text Format" },
		{ "None.Name", "EDlgDialogueTextFormat::None" },
		{ "None.ToolTip", "No Text Format used." },
		{ "NumTextFormats.Comment", "// Hidden, represents the number of text formats */\n" },
		{ "NumTextFormats.Hidden", "" },
		{ "NumTextFormats.Name", "EDlgDialogueTextFormat::NumTextFormats" },
		{ "NumTextFormats.ToolTip", "Hidden, represents the number of text formats */" },
		{ "StartTextFormats.Comment", "// Hidden represents the start of the text formats index\n" },
		{ "StartTextFormats.Hidden", "" },
		{ "StartTextFormats.Name", "EDlgDialogueTextFormat::StartTextFormats" },
		{ "StartTextFormats.ToolTip", "Hidden represents the start of the text formats index" },
		{ "ToolTip", "Defines the format of the Dialogue text" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgDialogueTextFormat::None", (int64)EDlgDialogueTextFormat::None },
		{ "EDlgDialogueTextFormat::All", (int64)EDlgDialogueTextFormat::All },
		{ "EDlgDialogueTextFormat::DialogueDEPRECATED", (int64)EDlgDialogueTextFormat::DialogueDEPRECATED },
		{ "EDlgDialogueTextFormat::StartTextFormats", (int64)EDlgDialogueTextFormat::StartTextFormats },
		{ "EDlgDialogueTextFormat::JSON", (int64)EDlgDialogueTextFormat::JSON },
		{ "EDlgDialogueTextFormat::NumTextFormats", (int64)EDlgDialogueTextFormat::NumTextFormats },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgDialogueTextFormat",
	"EDlgDialogueTextFormat",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgDialogueTextFormat;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgDialogueTextFormat.OuterSingleton)
		{
			ZRIE_EDlgDialogueTextFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgDialogueTextFormat"));
		}
		return ZRIE_EDlgDialogueTextFormat.OuterSingleton;
	}
	if (!ZRIE_EDlgDialogueTextFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgDialogueTextFormat.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgDialogueTextFormat.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgDialogueTextFormat ******************************************************

// ********** Begin Enum EDlgVoiceDisplayedFields **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgVoiceDisplayedFields>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Defines the displayed properties of the voice fields.\n" },
		{ "DialogueWave.Comment", "// Only display the DialogueWave voice fields.\n" },
		{ "DialogueWave.DisplayName", "Dialogue Wave" },
		{ "DialogueWave.Name", "EDlgVoiceDisplayedFields::DialogueWave" },
		{ "DialogueWave.ToolTip", "Only display the DialogueWave voice fields." },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "None.Comment", "// No Voice fields are displayed.\n" },
		{ "None.DisplayName", "No Voice" },
		{ "None.Name", "EDlgVoiceDisplayedFields::None" },
		{ "None.ToolTip", "No Voice fields are displayed." },
		{ "SoundWave.Comment", "// Only display the SoundWave voice fields.\n" },
		{ "SoundWave.DisplayName", "Sound Wave" },
		{ "SoundWave.Name", "EDlgVoiceDisplayedFields::SoundWave" },
		{ "SoundWave.ToolTip", "Only display the SoundWave voice fields." },
		{ "SoundWaveAndDialogueWave.Comment", "// Display both SoundWave and DialogueWave fields.\n" },
		{ "SoundWaveAndDialogueWave.DisplayName", "Sound Wave & Dialogue Wave" },
		{ "SoundWaveAndDialogueWave.Name", "EDlgVoiceDisplayedFields::SoundWaveAndDialogueWave" },
		{ "SoundWaveAndDialogueWave.ToolTip", "Display both SoundWave and DialogueWave fields." },
		{ "ToolTip", "Defines the displayed properties of the voice fields." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgVoiceDisplayedFields::None", (int64)EDlgVoiceDisplayedFields::None },
		{ "EDlgVoiceDisplayedFields::SoundWave", (int64)EDlgVoiceDisplayedFields::SoundWave },
		{ "EDlgVoiceDisplayedFields::DialogueWave", (int64)EDlgVoiceDisplayedFields::DialogueWave },
		{ "EDlgVoiceDisplayedFields::SoundWaveAndDialogueWave", (int64)EDlgVoiceDisplayedFields::SoundWaveAndDialogueWave },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgVoiceDisplayedFields",
	"EDlgVoiceDisplayedFields",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgVoiceDisplayedFields;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgVoiceDisplayedFields.OuterSingleton)
		{
			ZRIE_EDlgVoiceDisplayedFields.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgVoiceDisplayedFields"));
		}
		return ZRIE_EDlgVoiceDisplayedFields.OuterSingleton;
	}
	if (!ZRIE_EDlgVoiceDisplayedFields.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgVoiceDisplayedFields.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgVoiceDisplayedFields.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgVoiceDisplayedFields ****************************************************

// ********** Begin Enum EDlgSpeakerStateVisibility ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgSpeakerStateVisibility>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Defines the visibility of the SpeakerState values\n" },
		{ "HideAll.Comment", "// No visibility fields are displayed.\n" },
		{ "HideAll.DisplayName", "Hide All" },
		{ "HideAll.Name", "EDlgSpeakerStateVisibility::HideAll" },
		{ "HideAll.ToolTip", "No visibility fields are displayed." },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ShowOnEdge.Comment", "// Only display the SoundWave voice fields.\n" },
		{ "ShowOnEdge.DisplayName", "Show On Edge" },
		{ "ShowOnEdge.Name", "EDlgSpeakerStateVisibility::ShowOnEdge" },
		{ "ShowOnEdge.ToolTip", "Only display the SoundWave voice fields." },
		{ "ShowOnNode.Comment", "// Only display the DialogueWave voice fields.\n" },
		{ "ShowOnNode.DisplayName", "Show On Node" },
		{ "ShowOnNode.Name", "EDlgSpeakerStateVisibility::ShowOnNode" },
		{ "ShowOnNode.ToolTip", "Only display the DialogueWave voice fields." },
		{ "ShowOnNodeAndEdge.Comment", "// Display both SoundWave and DialogueWave fields.\n" },
		{ "ShowOnNodeAndEdge.DisplayName", "Show On Both (Edge + Node)" },
		{ "ShowOnNodeAndEdge.Name", "EDlgSpeakerStateVisibility::ShowOnNodeAndEdge" },
		{ "ShowOnNodeAndEdge.ToolTip", "Display both SoundWave and DialogueWave fields." },
		{ "ToolTip", "Defines the visibility of the SpeakerState values" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgSpeakerStateVisibility::HideAll", (int64)EDlgSpeakerStateVisibility::HideAll },
		{ "EDlgSpeakerStateVisibility::ShowOnEdge", (int64)EDlgSpeakerStateVisibility::ShowOnEdge },
		{ "EDlgSpeakerStateVisibility::ShowOnNode", (int64)EDlgSpeakerStateVisibility::ShowOnNode },
		{ "EDlgSpeakerStateVisibility::ShowOnNodeAndEdge", (int64)EDlgSpeakerStateVisibility::ShowOnNodeAndEdge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgSpeakerStateVisibility",
	"EDlgSpeakerStateVisibility",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgSpeakerStateVisibility;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgSpeakerStateVisibility.OuterSingleton)
		{
			ZRIE_EDlgSpeakerStateVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgSpeakerStateVisibility"));
		}
		return ZRIE_EDlgSpeakerStateVisibility.OuterSingleton;
	}
	if (!ZRIE_EDlgSpeakerStateVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgSpeakerStateVisibility.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgSpeakerStateVisibility.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgSpeakerStateVisibility **************************************************

// ********** Begin Enum EDlgTextInputKeyForNewLine ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgTextInputKeyForNewLine>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Defines what key combination to press to add a new line to an FText\n" },
		{ "Enter.Comment", "// Press 'Enter' to add a new line.\n" },
		{ "Enter.DisplayName", "Enter" },
		{ "Enter.Name", "EDlgTextInputKeyForNewLine::Enter" },
		{ "Enter.ToolTip", "Press 'Enter' to add a new line." },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ShiftPlusEnter.Comment", "// Preset 'Shift + Enter' to add a new line. (like in blueprints)\n" },
		{ "ShiftPlusEnter.DisplayName", "Shift + Enter" },
		{ "ShiftPlusEnter.Name", "EDlgTextInputKeyForNewLine::ShiftPlusEnter" },
		{ "ShiftPlusEnter.ToolTip", "Preset 'Shift + Enter' to add a new line. (like in blueprints)" },
		{ "ToolTip", "Defines what key combination to press to add a new line to an FText" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgTextInputKeyForNewLine::Enter", (int64)EDlgTextInputKeyForNewLine::Enter },
		{ "EDlgTextInputKeyForNewLine::ShiftPlusEnter", (int64)EDlgTextInputKeyForNewLine::ShiftPlusEnter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgTextInputKeyForNewLine",
	"EDlgTextInputKeyForNewLine",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgTextInputKeyForNewLine;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgTextInputKeyForNewLine.OuterSingleton)
		{
			ZRIE_EDlgTextInputKeyForNewLine.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgTextInputKeyForNewLine"));
		}
		return ZRIE_EDlgTextInputKeyForNewLine.OuterSingleton;
	}
	if (!ZRIE_EDlgTextInputKeyForNewLine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgTextInputKeyForNewLine.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgTextInputKeyForNewLine.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgTextInputKeyForNewLine **************************************************

// ********** Begin Enum EDlgTextNamespaceLocalization *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgTextNamespaceLocalization>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Defines how the overriden namespace will be set\n" },
		{ "Global.Comment", "// The system sets the Namespace for Text fields for each dialogue into the same value. Unique keys are also generated.\n" },
		{ "Global.DisplayName", "Global Namespace" },
		{ "Global.Name", "EDlgTextNamespaceLocalization::Global" },
		{ "Global.ToolTip", "The system sets the Namespace for Text fields for each dialogue into the same value. Unique keys are also generated." },
		{ "Ignore.Comment", "// The system does not modify the Namespace and Key values of the Text fields.\n" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EDlgTextNamespaceLocalization::Ignore" },
		{ "Ignore.ToolTip", "The system does not modify the Namespace and Key values of the Text fields." },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "PerDialogue.Comment", "// The system sets the Namespace for Text fields for each dialogue separately. Unique keys are also generated.\n" },
		{ "PerDialogue.DisplayName", "Namespace Per Dialogue (DialogueName)" },
		{ "PerDialogue.Name", "EDlgTextNamespaceLocalization::PerDialogue" },
		{ "PerDialogue.ToolTip", "The system sets the Namespace for Text fields for each dialogue separately. Unique keys are also generated." },
		{ "ToolTip", "Defines how the overriden namespace will be set" },
		{ "WithPrefixPerDialogue.Comment", "// Same as PerDialogue only we will have a prefix set\n" },
		{ "WithPrefixPerDialogue.DisplayName", "Prefix + Namespace Per Dialogue (Prefix.DialogueName)" },
		{ "WithPrefixPerDialogue.Name", "EDlgTextNamespaceLocalization::WithPrefixPerDialogue" },
		{ "WithPrefixPerDialogue.ToolTip", "Same as PerDialogue only we will have a prefix set" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgTextNamespaceLocalization::Ignore", (int64)EDlgTextNamespaceLocalization::Ignore },
		{ "EDlgTextNamespaceLocalization::PerDialogue", (int64)EDlgTextNamespaceLocalization::PerDialogue },
		{ "EDlgTextNamespaceLocalization::WithPrefixPerDialogue", (int64)EDlgTextNamespaceLocalization::WithPrefixPerDialogue },
		{ "EDlgTextNamespaceLocalization::Global", (int64)EDlgTextNamespaceLocalization::Global },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgTextNamespaceLocalization",
	"EDlgTextNamespaceLocalization",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgTextNamespaceLocalization;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgTextNamespaceLocalization.OuterSingleton)
		{
			ZRIE_EDlgTextNamespaceLocalization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgTextNamespaceLocalization"));
		}
		return ZRIE_EDlgTextNamespaceLocalization.OuterSingleton;
	}
	if (!ZRIE_EDlgTextNamespaceLocalization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgTextNamespaceLocalization.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgTextNamespaceLocalization.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgTextNamespaceLocalization ***********************************************

// ********** Begin Enum EDlgClassPickerDisplayMode ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgClassPickerDisplayMode>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DefaultView.Comment", "// Default will choose what view mode based on if in Viewer or Picker mode.\n" },
		{ "DefaultView.Name", "EDlgClassPickerDisplayMode::DefaultView" },
		{ "DefaultView.ToolTip", "Default will choose what view mode based on if in Viewer or Picker mode." },
		{ "ListView.Comment", "// Displays all classes as a list.\n" },
		{ "ListView.Name", "EDlgClassPickerDisplayMode::ListView" },
		{ "ListView.ToolTip", "Displays all classes as a list." },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "TreeView.Comment", "// Displays all classes as a tree.\n" },
		{ "TreeView.Name", "EDlgClassPickerDisplayMode::TreeView" },
		{ "TreeView.ToolTip", "Displays all classes as a tree." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgClassPickerDisplayMode::DefaultView", (int64)EDlgClassPickerDisplayMode::DefaultView },
		{ "EDlgClassPickerDisplayMode::TreeView", (int64)EDlgClassPickerDisplayMode::TreeView },
		{ "EDlgClassPickerDisplayMode::ListView", (int64)EDlgClassPickerDisplayMode::ListView },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgClassPickerDisplayMode",
	"EDlgClassPickerDisplayMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgClassPickerDisplayMode;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgClassPickerDisplayMode.OuterSingleton)
		{
			ZRIE_EDlgClassPickerDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgClassPickerDisplayMode"));
		}
		return ZRIE_EDlgClassPickerDisplayMode.OuterSingleton;
	}
	if (!ZRIE_EDlgClassPickerDisplayMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgClassPickerDisplayMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgClassPickerDisplayMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgClassPickerDisplayMode **************************************************

// ********** Begin Enum EDlgNoSatisfiedChildBehavior **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgNoSatisfiedChildBehavior_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgNoSatisfiedChildBehavior>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgNoSatisfiedChildBehavior(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Defines the runtime behavior when a non-end node has no valid child\n" },
		{ "ContinueDialogue.Comment", "// System assumes this is normal and the context returns with True. The game is expected to handle that there are no valid options.\n" },
		{ "ContinueDialogue.Name", "EDlgNoSatisfiedChildBehavior::ContinueDialogue" },
		{ "ContinueDialogue.ToolTip", "System assumes this is normal and the context returns with True. The game is expected to handle that there are no valid options." },
		{ "EndDialogue.Comment", "// No error messaage is fired, dialogue context marks that the dialogue ended and returns with false\n" },
		{ "EndDialogue.Name", "EDlgNoSatisfiedChildBehavior::EndDialogue" },
		{ "EndDialogue.ToolTip", "No error messaage is fired, dialogue context marks that the dialogue ended and returns with false" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "PrintErrorAndEndDialogue.Comment", "// Error messaage is fired, dialogue context marks that the dialogue ended and returns with false\n" },
		{ "PrintErrorAndEndDialogue.Name", "EDlgNoSatisfiedChildBehavior::PrintErrorAndEndDialogue" },
		{ "PrintErrorAndEndDialogue.ToolTip", "Error messaage is fired, dialogue context marks that the dialogue ended and returns with false" },
		{ "ToolTip", "Defines the runtime behavior when a non-end node has no valid child" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgNoSatisfiedChildBehavior::PrintErrorAndEndDialogue", (int64)EDlgNoSatisfiedChildBehavior::PrintErrorAndEndDialogue },
		{ "EDlgNoSatisfiedChildBehavior::EndDialogue", (int64)EDlgNoSatisfiedChildBehavior::EndDialogue },
		{ "EDlgNoSatisfiedChildBehavior::ContinueDialogue", (int64)EDlgNoSatisfiedChildBehavior::ContinueDialogue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgNoSatisfiedChildBehavior",
	"EDlgNoSatisfiedChildBehavior",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgNoSatisfiedChildBehavior;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgNoSatisfiedChildBehavior(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgNoSatisfiedChildBehavior.OuterSingleton)
		{
			ZRIE_EDlgNoSatisfiedChildBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgNoSatisfiedChildBehavior, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgNoSatisfiedChildBehavior"));
		}
		return ZRIE_EDlgNoSatisfiedChildBehavior.OuterSingleton;
	}
	if (!ZRIE_EDlgNoSatisfiedChildBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgNoSatisfiedChildBehavior.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgNoSatisfiedChildBehavior.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgNoSatisfiedChildBehavior ************************************************

// ********** Begin Class UDlgSystemSettings *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgSystemSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// UDeveloperSettings classes are auto discovered https://wiki.unrealengine.com/CustomSettings\n" },
		{ "DisplayName", "Dialogue System Settings" },
		{ "IncludePath", "DlgSystemSettings.h" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "UDeveloperSettings classes are auto discovered https:wiki.unrealengine.com/CustomSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearDialogueHistoryAutomatically_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// If enabled this clears the dialogue history automatically on Editor Start PIE and On Load New Map */\n// Calls ClearDialogueHistory\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "If enabled this clears the dialogue history automatically on Editor Start PIE and On Load New Map */\nCalls ClearDialogueHistory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegisterDialogueConsoleCommandsAutomatically_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// If enabled this auto registers and unregisters the dialogue console commands on Begin Play\n// Calls RegisterDialogueConsoleCommands and UnregisterDialogueConsoleCommands\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "If enabled this auto registers and unregisters the dialogue console commands on Begin Play\nCalls RegisterDialogueConsoleCommands and UnregisterDialogueConsoleCommands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoSatisfiedChildBehavior_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// By default the dialogue assumes that there should always be a valid child (with satisfied conditions) for each non-end node\n// Use this setting to override that behavior\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "By default the dialogue assumes that there should always be a valid child (with satisfied conditions) for each non-end node\nUse this setting to override that behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTextFormat_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// The dialogue text format used for saving and reloading from text files.\n" },
		{ "DisplayName", "Text Format" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The dialogue text format used for saving and reloading from text files." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTextInputKeyForNewLine_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// What key combination to press to add a new line for FText fields in the Dialogue Editor.\n" },
		{ "DisplayName", "Text Input Key for NewLine" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "What key combination to press to add a new line for FText fields in the Dialogue Editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetDefaultParticipantClasses_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// If true, ParticipantsClasses from each Dialogue will be set to the first Class that matches the ParticipantName\n// NOTE: This only sets the default for participant names that have only ONE participant class\n// NOTE: This does not work for the None Participant Name\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "If true, ParticipantsClasses from each Dialogue will be set to the first Class that matches the ParticipantName\nNOTE: This only sets the default for participant names that have only ONE participant class\nNOTE: This does not work for the None Participant Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowNodeData_MetaData[] = {
		{ "Category", "Dialogue Node Data" },
		{ "Comment", "// Shows the NodeData that you can customize yourself\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Shows the NodeData that you can customize yourself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEdgeData_MetaData[] = {
		{ "Category", "Dialogue Edge Data" },
		{ "Comment", "// Shows the EdgeData that you can customize yourself\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Shows the EdgeData that you can customize yourself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSpeakerStateVisibility_MetaData[] = {
		{ "Category", "Dialogue Node Data" },
		{ "Comment", "// Where to display the SpeakerState FName property\n" },
		{ "DisplayName", "SpeakerState Visibility" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Where to display the SpeakerState FName property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueDisplayedVoiceFields_MetaData[] = {
		{ "Category", "Dialogue Node Data" },
		{ "Comment", "// What Voice fields to show in the Dialogue Editor, if any.\n" },
		{ "DisplayName", "Displayed Voice Fields" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "What Voice fields to show in the Dialogue Editor, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGenericData_MetaData[] = {
		{ "Category", "Dialogue Node Data" },
		{ "Comment", "// Generic data is an UObject* which can be assigned to nodes and can be asked from the active one\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Generic data is an UObject* which can be assigned to nodes and can be asked from the active one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowAdvancedChildren_MetaData[] = {
		{ "Category", "Dialogue Node Data" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlacklistedReflectionClasses_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Any properties that belong to these classes won't be shown in the suggestion list when you use the reflection system (class variables).\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Any properties that belong to these classes won't be shown in the suggestion list when you use the reflection system (class variables)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCustomNodeDataClass_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Default class to use for custom node data\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Default class to use for custom node data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassPickerDisplayMode_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "// How the Blueprint class pricker looks like\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "How the Blueprint class pricker looks like" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBatchOnlyInGameDialogues_MetaData[] = {
		{ "Category", "Batch" },
		{ "Comment", "// Should we only process batch dialogues that are only in the /Game folder.\n// This is used for saving all dialogues or deleting all text files.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Should we only process batch dialogues that are only in the /Game folder.\nThis is used for saving all dialogues or deleting all text files." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalTextFormatFileExtensionsToLookFor_MetaData[] = {
		{ "Category", "Batch" },
		{ "Comment", "// Additional file extension to look for when doing operations with dialogue text formats, like: deleting/renaming.\n// NOTE: file extensions must start with a full stop\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Additional file extension to look for when doing operations with dialogue text formats, like: deleting/renaming.\nNOTE: file extensions must start with a full stop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetDefaultEdgeTexts_MetaData[] = {
		{ "Category", "Default Texts" },
		{ "Comment", "// Should the dialogue system set the default texts on empty edges on save dialogue and when creating them?\n" },
		{ "DisplayName", "Set Default Edge Texts" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Should the dialogue system set the default texts on empty edges on save dialogue and when creating them?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetDefaultEdgeTextOnFirstChildOnly_MetaData[] = {
		{ "Category", "Default Texts" },
		{ "Comment", "// If true the default text will be only applied to the first child instead of all children from a node\n" },
		{ "DisplayName", "Set Default Edge Texts on First Child Only" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "If true the default text will be only applied to the first child instead of all children from a node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextEdgeToEndNode_MetaData[] = {
		{ "Category", "Default Texts" },
		{ "Comment", "// Default text that appears on empty edges that lead to an end node\n" },
		{ "DisplayName", "Edge Text To End Node" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Default text that appears on empty edges that lead to an end node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextEdgeToNormalNode_MetaData[] = {
		{ "Category", "Default Texts" },
		{ "Comment", "// Default text that appears on empty edges texts that lead to a normal node (not an end node).\n" },
		{ "DisplayName", "Edge Text To Normal Node" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Default text that appears on empty edges texts that lead to a normal node (not an end node)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTextNamespaceLocalization_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "// Defines what the system should do with Text Namespaces for localization\n" },
		{ "DisplayName", "Text Namespace" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Defines what the system should do with Text Namespaces for localization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTextGlobalNamespaceName_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "// Depending on TextLocalizationMode it can be used as the namespace for all dialogue\n// Only used for GlobalNamespace\n" },
		{ "DisplayName", "Text Global Namespace Name" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Depending on TextLocalizationMode it can be used as the namespace for all dialogue\nOnly used for GlobalNamespace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTextPrefixNamespaceName_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "// Depending on TextLocalizationMode it can be used as the prefix for all dialogues namespace name\n// Only used for WithPrefixPerDialogue\n" },
		{ "DisplayName", "Text Namespace Name Prefix" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Depending on TextLocalizationMode it can be used as the prefix for all dialogues namespace name\nOnly used for WithPrefixPerDialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationIgnoredStrings_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "// Additional Array of source strings that this system won't overwrite the namespace or key for\n" },
		{ "DisplayName", "Ignored Strings" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Additional Array of source strings that this system won't overwrite the namespace or key for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationRemapSourceStringsToTexts_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "// Map used to remap some SourceStrings texts found in the dialogues with a new Text value/namespace/key\n// Key: SourceString we are searching for\n// Value: Text replacement. NOTE: if the text value is usually not empty\n" },
		{ "DisplayName", "Remap Source Strings to Texts" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Map used to remap some SourceStrings texts found in the dialogues with a new Text value/namespace/key\nKey: SourceString we are searching for\nValue: Text replacement. NOTE: if the text value is usually not empty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMessageLog_MetaData[] = {
		{ "Category", "Logger" },
		{ "Comment", "// Enables the message log to output info/errors/warnings to it\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Enables the message log to output info/errors/warnings to it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMessageLogMirrorToOutputLog_MetaData[] = {
		{ "Category", "Logger" },
		{ "Comment", "// Should the message log mirror the message with the output log, used even if the output log is disabled.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Should the message log mirror the message with the output log, used even if the output log is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMessageLogOpen_MetaData[] = {
		{ "Category", "Logger" },
		{ "Comment", "// Opens the message log in front of the user if messages are displayed\n// See OpenMessageLogLevelsHigherThan for the filter\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Opens the message log in front of the user if messages are displayed\nSee OpenMessageLogLevelsHigherThan for the filter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOutputLog_MetaData[] = {
		{ "Comment", "// NOTE: Not editable is intended so that not to allow the user to disable logging completely\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "NOTE: Not editable is intended so that not to allow the user to disable logging completely" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedirectMessageLogLevelsHigherThan_MetaData[] = {
		{ "Category", "Logger" },
		{ "Comment", "// By default the message log does not support debug output, latest is info.\n// For the sake of sanity we redirect all levels higher than RedirectMessageLogLevelsHigherThan to the output log\n// even if the output log is disabled.\n// So that not to output for example debug output to the message log only to the output log.\n// NOTE: A value of ENYLoggerLogLevel::NoLogging means no log level will get redirected\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "By default the message log does not support debug output, latest is info.\nFor the sake of sanity we redirect all levels higher than RedirectMessageLogLevelsHigherThan to the output log\neven if the output log is disabled.\nSo that not to output for example debug output to the message log only to the output log.\nNOTE: A value of ENYLoggerLogLevel::NoLogging means no log level will get redirected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenMessageLogLevelsHigherThan_MetaData[] = {
		{ "Category", "Logger" },
		{ "Comment", "// All the log levels messages that will open the message log window if bMessageLogOpen is true\n// NOTE: A value of  ENYLoggerLogLevel::NoLogging means all log levels will be opened if bMessageLogOpen is true\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "All the log levels messages that will open the message log window if bMessageLogOpen is true\nNOTE: A value of  ENYLoggerLogLevel::NoLogging means all log levels will be opened if bMessageLogOpen is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideEmptyDialogueBrowserCategories_MetaData[] = {
		{ "Category", "Browser" },
		{ "Comment", "// Should we hide the categories in the Dialogue browser that do not have any children?\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Should we hide the categories in the Dialogue browser that do not have any children?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowExternalURLsToolbar_MetaData[] = {
		{ "Category", "External URLs" },
		{ "Comment", "// Should the external URLs toolbar be displayed\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Should the external URLs toolbar be displayed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionWrapTextAt_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// Whether the description text wraps onto a new line when it's length exceeds this width;\n// Tf this value is zero or negative, no wrapping occurs.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Whether the description text wraps onto a new line when it's length exceeds this width;\nTf this value is zero or negative, no wrapping occurs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionTextMargin_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// The amount of blank space left around the edges of the description text area.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The amount of blank space left around the edges of the description text area." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleHorizontalAlignment_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// The horizontal alignment of the graph node title and icon\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The horizontal alignment of the graph node title and icon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowHasEnterConditionsIcon_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// To show or not the condition icon in the case the node has any enter conditions defined on it.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the condition icon in the case the node has any enter conditions defined on it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowHasEnterEventsIcon_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// To show or not the event icon in the case the node has any enter events defined on it.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the event icon in the case the node has any enter events defined on it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowHasVoiceIcon_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// To show or not the voice icon in the case the node has any voice members set\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the voice icon in the case the node has any voice members set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowHasGenericDataIcon_MetaData[] = {
		{ "Category", "Graph Node" },
		{ "Comment", "// To show or not the voice icon in the case the node has any voice members set\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the voice icon in the case the node has any voice members set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeechNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the normal speech node. */\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the normal speech node. */" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the root node.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the root node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the end node.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the end node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualParentNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the virtual parent node.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the virtual parent node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorFirstNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the selector first node.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the selector first node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorRandomNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the selector random node.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the selector random node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeechSequenceNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the selector random node.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the selector random node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyNodeColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the proxy node.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the proxy node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackgroundColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the node borders.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the node borders." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderHoveredBackgroundColor_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the node borders when hovered over\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the node borders when hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackgroundColorNoChildren_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the node borders for nodes which can't have children.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the node borders for nodes which can't have children." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderHoveredBackgroundColorNoChildren_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the node borders for nodes which can't have children when hovered over\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the node borders for nodes which can't have children when hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackgroundColorHighlighted_MetaData[] = {
		{ "Category", "Graph Node Color" },
		{ "Comment", "// The background color of the node borders for nodes which are highlighted\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The background color of the node borders for nodes which are highlighted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionSpeakerMargin_MetaData[] = {
		{ "Category", "Graph Node Speech Sequence" },
		{ "Comment", "// The amount of blank space left around the edges of the speaker text area in case of speech sequence nodes.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The amount of blank space left around the edges of the speaker text area in case of speech sequence nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionSpeakerHorizontalAlignment_MetaData[] = {
		{ "Category", "Graph Node Speech Sequence" },
		{ "Comment", "// The horizontal alignment of the Speaker in case the node is a speech sequence.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The horizontal alignment of the Speaker in case the node is a speech sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireThickness_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// The wire thickness of the connections between nodes.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The wire thickness of the connections between nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWireDrawBubbles_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// Flag indicating to draw the bubbles of the wire or not.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Flag indicating to draw the bubbles of the wire or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEdgeHasConditionsIcon_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// To show or not the condition icon in the case the edge has any conditions defined on it.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the condition icon in the case the edge has any conditions defined on it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEdgeText_MetaData[] = {
		{ "Category", "Graph Edge Text" },
		{ "Comment", "// To show or not the edge text\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the edge text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEdgeTextWrapAt_MetaData[] = {
		{ "Category", "Graph Edge Text" },
		{ "Comment", "// To show or not the edge text\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "To show or not the edge text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEdgeTextCharLimit_MetaData[] = {
		{ "Category", "Graph Edge Text" },
		{ "Comment", "// Limits the displayed character count if > 0\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Limits the displayed character count if > 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEdgeTextMargin_MetaData[] = {
		{ "Category", "Graph Edge Text" },
		{ "Comment", "// The amount of blank space left around the edges of the description text area.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The amount of blank space left around the edges of the description text area." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEdgeTextColor_MetaData[] = {
		{ "Category", "Graph Edge Text" },
		{ "Comment", "// The base color of the wire.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The base color of the wire." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEdgeTextBackgroundColor_MetaData[] = {
		{ "Category", "Graph Edge Text" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireBaseColor_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// The base color of the wire.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The base color of the wire." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDifferentColorForConditionWires_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// Does the wire use the condition color (if it has conditions) in the normal mode?\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Does the wire use the condition color (if it has conditions) in the normal mode?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireWithConditionsColor_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// The color of the wire if the edge has any conditions.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The color of the wire if the edge has any conditions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireHoveredColor_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// The color of the wire when hovered over\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The color of the wire when hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPrimarySecondaryEdges_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// Is the the viewing of primary/secondary edges enabled?\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Is the the viewing of primary/secondary edges enabled?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPrimaryEdges_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// Should we draw the primary edges?\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Should we draw the primary edges?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSecondaryEdges_MetaData[] = {
		{ "Category", "Graph Edge" },
		{ "Comment", "// Should we draw the secondary edges?\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "Should we draw the secondary edges?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WirePrimaryEdgeColor_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// The Color of the wire when the edge is primary.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The Color of the wire when the edge is primary." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireSecondaryEdgeColor_MetaData[] = {
		{ "Category", "Graph Edge Color" },
		{ "Comment", "// The Color of the wire when the edge is secondary.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The Color of the wire when the edge is secondary." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEventsAndConditions_MetaData[] = {
		{ "Category", "Graph Event And Condition" },
		{ "Comment", "// blueish\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "blueish" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphConditionBackgroundColor_MetaData[] = {
		{ "Category", "Graph Event And Condition" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphConditionBorderColor_MetaData[] = {
		{ "Category", "Graph Event And Condition" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphConditionTextColor_MetaData[] = {
		{ "Category", "Graph Edge Text" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphConditionBorderSize_MetaData[] = {
		{ "Category", "Graph Event And Condition" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphConditionTextMargin_MetaData[] = {
		{ "Category", "Graph Event And Condition" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEventBackgroundColor_MetaData[] = {
		{ "Category", "Graph Event And Condition" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEventBorderColor_MetaData[] = {
		{ "Category", "Graph Event And Condition" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEventTextColor_MetaData[] = {
		{ "Category", "Graph Event And Condition" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEventBorderSize_MetaData[] = {
		{ "Category", "Graph Event And Condition" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphEventTextMargin_MetaData[] = {
		{ "Category", "Graph Event And Condition" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetBetweenColumnsX_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "// The offset on the X axis (left/right) to use when automatically positioning nodes.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The offset on the X axis (left/right) to use when automatically positioning nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetBetweenRowsY_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "// The offset on the Y axis (up/down) to use when automatically positioning nodes.\n" },
		{ "ModuleRelativePath", "DlgSystemSettings.h" },
		{ "ToolTip", "The offset on the Y axis (up/down) to use when automatically positioning nodes." },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgSystemSettings constinit property declarations ***********************
	static void NewProp_bClearDialogueHistoryAutomatically_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bClearDialogueHistoryAutomatically = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearDialogueHistoryAutomatically;
	static void NewProp_bRegisterDialogueConsoleCommandsAutomatically_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bRegisterDialogueConsoleCommandsAutomatically = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterDialogueConsoleCommandsAutomatically;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NoSatisfiedChildBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NoSatisfiedChildBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueTextFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueTextFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueTextInputKeyForNewLine_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueTextInputKeyForNewLine;
	static void NewProp_bAutoSetDefaultParticipantClasses_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bAutoSetDefaultParticipantClasses = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetDefaultParticipantClasses;
	static void NewProp_bShowNodeData_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowNodeData = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNodeData;
	static void NewProp_bShowEdgeData_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowEdgeData = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEdgeData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueSpeakerStateVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueSpeakerStateVisibility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueDisplayedVoiceFields_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueDisplayedVoiceFields;
	static void NewProp_bShowGenericData_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowGenericData = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGenericData;
	static void NewProp_bShowAdvancedChildren_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowAdvancedChildren = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAdvancedChildren;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BlacklistedReflectionClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlacklistedReflectionClasses;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultCustomNodeDataClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClassPickerDisplayMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClassPickerDisplayMode;
	static void NewProp_bBatchOnlyInGameDialogues_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bBatchOnlyInGameDialogues = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBatchOnlyInGameDialogues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalTextFormatFileExtensionsToLookFor_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AdditionalTextFormatFileExtensionsToLookFor;
	static void NewProp_bSetDefaultEdgeTexts_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bSetDefaultEdgeTexts = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDefaultEdgeTexts;
	static void NewProp_bSetDefaultEdgeTextOnFirstChildOnly_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bSetDefaultEdgeTextOnFirstChildOnly = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDefaultEdgeTextOnFirstChildOnly;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultTextEdgeToEndNode;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultTextEdgeToNormalNode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueTextNamespaceLocalization_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueTextNamespaceLocalization;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueTextGlobalNamespaceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueTextPrefixNamespaceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizationIgnoredStrings_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LocalizationIgnoredStrings;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LocalizationRemapSourceStringsToTexts_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizationRemapSourceStringsToTexts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LocalizationRemapSourceStringsToTexts;
	static void NewProp_bEnableMessageLog_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bEnableMessageLog = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMessageLog;
	static void NewProp_bMessageLogMirrorToOutputLog_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bMessageLogMirrorToOutputLog = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMessageLogMirrorToOutputLog;
	static void NewProp_bMessageLogOpen_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bMessageLogOpen = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMessageLogOpen;
	static void NewProp_bEnableOutputLog_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bEnableOutputLog = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOutputLog;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RedirectMessageLogLevelsHigherThan_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RedirectMessageLogLevelsHigherThan;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OpenMessageLogLevelsHigherThan_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OpenMessageLogLevelsHigherThan;
	static void NewProp_bHideEmptyDialogueBrowserCategories_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bHideEmptyDialogueBrowserCategories = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideEmptyDialogueBrowserCategories;
	static void NewProp_bShowExternalURLsToolbar_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowExternalURLsToolbar = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowExternalURLsToolbar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DescriptionWrapTextAt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DescriptionTextMargin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TitleHorizontalAlignment;
	static void NewProp_bShowHasEnterConditionsIcon_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowHasEnterConditionsIcon = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHasEnterConditionsIcon;
	static void NewProp_bShowHasEnterEventsIcon_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowHasEnterEventsIcon = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHasEnterEventsIcon;
	static void NewProp_bShowHasVoiceIcon_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowHasVoiceIcon = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHasVoiceIcon;
	static void NewProp_bShowHasGenericDataIcon_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowHasGenericDataIcon = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHasGenericDataIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualParentNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorFirstNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorRandomNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechSequenceNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyNodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderHoveredBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackgroundColorNoChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderHoveredBackgroundColorNoChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackgroundColorHighlighted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DescriptionSpeakerMargin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DescriptionSpeakerHorizontalAlignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WireThickness;
	static void NewProp_bWireDrawBubbles_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bWireDrawBubbles = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWireDrawBubbles;
	static void NewProp_bShowEdgeHasConditionsIcon_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowEdgeHasConditionsIcon = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEdgeHasConditionsIcon;
	static void NewProp_bShowEdgeText_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowEdgeText = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEdgeText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GraphEdgeTextWrapAt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphEdgeTextCharLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEdgeTextMargin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEdgeTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEdgeTextBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireBaseColor;
	static void NewProp_bShowDifferentColorForConditionWires_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowDifferentColorForConditionWires = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDifferentColorForConditionWires;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireWithConditionsColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireHoveredColor;
	static void NewProp_bShowPrimarySecondaryEdges_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowPrimarySecondaryEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPrimarySecondaryEdges;
	static void NewProp_bDrawPrimaryEdges_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bDrawPrimaryEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPrimaryEdges;
	static void NewProp_bDrawSecondaryEdges_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bDrawSecondaryEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSecondaryEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WirePrimaryEdgeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireSecondaryEdgeColor;
	static void NewProp_bShowEventsAndConditions_SetBit(void* Obj)
	{
		((UDlgSystemSettings*)Obj)->bShowEventsAndConditions = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEventsAndConditions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphConditionBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphConditionBorderColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphConditionTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphConditionBorderSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphConditionTextMargin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEventBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEventBorderColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEventTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEventBorderSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEventTextMargin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetBetweenColumnsX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetBetweenRowsY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgSystemSettings constinit property declarations *************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgSystemSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgSystemSettings Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClearDialogueHistoryAutomatically = { "bClearDialogueHistoryAutomatically", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bClearDialogueHistoryAutomatically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearDialogueHistoryAutomatically_MetaData), NewProp_bClearDialogueHistoryAutomatically_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRegisterDialogueConsoleCommandsAutomatically = { "bRegisterDialogueConsoleCommandsAutomatically", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bRegisterDialogueConsoleCommandsAutomatically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegisterDialogueConsoleCommandsAutomatically_MetaData), NewProp_bRegisterDialogueConsoleCommandsAutomatically_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NoSatisfiedChildBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NoSatisfiedChildBehavior = { "NoSatisfiedChildBehavior", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, NoSatisfiedChildBehavior), Z_Construct_UEnum_DlgSystem_EDlgNoSatisfiedChildBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoSatisfiedChildBehavior_MetaData), NewProp_NoSatisfiedChildBehavior_MetaData) }; // c007a3fe650a54e4e17c34b58dba7abee095c047
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DialogueTextFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DialogueTextFormat = { "DialogueTextFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueTextFormat), Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueTextFormat_MetaData), NewProp_DialogueTextFormat_MetaData) }; // a50120940a1fa3f29b0a6fb28c1312d9639c42bd
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DialogueTextInputKeyForNewLine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DialogueTextInputKeyForNewLine = { "DialogueTextInputKeyForNewLine", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueTextInputKeyForNewLine), Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueTextInputKeyForNewLine_MetaData), NewProp_DialogueTextInputKeyForNewLine_MetaData) }; // 439b5f877e4e539d5393ced8c88d0b8d7ef46463
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoSetDefaultParticipantClasses = { "bAutoSetDefaultParticipantClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bAutoSetDefaultParticipantClasses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSetDefaultParticipantClasses_MetaData), NewProp_bAutoSetDefaultParticipantClasses_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowNodeData = { "bShowNodeData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowNodeData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowNodeData_MetaData), NewProp_bShowNodeData_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowEdgeData = { "bShowEdgeData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowEdgeData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEdgeData_MetaData), NewProp_bShowEdgeData_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DialogueSpeakerStateVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DialogueSpeakerStateVisibility = { "DialogueSpeakerStateVisibility", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueSpeakerStateVisibility), Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueSpeakerStateVisibility_MetaData), NewProp_DialogueSpeakerStateVisibility_MetaData) }; // ffdcf0b180c10440165bf17caf381f5e618bcf63
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DialogueDisplayedVoiceFields_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DialogueDisplayedVoiceFields = { "DialogueDisplayedVoiceFields", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueDisplayedVoiceFields), Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueDisplayedVoiceFields_MetaData), NewProp_DialogueDisplayedVoiceFields_MetaData) }; // 3a5879a6bdf7f869a24823c7e107f75eda326e0b
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowGenericData = { "bShowGenericData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowGenericData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGenericData_MetaData), NewProp_bShowGenericData_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowAdvancedChildren = { "bShowAdvancedChildren", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowAdvancedChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowAdvancedChildren_MetaData), NewProp_bShowAdvancedChildren_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_BlacklistedReflectionClasses_Inner = { "BlacklistedReflectionClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlacklistedReflectionClasses = { "BlacklistedReflectionClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, BlacklistedReflectionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlacklistedReflectionClasses_MetaData), NewProp_BlacklistedReflectionClasses_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams UHT_STATICS::NewProp_DefaultCustomNodeDataClass = { "DefaultCustomNodeDataClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DefaultCustomNodeDataClass), Z_Construct_UClass_UDlgNodeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCustomNodeDataClass_MetaData), NewProp_DefaultCustomNodeDataClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ClassPickerDisplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ClassPickerDisplayMode = { "ClassPickerDisplayMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, ClassPickerDisplayMode), Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassPickerDisplayMode_MetaData), NewProp_ClassPickerDisplayMode_MetaData) }; // eb8d998ddddb16fe340ec3e020d593e54dca4107
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBatchOnlyInGameDialogues = { "bBatchOnlyInGameDialogues", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bBatchOnlyInGameDialogues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBatchOnlyInGameDialogues_MetaData), NewProp_bBatchOnlyInGameDialogues_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AdditionalTextFormatFileExtensionsToLookFor_ElementProp = { "AdditionalTextFormatFileExtensionsToLookFor", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_AdditionalTextFormatFileExtensionsToLookFor = { "AdditionalTextFormatFileExtensionsToLookFor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, AdditionalTextFormatFileExtensionsToLookFor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalTextFormatFileExtensionsToLookFor_MetaData), NewProp_AdditionalTextFormatFileExtensionsToLookFor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSetDefaultEdgeTexts = { "bSetDefaultEdgeTexts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bSetDefaultEdgeTexts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetDefaultEdgeTexts_MetaData), NewProp_bSetDefaultEdgeTexts_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSetDefaultEdgeTextOnFirstChildOnly = { "bSetDefaultEdgeTextOnFirstChildOnly", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bSetDefaultEdgeTextOnFirstChildOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetDefaultEdgeTextOnFirstChildOnly_MetaData), NewProp_bSetDefaultEdgeTextOnFirstChildOnly_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_DefaultTextEdgeToEndNode = { "DefaultTextEdgeToEndNode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DefaultTextEdgeToEndNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTextEdgeToEndNode_MetaData), NewProp_DefaultTextEdgeToEndNode_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_DefaultTextEdgeToNormalNode = { "DefaultTextEdgeToNormalNode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DefaultTextEdgeToNormalNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTextEdgeToNormalNode_MetaData), NewProp_DefaultTextEdgeToNormalNode_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DialogueTextNamespaceLocalization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DialogueTextNamespaceLocalization = { "DialogueTextNamespaceLocalization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueTextNamespaceLocalization), Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueTextNamespaceLocalization_MetaData), NewProp_DialogueTextNamespaceLocalization_MetaData) }; // 2d9abe8907fee69aed477127e047ef1b3a86de7b
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DialogueTextGlobalNamespaceName = { "DialogueTextGlobalNamespaceName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueTextGlobalNamespaceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueTextGlobalNamespaceName_MetaData), NewProp_DialogueTextGlobalNamespaceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DialogueTextPrefixNamespaceName = { "DialogueTextPrefixNamespaceName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DialogueTextPrefixNamespaceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueTextPrefixNamespaceName_MetaData), NewProp_DialogueTextPrefixNamespaceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LocalizationIgnoredStrings_ElementProp = { "LocalizationIgnoredStrings", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_LocalizationIgnoredStrings = { "LocalizationIgnoredStrings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, LocalizationIgnoredStrings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalizationIgnoredStrings_MetaData), NewProp_LocalizationIgnoredStrings_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_LocalizationRemapSourceStringsToTexts_ValueProp = { "LocalizationRemapSourceStringsToTexts", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LocalizationRemapSourceStringsToTexts_Key_KeyProp = { "LocalizationRemapSourceStringsToTexts_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_LocalizationRemapSourceStringsToTexts = { "LocalizationRemapSourceStringsToTexts", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, LocalizationRemapSourceStringsToTexts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalizationRemapSourceStringsToTexts_MetaData), NewProp_LocalizationRemapSourceStringsToTexts_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableMessageLog = { "bEnableMessageLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bEnableMessageLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMessageLog_MetaData), NewProp_bEnableMessageLog_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMessageLogMirrorToOutputLog = { "bMessageLogMirrorToOutputLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bMessageLogMirrorToOutputLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMessageLogMirrorToOutputLog_MetaData), NewProp_bMessageLogMirrorToOutputLog_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMessageLogOpen = { "bMessageLogOpen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bMessageLogOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMessageLogOpen_MetaData), NewProp_bMessageLogOpen_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableOutputLog = { "bEnableOutputLog", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bEnableOutputLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOutputLog_MetaData), NewProp_bEnableOutputLog_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RedirectMessageLogLevelsHigherThan_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RedirectMessageLogLevelsHigherThan = { "RedirectMessageLogLevelsHigherThan", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, RedirectMessageLogLevelsHigherThan), Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedirectMessageLogLevelsHigherThan_MetaData), NewProp_RedirectMessageLogLevelsHigherThan_MetaData) }; // 3d86791fbb2a1d9a041906a2849ae466f9741ffd
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OpenMessageLogLevelsHigherThan_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OpenMessageLogLevelsHigherThan = { "OpenMessageLogLevelsHigherThan", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, OpenMessageLogLevelsHigherThan), Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenMessageLogLevelsHigherThan_MetaData), NewProp_OpenMessageLogLevelsHigherThan_MetaData) }; // 3d86791fbb2a1d9a041906a2849ae466f9741ffd
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHideEmptyDialogueBrowserCategories = { "bHideEmptyDialogueBrowserCategories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bHideEmptyDialogueBrowserCategories_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideEmptyDialogueBrowserCategories_MetaData), NewProp_bHideEmptyDialogueBrowserCategories_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowExternalURLsToolbar = { "bShowExternalURLsToolbar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowExternalURLsToolbar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowExternalURLsToolbar_MetaData), NewProp_bShowExternalURLsToolbar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DescriptionWrapTextAt = { "DescriptionWrapTextAt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DescriptionWrapTextAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionWrapTextAt_MetaData), NewProp_DescriptionWrapTextAt_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DescriptionTextMargin = { "DescriptionTextMargin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DescriptionTextMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionTextMargin_MetaData), NewProp_DescriptionTextMargin_MetaData) }; // e053c82a2bec9f2134e5372b3e38e80abbf94847
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TitleHorizontalAlignment = { "TitleHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, TitleHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleHorizontalAlignment_MetaData), NewProp_TitleHorizontalAlignment_MetaData) }; // 3f023049cc80e43da7923f57b30f243ac6f1902f
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowHasEnterConditionsIcon = { "bShowHasEnterConditionsIcon", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowHasEnterConditionsIcon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowHasEnterConditionsIcon_MetaData), NewProp_bShowHasEnterConditionsIcon_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowHasEnterEventsIcon = { "bShowHasEnterEventsIcon", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowHasEnterEventsIcon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowHasEnterEventsIcon_MetaData), NewProp_bShowHasEnterEventsIcon_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowHasVoiceIcon = { "bShowHasVoiceIcon", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowHasVoiceIcon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowHasVoiceIcon_MetaData), NewProp_bShowHasVoiceIcon_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowHasGenericDataIcon = { "bShowHasGenericDataIcon", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowHasGenericDataIcon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowHasGenericDataIcon_MetaData), NewProp_bShowHasGenericDataIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpeechNodeColor = { "SpeechNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, SpeechNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeechNodeColor_MetaData), NewProp_SpeechNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RootNodeColor = { "RootNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, RootNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNodeColor_MetaData), NewProp_RootNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EndNodeColor = { "EndNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, EndNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndNodeColor_MetaData), NewProp_EndNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_VirtualParentNodeColor = { "VirtualParentNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, VirtualParentNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualParentNodeColor_MetaData), NewProp_VirtualParentNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SelectorFirstNodeColor = { "SelectorFirstNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, SelectorFirstNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorFirstNodeColor_MetaData), NewProp_SelectorFirstNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SelectorRandomNodeColor = { "SelectorRandomNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, SelectorRandomNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorRandomNodeColor_MetaData), NewProp_SelectorRandomNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpeechSequenceNodeColor = { "SpeechSequenceNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, SpeechSequenceNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeechSequenceNodeColor_MetaData), NewProp_SpeechSequenceNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ProxyNodeColor = { "ProxyNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, ProxyNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyNodeColor_MetaData), NewProp_ProxyNodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BorderBackgroundColor = { "BorderBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, BorderBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderBackgroundColor_MetaData), NewProp_BorderBackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BorderHoveredBackgroundColor = { "BorderHoveredBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, BorderHoveredBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderHoveredBackgroundColor_MetaData), NewProp_BorderHoveredBackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BorderBackgroundColorNoChildren = { "BorderBackgroundColorNoChildren", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, BorderBackgroundColorNoChildren), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderBackgroundColorNoChildren_MetaData), NewProp_BorderBackgroundColorNoChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BorderHoveredBackgroundColorNoChildren = { "BorderHoveredBackgroundColorNoChildren", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, BorderHoveredBackgroundColorNoChildren), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderHoveredBackgroundColorNoChildren_MetaData), NewProp_BorderHoveredBackgroundColorNoChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BorderBackgroundColorHighlighted = { "BorderBackgroundColorHighlighted", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, BorderBackgroundColorHighlighted), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderBackgroundColorHighlighted_MetaData), NewProp_BorderBackgroundColorHighlighted_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DescriptionSpeakerMargin = { "DescriptionSpeakerMargin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DescriptionSpeakerMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionSpeakerMargin_MetaData), NewProp_DescriptionSpeakerMargin_MetaData) }; // e053c82a2bec9f2134e5372b3e38e80abbf94847
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DescriptionSpeakerHorizontalAlignment = { "DescriptionSpeakerHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, DescriptionSpeakerHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionSpeakerHorizontalAlignment_MetaData), NewProp_DescriptionSpeakerHorizontalAlignment_MetaData) }; // 3f023049cc80e43da7923f57b30f243ac6f1902f
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WireThickness = { "WireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, WireThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireThickness_MetaData), NewProp_WireThickness_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWireDrawBubbles = { "bWireDrawBubbles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bWireDrawBubbles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWireDrawBubbles_MetaData), NewProp_bWireDrawBubbles_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowEdgeHasConditionsIcon = { "bShowEdgeHasConditionsIcon", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowEdgeHasConditionsIcon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEdgeHasConditionsIcon_MetaData), NewProp_bShowEdgeHasConditionsIcon_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowEdgeText = { "bShowEdgeText", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowEdgeText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEdgeText_MetaData), NewProp_bShowEdgeText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GraphEdgeTextWrapAt = { "GraphEdgeTextWrapAt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphEdgeTextWrapAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEdgeTextWrapAt_MetaData), NewProp_GraphEdgeTextWrapAt_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GraphEdgeTextCharLimit = { "GraphEdgeTextCharLimit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphEdgeTextCharLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEdgeTextCharLimit_MetaData), NewProp_GraphEdgeTextCharLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphEdgeTextMargin = { "GraphEdgeTextMargin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphEdgeTextMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEdgeTextMargin_MetaData), NewProp_GraphEdgeTextMargin_MetaData) }; // e053c82a2bec9f2134e5372b3e38e80abbf94847
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphEdgeTextColor = { "GraphEdgeTextColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphEdgeTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEdgeTextColor_MetaData), NewProp_GraphEdgeTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphEdgeTextBackgroundColor = { "GraphEdgeTextBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphEdgeTextBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEdgeTextBackgroundColor_MetaData), NewProp_GraphEdgeTextBackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WireBaseColor = { "WireBaseColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, WireBaseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireBaseColor_MetaData), NewProp_WireBaseColor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowDifferentColorForConditionWires = { "bShowDifferentColorForConditionWires", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowDifferentColorForConditionWires_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDifferentColorForConditionWires_MetaData), NewProp_bShowDifferentColorForConditionWires_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WireWithConditionsColor = { "WireWithConditionsColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, WireWithConditionsColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireWithConditionsColor_MetaData), NewProp_WireWithConditionsColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WireHoveredColor = { "WireHoveredColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, WireHoveredColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireHoveredColor_MetaData), NewProp_WireHoveredColor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowPrimarySecondaryEdges = { "bShowPrimarySecondaryEdges", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowPrimarySecondaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPrimarySecondaryEdges_MetaData), NewProp_bShowPrimarySecondaryEdges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawPrimaryEdges = { "bDrawPrimaryEdges", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bDrawPrimaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawPrimaryEdges_MetaData), NewProp_bDrawPrimaryEdges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawSecondaryEdges = { "bDrawSecondaryEdges", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bDrawSecondaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawSecondaryEdges_MetaData), NewProp_bDrawSecondaryEdges_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WirePrimaryEdgeColor = { "WirePrimaryEdgeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, WirePrimaryEdgeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WirePrimaryEdgeColor_MetaData), NewProp_WirePrimaryEdgeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WireSecondaryEdgeColor = { "WireSecondaryEdgeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, WireSecondaryEdgeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireSecondaryEdgeColor_MetaData), NewProp_WireSecondaryEdgeColor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowEventsAndConditions = { "bShowEventsAndConditions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgSystemSettings), &UHT_STATICS::NewProp_bShowEventsAndConditions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEventsAndConditions_MetaData), NewProp_bShowEventsAndConditions_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphConditionBackgroundColor = { "GraphConditionBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphConditionBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphConditionBackgroundColor_MetaData), NewProp_GraphConditionBackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphConditionBorderColor = { "GraphConditionBorderColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphConditionBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphConditionBorderColor_MetaData), NewProp_GraphConditionBorderColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphConditionTextColor = { "GraphConditionTextColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphConditionTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphConditionTextColor_MetaData), NewProp_GraphConditionTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphConditionBorderSize = { "GraphConditionBorderSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphConditionBorderSize), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphConditionBorderSize_MetaData), NewProp_GraphConditionBorderSize_MetaData) }; // e053c82a2bec9f2134e5372b3e38e80abbf94847
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphConditionTextMargin = { "GraphConditionTextMargin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphConditionTextMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphConditionTextMargin_MetaData), NewProp_GraphConditionTextMargin_MetaData) }; // e053c82a2bec9f2134e5372b3e38e80abbf94847
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphEventBackgroundColor = { "GraphEventBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphEventBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEventBackgroundColor_MetaData), NewProp_GraphEventBackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphEventBorderColor = { "GraphEventBorderColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphEventBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEventBorderColor_MetaData), NewProp_GraphEventBorderColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphEventTextColor = { "GraphEventTextColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphEventTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEventTextColor_MetaData), NewProp_GraphEventTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphEventBorderSize = { "GraphEventBorderSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphEventBorderSize), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEventBorderSize_MetaData), NewProp_GraphEventBorderSize_MetaData) }; // e053c82a2bec9f2134e5372b3e38e80abbf94847
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GraphEventTextMargin = { "GraphEventTextMargin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, GraphEventTextMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphEventTextMargin_MetaData), NewProp_GraphEventTextMargin_MetaData) }; // e053c82a2bec9f2134e5372b3e38e80abbf94847
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OffsetBetweenColumnsX = { "OffsetBetweenColumnsX", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, OffsetBetweenColumnsX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetBetweenColumnsX_MetaData), NewProp_OffsetBetweenColumnsX_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OffsetBetweenRowsY = { "OffsetBetweenRowsY", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgSystemSettings, OffsetBetweenRowsY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetBetweenRowsY_MetaData), NewProp_OffsetBetweenRowsY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClearDialogueHistoryAutomatically,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRegisterDialogueConsoleCommandsAutomatically,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NoSatisfiedChildBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NoSatisfiedChildBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueTextFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueTextFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueTextInputKeyForNewLine_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueTextInputKeyForNewLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoSetDefaultParticipantClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowNodeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowEdgeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueSpeakerStateVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueSpeakerStateVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueDisplayedVoiceFields_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueDisplayedVoiceFields,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowGenericData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowAdvancedChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlacklistedReflectionClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlacklistedReflectionClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultCustomNodeDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassPickerDisplayMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassPickerDisplayMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBatchOnlyInGameDialogues,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdditionalTextFormatFileExtensionsToLookFor_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdditionalTextFormatFileExtensionsToLookFor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSetDefaultEdgeTexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSetDefaultEdgeTextOnFirstChildOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultTextEdgeToEndNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultTextEdgeToNormalNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueTextNamespaceLocalization_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueTextNamespaceLocalization,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueTextGlobalNamespaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueTextPrefixNamespaceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalizationIgnoredStrings_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalizationIgnoredStrings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalizationRemapSourceStringsToTexts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalizationRemapSourceStringsToTexts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalizationRemapSourceStringsToTexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableMessageLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMessageLogMirrorToOutputLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMessageLogOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableOutputLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RedirectMessageLogLevelsHigherThan_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RedirectMessageLogLevelsHigherThan,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OpenMessageLogLevelsHigherThan_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OpenMessageLogLevelsHigherThan,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHideEmptyDialogueBrowserCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowExternalURLsToolbar,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DescriptionWrapTextAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DescriptionTextMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TitleHorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowHasEnterConditionsIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowHasEnterEventsIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowHasVoiceIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowHasGenericDataIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeechNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RootNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VirtualParentNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectorFirstNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectorRandomNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeechSequenceNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProxyNodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderHoveredBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderBackgroundColorNoChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderHoveredBackgroundColorNoChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderBackgroundColorHighlighted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DescriptionSpeakerMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DescriptionSpeakerHorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WireThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWireDrawBubbles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowEdgeHasConditionsIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowEdgeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphEdgeTextWrapAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphEdgeTextCharLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphEdgeTextMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphEdgeTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphEdgeTextBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WireBaseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowDifferentColorForConditionWires,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WireWithConditionsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WireHoveredColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowPrimarySecondaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawPrimaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawSecondaryEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WirePrimaryEdgeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WireSecondaryEdgeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowEventsAndConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphConditionBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphConditionBorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphConditionTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphConditionBorderSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphConditionTextMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphEventBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphEventBorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphEventTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphEventBorderSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphEventTextMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OffsetBetweenColumnsX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OffsetBetweenRowsY,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgSystemSettings Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDeveloperSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgSystemSettings,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgSystemSettings;
UClass* Z_Construct_UClass_UDlgSystemSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgSystemSettings;
		if (!Z_Registration_Info_UClass_UDlgSystemSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgSystemSettings"),
				Z_Registration_Info_UClass_UDlgSystemSettings.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UDlgSystemSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgSystemSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgSystemSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgSystemSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgSystemSettings);
UDlgSystemSettings::~UDlgSystemSettings() {}
// ********** End Class UDlgSystemSettings *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgSystemSettings_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystem_EDlgDialogueTextFormat, TEXT("EDlgDialogueTextFormat"), &ZRIE_EDlgDialogueTextFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2768314516U) },
		{ Z_Construct_UEnum_DlgSystem_EDlgVoiceDisplayedFields, TEXT("EDlgVoiceDisplayedFields"), &ZRIE_EDlgVoiceDisplayedFields, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 978876838U) },
		{ Z_Construct_UEnum_DlgSystem_EDlgSpeakerStateVisibility, TEXT("EDlgSpeakerStateVisibility"), &ZRIE_EDlgSpeakerStateVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4292669617U) },
		{ Z_Construct_UEnum_DlgSystem_EDlgTextInputKeyForNewLine, TEXT("EDlgTextInputKeyForNewLine"), &ZRIE_EDlgTextInputKeyForNewLine, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1134256007U) },
		{ Z_Construct_UEnum_DlgSystem_EDlgTextNamespaceLocalization, TEXT("EDlgTextNamespaceLocalization"), &ZRIE_EDlgTextNamespaceLocalization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 765116041U) },
		{ Z_Construct_UEnum_DlgSystem_EDlgClassPickerDisplayMode, TEXT("EDlgClassPickerDisplayMode"), &ZRIE_EDlgClassPickerDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3951925645U) },
		{ Z_Construct_UEnum_DlgSystem_EDlgNoSatisfiedChildBehavior, TEXT("EDlgNoSatisfiedChildBehavior"), &ZRIE_EDlgNoSatisfiedChildBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3221726206U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgSystemSettings, TEXT("UDlgSystemSettings"), &Z_Registration_Info_UClass_UDlgSystemSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgSystemSettings), 1024037532U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgSystemSettings_h__Script_DlgSystem_a7a5737fa6babbbd9246d25a12ef87377ed44050{
	TEXT("/Script/DlgSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
