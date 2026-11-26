// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgDialogueParticipantData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgDialogueParticipantData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FDlgParticipantData ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgParticipantData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgParticipantData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgParticipantData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structure useful to cache all the names used by a participant\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Structure useful to cache all the names used by a participant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// FName based conditions (aka conditions of type EventCall).\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "FName based conditions (aka conditions of type EventCall)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomConditions_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Custom Conditions UClasses of type UDlgConditionCustom\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Custom Conditions UClasses of type UDlgConditionCustom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// FName based events (aka events of type EDlgEventType)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "FName based events (aka events of type EDlgEventType)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealFunctions_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Unreal Function based events\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Unreal Function based events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEvents_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Custom Events UClasses of type UDlgEventCustom\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Custom Events UClasses of type UDlgEventCustom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTextArguments_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Custom Events UClasses of type UDlgTextArgumentCustom\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Custom Events UClasses of type UDlgTextArgumentCustom" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Integers used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Integers used in a Dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Floats used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Floats used in a Dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Booleans used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Booleans used in a Dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Names used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Names used in a Dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassIntVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Integers used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Integers used in a Dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassFloatVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Floats used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Floats used in a Dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassBoolVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Booleans used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Booleans used in a Dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassNameVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Names used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Names used in a Dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassTextVariableNames_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// Class Texts used in a Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipantData.h" },
		{ "ToolTip", "Class Texts used in a Dialogue" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgParticipantData constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Conditions_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Conditions;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomConditions_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CustomConditions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Events_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Events;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnrealFunctions_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_UnrealFunctions;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomEvents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CustomEvents;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomTextArguments_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CustomTextArguments;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IntVariableNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_IntVariableNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FloatVariableNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_FloatVariableNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoolVariableNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_BoolVariableNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameVariableNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_NameVariableNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassIntVariableNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClassIntVariableNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassFloatVariableNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClassFloatVariableNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassBoolVariableNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClassBoolVariableNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassNameVariableNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClassNameVariableNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClassTextVariableNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClassTextVariableNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgParticipantData constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgParticipantData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgParticipantData Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Conditions_ElementProp = { "Conditions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, Conditions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_MetaData), NewProp_Conditions_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CustomConditions_ElementProp = { "CustomConditions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_CustomConditions = { "CustomConditions", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, CustomConditions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomConditions_MetaData), NewProp_CustomConditions_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Events_ElementProp = { "Events", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, Events), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_UnrealFunctions_ElementProp = { "UnrealFunctions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_UnrealFunctions = { "UnrealFunctions", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, UnrealFunctions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealFunctions_MetaData), NewProp_UnrealFunctions_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CustomEvents_ElementProp = { "CustomEvents", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_CustomEvents = { "CustomEvents", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, CustomEvents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEvents_MetaData), NewProp_CustomEvents_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CustomTextArguments_ElementProp = { "CustomTextArguments", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_CustomTextArguments = { "CustomTextArguments", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, CustomTextArguments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTextArguments_MetaData), NewProp_CustomTextArguments_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_IntVariableNames_ElementProp = { "IntVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_IntVariableNames = { "IntVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, IntVariableNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntVariableNames_MetaData), NewProp_IntVariableNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_FloatVariableNames_ElementProp = { "FloatVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_FloatVariableNames = { "FloatVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, FloatVariableNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatVariableNames_MetaData), NewProp_FloatVariableNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BoolVariableNames_ElementProp = { "BoolVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_BoolVariableNames = { "BoolVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, BoolVariableNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolVariableNames_MetaData), NewProp_BoolVariableNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameVariableNames_ElementProp = { "NameVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_NameVariableNames = { "NameVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, NameVariableNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameVariableNames_MetaData), NewProp_NameVariableNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ClassIntVariableNames_ElementProp = { "ClassIntVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ClassIntVariableNames = { "ClassIntVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, ClassIntVariableNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassIntVariableNames_MetaData), NewProp_ClassIntVariableNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ClassFloatVariableNames_ElementProp = { "ClassFloatVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ClassFloatVariableNames = { "ClassFloatVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, ClassFloatVariableNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassFloatVariableNames_MetaData), NewProp_ClassFloatVariableNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ClassBoolVariableNames_ElementProp = { "ClassBoolVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ClassBoolVariableNames = { "ClassBoolVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, ClassBoolVariableNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassBoolVariableNames_MetaData), NewProp_ClassBoolVariableNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ClassNameVariableNames_ElementProp = { "ClassNameVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ClassNameVariableNames = { "ClassNameVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, ClassNameVariableNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassNameVariableNames_MetaData), NewProp_ClassNameVariableNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ClassTextVariableNames_ElementProp = { "ClassTextVariableNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ClassTextVariableNames = { "ClassTextVariableNames", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantData, ClassTextVariableNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassTextVariableNames_MetaData), NewProp_ClassTextVariableNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Conditions_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Conditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomConditions_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Events_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Events,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnrealFunctions_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnrealFunctions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomEvents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomTextArguments_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomTextArguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntVariableNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntVariableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloatVariableNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloatVariableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoolVariableNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoolVariableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameVariableNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameVariableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassIntVariableNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassIntVariableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassFloatVariableNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassFloatVariableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassBoolVariableNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassBoolVariableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassNameVariableNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassNameVariableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassTextVariableNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClassTextVariableNames,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgParticipantData Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgParticipantData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgParticipantData>(),
	alignof(FDlgParticipantData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgParticipantData;
UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgParticipantData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgParticipantData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgParticipantData, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgParticipantData"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgParticipantData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgParticipantData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgParticipantData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgParticipantData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgParticipantData *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogueParticipantData_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgParticipantData, Z_Construct_UScriptStruct_FDlgParticipantData_Statics::NewStructOps, TEXT("DlgParticipantData"),&Z_Registration_Info_UScriptStruct_FDlgParticipantData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgParticipantData), 2982551599U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogueParticipantData_h__Script_DlgSystem_fce9f95a3449156094c98cf5140634b7e7f31dec{
	TEXT("/Script/DlgSystem"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
