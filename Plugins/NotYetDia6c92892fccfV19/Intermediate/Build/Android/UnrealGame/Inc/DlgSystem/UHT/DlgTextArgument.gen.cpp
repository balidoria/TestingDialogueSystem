// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgTextArgument.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgTextArgument() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustom(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EDlgTextArgumentType ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgTextArgumentType>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassFloat.Comment", "// Gets the value from the Participant Float Variable\n" },
		{ "ClassFloat.DisplayName", "Class Float Variable" },
		{ "ClassFloat.Name", "EDlgTextArgumentType::ClassFloat" },
		{ "ClassFloat.ToolTip", "Gets the value from the Participant Float Variable" },
		{ "ClassInt.Comment", "// Gets the value from the Participant Int Variable\n" },
		{ "ClassInt.DisplayName", "Class Int Variable" },
		{ "ClassInt.Name", "EDlgTextArgumentType::ClassInt" },
		{ "ClassInt.ToolTip", "Gets the value from the Participant Int Variable" },
		{ "ClassText.Comment", "// Gets the value from the Participant Text Variable\n" },
		{ "ClassText.DisplayName", "Class Text Variable" },
		{ "ClassText.Name", "EDlgTextArgumentType::ClassText" },
		{ "ClassText.ToolTip", "Gets the value from the Participant Text Variable" },
		{ "Comment", "// Argument type, which defines both the type of the argument and the way the system will acquire the value\n// NOTE: the values are out of order here for backwards compatibility\n" },
		{ "Custom.Comment", "// User Defined Text Argument, calls GetText on the custom text argument object.\n//\n// 1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n// 2. Override GetText\n" },
		{ "Custom.DisplayName", "Custom Text Argument" },
		{ "Custom.Name", "EDlgTextArgumentType::Custom" },
		{ "Custom.ToolTip", "User Defined Text Argument, calls GetText on the custom text argument object.\n\n1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n2. Override GetText" },
		{ "DialogueFloat.Comment", "// Calls GetFloatValue on the Participant\n" },
		{ "DialogueFloat.DisplayName", "Dialogue Float Value" },
		{ "DialogueFloat.Name", "EDlgTextArgumentType::DialogueFloat" },
		{ "DialogueFloat.ToolTip", "Calls GetFloatValue on the Participant" },
		{ "DialogueInt.Comment", "// Calls GetIntValue on the Participant\n" },
		{ "DialogueInt.DisplayName", "Dialogue Int Value" },
		{ "DialogueInt.Name", "EDlgTextArgumentType::DialogueInt" },
		{ "DialogueInt.ToolTip", "Calls GetIntValue on the Participant" },
		{ "DisplayName.Comment", "// Calls GetParticipantDisplayName on the Participant\n" },
		{ "DisplayName.DisplayName", "Participant Display Name" },
		{ "DisplayName.Name", "EDlgTextArgumentType::DisplayName" },
		{ "DisplayName.ToolTip", "Calls GetParticipantDisplayName on the Participant" },
		{ "Gender.Comment", "// Calls GetParticipantGender on the Participant\n" },
		{ "Gender.DisplayName", "Participant Gender" },
		{ "Gender.Name", "EDlgTextArgumentType::Gender" },
		{ "Gender.ToolTip", "Calls GetParticipantGender on the Participant" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
		{ "ToolTip", "Argument type, which defines both the type of the argument and the way the system will acquire the value\nNOTE: the values are out of order here for backwards compatibility" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgTextArgumentType::DisplayName", (int64)EDlgTextArgumentType::DisplayName },
		{ "EDlgTextArgumentType::Gender", (int64)EDlgTextArgumentType::Gender },
		{ "EDlgTextArgumentType::DialogueInt", (int64)EDlgTextArgumentType::DialogueInt },
		{ "EDlgTextArgumentType::DialogueFloat", (int64)EDlgTextArgumentType::DialogueFloat },
		{ "EDlgTextArgumentType::ClassInt", (int64)EDlgTextArgumentType::ClassInt },
		{ "EDlgTextArgumentType::ClassFloat", (int64)EDlgTextArgumentType::ClassFloat },
		{ "EDlgTextArgumentType::ClassText", (int64)EDlgTextArgumentType::ClassText },
		{ "EDlgTextArgumentType::Custom", (int64)EDlgTextArgumentType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgTextArgumentType",
	"EDlgTextArgumentType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgTextArgumentType;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgTextArgumentType.OuterSingleton)
		{
			ZRIE_EDlgTextArgumentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgTextArgumentType"));
		}
		return ZRIE_EDlgTextArgumentType.OuterSingleton;
	}
	if (!ZRIE_EDlgTextArgumentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgTextArgumentType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgTextArgumentType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgTextArgumentType ********************************************************

// ********** Begin ScriptStruct FDlgTextArgument **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgTextArgument_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgTextArgument>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgTextArgument); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An argument is a variable to extend node texts with dynamic values runtime\n * It can be inserted to the FText, the same way FText::Format works\n * See: https://docs.unrealengine.com/en-us/Gameplay/Localization/Formatting\n */" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
		{ "ToolTip", "An argument is a variable to extend node texts with dynamic values runtime\nIt can be inserted to the FText, the same way FText::Format works\nSee: https://docs.unrealengine.com/en-us/Gameplay/Localization/Formatting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayString_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTextArgument_MetaData[] = {
		{ "Category", "Dialogue|TextArgument" },
		{ "Comment", "// User Defined Text Argument, calls GetText on the custom text argument object.\n//\n// 1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n// 2. Override GetText\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgTextArgument.h" },
		{ "ToolTip", "User Defined Text Argument, calls GetText on the custom text argument object.\n\n1. Create a new Blueprint derived from DlgTextArgumentCustom (or DlgTextArgumentCustomHideCategories)\n2. Override GetText" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgTextArgument constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomTextArgument;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgTextArgument constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTextArgument>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgTextArgument Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DisplayString = { "DisplayString", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTextArgument, DisplayString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayString_MetaData), NewProp_DisplayString_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTextArgument, Type), Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // fadca8c8dd6e60bffce70f4e18265a7c7214af0b
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTextArgument, ParticipantName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantName_MetaData), NewProp_ParticipantName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTextArgument, VariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableName_MetaData), NewProp_VariableName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CustomTextArgument = { "CustomTextArgument", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTextArgument, CustomTextArgument), Z_Construct_UClass_UDlgTextArgumentCustom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTextArgument_MetaData), NewProp_CustomTextArgument_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DisplayString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomTextArgument,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgTextArgument Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgTextArgument",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgTextArgument>(),
	alignof(FDlgTextArgument),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgTextArgument;
UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgTextArgument.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgTextArgument.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTextArgument, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgTextArgument"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgTextArgument.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgTextArgument.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgTextArgument.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgTextArgument.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgTextArgument ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgTextArgument_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystem_EDlgTextArgumentType, TEXT("EDlgTextArgumentType"), &ZRIE_EDlgTextArgumentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4208765128U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgTextArgument, Z_Construct_UScriptStruct_FDlgTextArgument_Statics::NewStructOps, TEXT("DlgTextArgument"),&Z_Registration_Info_UScriptStruct_FDlgTextArgument, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTextArgument), 875233951U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgTextArgument_h__Script_DlgSystem_28b07cae4eaffefd72a7ce1f4cb1838a8170d4f8{
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
