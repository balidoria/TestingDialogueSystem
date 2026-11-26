// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DlgSystemSettings.h"

#ifdef DLGSYSTEM_DlgSystemSettings_generated_h
#error "DlgSystemSettings.generated.h already included, missing '#pragma once' in DlgSystemSettings.h"
#endif
#define DLGSYSTEM_DlgSystemSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDlgSystemSettings *******************************************************
struct Z_Construct_UClass_UDlgSystemSettings_Statics;
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgSystemSettings(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgSystemSettings_h_141_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDlgSystemSettings_Statics; \
	friend DLGSYSTEM_API UClass* ::Z_Construct_UClass_UDlgSystemSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDlgSystemSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DlgSystem"), Z_Construct_UClass_UDlgSystemSettings) \
	DECLARE_SERIALIZER(UDlgSystemSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgSystemSettings_h_141_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDlgSystemSettings(UDlgSystemSettings&&) = delete; \
	UDlgSystemSettings(const UDlgSystemSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgSystemSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgSystemSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDlgSystemSettings) \
	NO_API virtual ~UDlgSystemSettings();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgSystemSettings_h_138_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgSystemSettings_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgSystemSettings_h_141_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgSystemSettings_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDlgSystemSettings;

// ********** End Class UDlgSystemSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgSystemSettings_h

// ********** Begin Enum EDlgDialogueTextFormat ****************************************************
#define FOREACH_ENUM_EDLGDIALOGUETEXTFORMAT(op) \
	op(EDlgDialogueTextFormat::None) \
	op(EDlgDialogueTextFormat::All) \
	op(EDlgDialogueTextFormat::DialogueDEPRECATED) \
	op(EDlgDialogueTextFormat::StartTextFormats) \
	op(EDlgDialogueTextFormat::JSON) \
	op(EDlgDialogueTextFormat::NumTextFormats) 

enum class EDlgDialogueTextFormat : uint8;
template<> struct TIsUEnumClass<EDlgDialogueTextFormat> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgDialogueTextFormat>();
// ********** End Enum EDlgDialogueTextFormat ******************************************************

// ********** Begin Enum EDlgVoiceDisplayedFields **************************************************
#define FOREACH_ENUM_EDLGVOICEDISPLAYEDFIELDS(op) \
	op(EDlgVoiceDisplayedFields::None) \
	op(EDlgVoiceDisplayedFields::SoundWave) \
	op(EDlgVoiceDisplayedFields::DialogueWave) \
	op(EDlgVoiceDisplayedFields::SoundWaveAndDialogueWave) 

enum class EDlgVoiceDisplayedFields : uint8;
template<> struct TIsUEnumClass<EDlgVoiceDisplayedFields> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgVoiceDisplayedFields>();
// ********** End Enum EDlgVoiceDisplayedFields ****************************************************

// ********** Begin Enum EDlgSpeakerStateVisibility ************************************************
#define FOREACH_ENUM_EDLGSPEAKERSTATEVISIBILITY(op) \
	op(EDlgSpeakerStateVisibility::HideAll) \
	op(EDlgSpeakerStateVisibility::ShowOnEdge) \
	op(EDlgSpeakerStateVisibility::ShowOnNode) \
	op(EDlgSpeakerStateVisibility::ShowOnNodeAndEdge) 

enum class EDlgSpeakerStateVisibility : uint8;
template<> struct TIsUEnumClass<EDlgSpeakerStateVisibility> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgSpeakerStateVisibility>();
// ********** End Enum EDlgSpeakerStateVisibility **************************************************

// ********** Begin Enum EDlgTextInputKeyForNewLine ************************************************
#define FOREACH_ENUM_EDLGTEXTINPUTKEYFORNEWLINE(op) \
	op(EDlgTextInputKeyForNewLine::Enter) \
	op(EDlgTextInputKeyForNewLine::ShiftPlusEnter) 

enum class EDlgTextInputKeyForNewLine : uint8;
template<> struct TIsUEnumClass<EDlgTextInputKeyForNewLine> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgTextInputKeyForNewLine>();
// ********** End Enum EDlgTextInputKeyForNewLine **************************************************

// ********** Begin Enum EDlgTextNamespaceLocalization *********************************************
#define FOREACH_ENUM_EDLGTEXTNAMESPACELOCALIZATION(op) \
	op(EDlgTextNamespaceLocalization::Ignore) \
	op(EDlgTextNamespaceLocalization::PerDialogue) \
	op(EDlgTextNamespaceLocalization::WithPrefixPerDialogue) \
	op(EDlgTextNamespaceLocalization::Global) 

enum class EDlgTextNamespaceLocalization : uint8;
template<> struct TIsUEnumClass<EDlgTextNamespaceLocalization> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgTextNamespaceLocalization>();
// ********** End Enum EDlgTextNamespaceLocalization ***********************************************

// ********** Begin Enum EDlgClassPickerDisplayMode ************************************************
#define FOREACH_ENUM_EDLGCLASSPICKERDISPLAYMODE(op) \
	op(EDlgClassPickerDisplayMode::DefaultView) \
	op(EDlgClassPickerDisplayMode::TreeView) \
	op(EDlgClassPickerDisplayMode::ListView) 

enum class EDlgClassPickerDisplayMode : uint8;
template<> struct TIsUEnumClass<EDlgClassPickerDisplayMode> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgClassPickerDisplayMode>();
// ********** End Enum EDlgClassPickerDisplayMode **************************************************

// ********** Begin Enum EDlgNoSatisfiedChildBehavior **********************************************
#define FOREACH_ENUM_EDLGNOSATISFIEDCHILDBEHAVIOR(op) \
	op(EDlgNoSatisfiedChildBehavior::PrintErrorAndEndDialogue) \
	op(EDlgNoSatisfiedChildBehavior::EndDialogue) \
	op(EDlgNoSatisfiedChildBehavior::ContinueDialogue) 

enum class EDlgNoSatisfiedChildBehavior : uint8;
template<> struct TIsUEnumClass<EDlgNoSatisfiedChildBehavior> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgNoSatisfiedChildBehavior>();
// ********** End Enum EDlgNoSatisfiedChildBehavior ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
