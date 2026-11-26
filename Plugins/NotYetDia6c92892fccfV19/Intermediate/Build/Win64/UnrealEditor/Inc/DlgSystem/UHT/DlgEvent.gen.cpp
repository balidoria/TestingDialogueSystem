// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgEvent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgEvent() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEvent(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgEventType(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustom(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EDlgEventType *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgEventType_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgEventType>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgEventType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Comment", "// User Defined Event, calls EnterEvent on the custom event object.\n//\n// 1. Create a new Blueprint derived from DlgEventCustom (or DlgEventCustomHideCategories)\n// 2. Override EnterEvent\n" },
		{ "Custom.DisplayName", "Custom Event" },
		{ "Custom.Name", "EDlgEventType::Custom" },
		{ "Custom.ToolTip", "User Defined Event, calls EnterEvent on the custom event object.\n\n1. Create a new Blueprint derived from DlgEventCustom (or DlgEventCustomHideCategories)\n2. Override EnterEvent" },
		{ "Event.Comment", "// Calls OnDialogueEvent on the Participant\n" },
		{ "Event.DisplayName", "Event" },
		{ "Event.Name", "EDlgEventType::Event" },
		{ "Event.ToolTip", "Calls OnDialogueEvent on the Participant" },
		{ "ModifyBool.Comment", "// Calls ModifyBoolValue on the Participant\n" },
		{ "ModifyBool.DisplayName", "Modify Dialogue Bool Value" },
		{ "ModifyBool.Name", "EDlgEventType::ModifyBool" },
		{ "ModifyBool.ToolTip", "Calls ModifyBoolValue on the Participant" },
		{ "ModifyClassBoolVariable.Comment", "// Modifies the value from the Participant Bool Variable\n" },
		{ "ModifyClassBoolVariable.DisplayName", "Modify Class Bool Variable" },
		{ "ModifyClassBoolVariable.Name", "EDlgEventType::ModifyClassBoolVariable" },
		{ "ModifyClassBoolVariable.ToolTip", "Modifies the value from the Participant Bool Variable" },
		{ "ModifyClassFloatVariable.Comment", "// Modifies the value from the Participant Float Variable (Double Precision, double for c++)\n" },
		{ "ModifyClassFloatVariable.DisplayName", "Modify Class Float (Double Precision) Variable" },
		{ "ModifyClassFloatVariable.Name", "EDlgEventType::ModifyClassFloatVariable" },
		{ "ModifyClassFloatVariable.ToolTip", "Modifies the value from the Participant Float Variable (Double Precision, double for c++)" },
		{ "ModifyClassIntVariable.Comment", "// Modifies the value from the Participant Int Variable\n" },
		{ "ModifyClassIntVariable.DisplayName", "Modify Class Int Variable" },
		{ "ModifyClassIntVariable.Name", "EDlgEventType::ModifyClassIntVariable" },
		{ "ModifyClassIntVariable.ToolTip", "Modifies the value from the Participant Int Variable" },
		{ "ModifyClassNameVariable.Comment", "// Modifies the value from the Participant Name Variable\n" },
		{ "ModifyClassNameVariable.DisplayName", "Modify Class Name Variable" },
		{ "ModifyClassNameVariable.Name", "EDlgEventType::ModifyClassNameVariable" },
		{ "ModifyClassNameVariable.ToolTip", "Modifies the value from the Participant Name Variable" },
		{ "ModifyFloat.Comment", "// Calls ModifyFloatValue on the Participant\n" },
		{ "ModifyFloat.DisplayName", "Modify Dialogue Float Value" },
		{ "ModifyFloat.Name", "EDlgEventType::ModifyFloat" },
		{ "ModifyFloat.ToolTip", "Calls ModifyFloatValue on the Participant" },
		{ "ModifyInt.Comment", "// Calls ModifyIntValue on the Participant\n" },
		{ "ModifyInt.DisplayName", "Modify Dialogue Int Value" },
		{ "ModifyInt.Name", "EDlgEventType::ModifyInt" },
		{ "ModifyInt.ToolTip", "Calls ModifyIntValue on the Participant" },
		{ "ModifyName.Comment", "// Calls ModifyNameValue on the Participant\n" },
		{ "ModifyName.DisplayName", "Modify Dialogue Name Value" },
		{ "ModifyName.Name", "EDlgEventType::ModifyName" },
		{ "ModifyName.ToolTip", "Calls ModifyNameValue on the Participant" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "UnrealFunction.Comment", "// Calls a regular Function (or Event) on the Participant (without any parameters)\n" },
		{ "UnrealFunction.DisplayName", "Unreal Function" },
		{ "UnrealFunction.Name", "EDlgEventType::UnrealFunction" },
		{ "UnrealFunction.ToolTip", "Calls a regular Function (or Event) on the Participant (without any parameters)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgEventType::Event", (int64)EDlgEventType::Event },
		{ "EDlgEventType::ModifyInt", (int64)EDlgEventType::ModifyInt },
		{ "EDlgEventType::ModifyFloat", (int64)EDlgEventType::ModifyFloat },
		{ "EDlgEventType::ModifyBool", (int64)EDlgEventType::ModifyBool },
		{ "EDlgEventType::ModifyName", (int64)EDlgEventType::ModifyName },
		{ "EDlgEventType::ModifyClassIntVariable", (int64)EDlgEventType::ModifyClassIntVariable },
		{ "EDlgEventType::ModifyClassFloatVariable", (int64)EDlgEventType::ModifyClassFloatVariable },
		{ "EDlgEventType::ModifyClassBoolVariable", (int64)EDlgEventType::ModifyClassBoolVariable },
		{ "EDlgEventType::ModifyClassNameVariable", (int64)EDlgEventType::ModifyClassNameVariable },
		{ "EDlgEventType::Custom", (int64)EDlgEventType::Custom },
		{ "EDlgEventType::UnrealFunction", (int64)EDlgEventType::UnrealFunction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgEventType",
	"EDlgEventType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgEventType;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgEventType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgEventType.OuterSingleton)
		{
			ZRIE_EDlgEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgEventType, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgEventType"));
		}
		return ZRIE_EDlgEventType.OuterSingleton;
	}
	if (!ZRIE_EDlgEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgEventType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgEventType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgEventType ***************************************************************

// ********** Begin ScriptStruct FDlgEvent *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgEvent_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgEvent>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgEvent); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Events are executed via calling IDlgDialogueParticipant methods on dialogue participants\n// They must be handled in game side, can be used to modify game state based on dialogue\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "Events are executed via calling IDlgDialogueParticipant methods on dialogue participants\nThey must be handled in game side, can be used to modify game state based on dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// Name of the participant (speaker) the event is called on.\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "Name of the participant (speaker) the event is called on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// Type of the event, can be a simple event or a call to modify a bool/int/float variable\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "Type of the event, can be a simple event or a call to modify a bool/int/float variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// Name of the relevant variable or event\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "Name of the relevant variable or event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// The value the participant gets\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "The value the participant gets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// The value the participant gets\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "The value the participant gets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameValue_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// The value the participant gets\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "The value the participant gets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelta_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// Weather to add the value to the existing one, or simply override it\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "Weather to add the value to the existing one, or simply override it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// The value the participant gets\n" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "The value the participant gets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEvent_MetaData[] = {
		{ "Category", "Dialogue|Event" },
		{ "Comment", "// User Defined Event, calls EnterEvent on the custom event object.\n//\n// 1. Create a new Blueprint derived from DlgEventCustom (or DlgEventCustomHideCategories)\n// 2. Override EnterEvent\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgEvent.h" },
		{ "ToolTip", "User Defined Event, calls EnterEvent on the custom event object.\n\n1. Create a new Blueprint derived from DlgEventCustom (or DlgEventCustomHideCategories)\n2. Override EnterEvent" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgEvent constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
	static void NewProp_bDelta_SetBit(void* Obj)
	{
		((FDlgEvent*)Obj)->bDelta = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelta;
	static void NewProp_bValue_SetBit(void* Obj)
	{
		((FDlgEvent*)Obj)->bValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgEvent constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgEvent Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEvent, ParticipantName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantName_MetaData), NewProp_ParticipantName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEvent, EventType), Z_Construct_UEnum_DlgSystem_EDlgEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventType_MetaData), NewProp_EventType_MetaData) }; // cf33018e96f39a6b6924fd270d72ce2cb882a889
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEvent, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEvent, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEvent, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEvent, NameValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameValue_MetaData), NewProp_NameValue_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDelta = { "bDelta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgEvent), &UHT_STATICS::NewProp_bDelta_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelta_MetaData), NewProp_bDelta_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgEvent), &UHT_STATICS::NewProp_bValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValue_MetaData), NewProp_bValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CustomEvent = { "CustomEvent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEvent, CustomEvent), Z_Construct_UClass_UDlgEventCustom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEvent_MetaData), NewProp_CustomEvent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomEvent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgEvent Property Definitions **************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgEvent",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgEvent>(),
	alignof(FDlgEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgEvent;
UScriptStruct* Z_Construct_UScriptStruct_FDlgEvent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgEvent.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEvent, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgEvent"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgEvent.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgEvent.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgEvent.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgEvent ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgEvent_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystem_EDlgEventType, TEXT("EDlgEventType"), &ZRIE_EDlgEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3476226446U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgEvent, Z_Construct_UScriptStruct_FDlgEvent_Statics::NewStructOps, TEXT("DlgEvent"),&Z_Registration_Info_UScriptStruct_FDlgEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgEvent), 2185324927U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgEvent_h__Script_DlgSystem_6514a9fffb0314415300c1da63b1e22526998049{
	TEXT("/Script/DlgSystem"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
