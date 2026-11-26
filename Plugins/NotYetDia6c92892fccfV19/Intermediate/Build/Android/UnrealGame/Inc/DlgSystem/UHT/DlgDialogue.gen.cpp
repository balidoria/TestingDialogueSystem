// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgDialogue.h"
#include "DlgSystem/DlgDialogueParticipantData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgDialogue() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UEdGraph(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_IInterface_AssetUserData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantClass(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantData(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FDlgParticipantClass **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgParticipantClass_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgParticipantClass>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgParticipantClass); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structure useful to cache all the names used by a participant\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Structure useful to cache all the names used by a participant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// The Name of the Participant Used inside this Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "The Name of the Participant Used inside this Dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantClass_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "// The Participant Class corresponding for the ParticipantName\n// This is used to autocomplete and retrieve the Variables from that Class automatically when Using Class based Conditions/Events\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "MustImplement", "/Script/DlgSystem.DlgDialogueParticipant" },
		{ "ToolTip", "The Participant Class corresponding for the ParticipantName\nThis is used to autocomplete and retrieve the Variables from that Class automatically when Using Class based Conditions/Events" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgParticipantClass constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParticipantClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgParticipantClass constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgParticipantClass>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgParticipantClass Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantClass, ParticipantName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantName_MetaData), NewProp_ParticipantName_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ParticipantClass = { "ParticipantClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgParticipantClass, ParticipantClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantClass_MetaData), NewProp_ParticipantClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgParticipantClass Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgParticipantClass",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgParticipantClass>(),
	alignof(FDlgParticipantClass),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgParticipantClass;
UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantClass(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgParticipantClass.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgParticipantClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgParticipantClass, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgParticipantClass"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgParticipantClass.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgParticipantClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgParticipantClass.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgParticipantClass.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgParticipantClass ************************************************

// ********** Begin Class UDlgDialogue Function GetAllParticipantNames *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetAllParticipantNames_Parms
	{
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllParticipantNames has been deprecated in favour of GetParticipantNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllParticipantNames constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllParticipantNames constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllParticipantNames Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetAllParticipantNames_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllParticipantNames Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetAllParticipantNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetAllParticipantNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetAllParticipantNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetAllParticipantNames)
{
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllParticipantNames(Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetAllParticipantNames *******************************

// ********** Begin Class UDlgDialogue Function GetAllSpeakerStates ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetAllSpeakerStates_Parms
	{
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllSpeakerStates has been deprecated in favour of GetSpeakerStates" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllSpeakerStates constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllSpeakerStates constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllSpeakerStates Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetAllSpeakerStates_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllSpeakerStates Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetAllSpeakerStates", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetAllSpeakerStates_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetAllSpeakerStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetAllSpeakerStates)
{
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllSpeakerStates(Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetAllSpeakerStates **********************************

// ********** Begin Class UDlgDialogue Function GetBoolNames ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetBoolNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetBoolNames_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetBoolNames has been deprecated in favour of GetParticipantBoolNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoolNames constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoolNames constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoolNames Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetBoolNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetBoolNames_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBoolNames Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetBoolNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetBoolNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetBoolNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetBoolNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetBoolNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBoolNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetBoolNames *****************************************

// ********** Begin Class UDlgDialogue Function GetClassBoolNames **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetClassBoolNames_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetClassBoolNames has been deprecated in favour of GetParticipantClassBoolNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClassBoolNames constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClassBoolNames constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClassBoolNames Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassBoolNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassBoolNames_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetClassBoolNames Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassBoolNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetClassBoolNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetClassBoolNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetClassBoolNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetClassBoolNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetClassBoolNames ************************************

// ********** Begin Class UDlgDialogue Function GetClassFloatNames *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetClassFloatNames_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetClassFloatNames has been deprecated in favour of GetParticipantClassFloatNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClassFloatNames constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClassFloatNames constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClassFloatNames Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassFloatNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassFloatNames_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetClassFloatNames Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassFloatNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetClassFloatNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetClassFloatNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetClassFloatNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetClassFloatNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetClassFloatNames ***********************************

// ********** Begin Class UDlgDialogue Function GetClassIntNames ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetClassIntNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetClassIntNames_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetClassIntNames has been deprecated in favour of GetParticipantClassIntNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClassIntNames constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClassIntNames constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClassIntNames Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassIntNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassIntNames_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetClassIntNames Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassIntNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetClassIntNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetClassIntNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassIntNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetClassIntNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetClassIntNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetClassIntNames *************************************

// ********** Begin Class UDlgDialogue Function GetClassNameNames **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetClassNameNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetClassNameNames_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetClassNameNames has been deprecated in favour of GetParticipantClassFNameNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClassNameNames constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClassNameNames constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClassNameNames Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassNameNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassNameNames_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetClassNameNames Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassNameNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetClassNameNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetClassNameNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassNameNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetClassNameNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetClassNameNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetClassNameNames ************************************

// ********** Begin Class UDlgDialogue Function GetClassTextNames **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetClassTextNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetClassTextNames_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetClassTextNames has been deprecated in favour of GetParticipantClassFTextNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClassTextNames constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClassTextNames constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClassTextNames Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassTextNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetClassTextNames_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetClassTextNames Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetClassTextNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetClassTextNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetClassTextNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetClassTextNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetClassTextNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetClassTextNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetClassTextNames ************************************

// ********** Begin Class UDlgDialogue Function GetConditions **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetConditions_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetConditions_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetConditions has been deprecated in favour of GetParticipantConditionNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetConditions constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetConditions constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetConditions Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetConditions_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetConditions_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetConditions Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetConditions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetConditions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetConditions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetConditions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetConditions)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetConditions(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetConditions ****************************************

// ********** Begin Class UDlgDialogue Function GetCustomEvents ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetCustomEvents_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetCustomEvents_Parms
	{
		FName ParticipantName;
		TSet<UClass*> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetCustomEvents has been deprecated in favour of GetParticipantCustomEvents" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCustomEvents constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCustomEvents constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCustomEvents Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetCustomEvents_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetCustomEvents_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCustomEvents Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetCustomEvents", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetCustomEvents_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetCustomEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetCustomEvents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetCustomEvents)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(UClass*,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomEvents(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetCustomEvents **************************************

// ********** Begin Class UDlgDialogue Function GetDialogueFName ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetDialogueFName_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetDialogueFName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Same as the GetDialogueName only it returns a FName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Same as the GetDialogueName only it returns a FName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueFName constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueFName constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueFName Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetDialogueFName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogueFName Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetDialogueFName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetDialogueFName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetDialogueFName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetDialogueFName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetDialogueFName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetDialogueFName();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetDialogueFName *************************************

// ********** Begin Class UDlgDialogue Function GetDialogueName ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetDialogueName_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetDialogueName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets/extracts the name (without extension) of the dialog from the uasset filename\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets/extracts the name (without extension) of the dialog from the uasset filename" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueName constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueName constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueName Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetDialogueName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogueName Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetDialogueName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetDialogueName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetDialogueName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetDialogueName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetDialogueName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDialogueName();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetDialogueName **************************************

// ********** Begin Class UDlgDialogue Function GetDialogueVersion *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetDialogueVersion_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueVersion constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueVersion constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueVersion Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetDialogueVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogueVersion Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetDialogueVersion", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetDialogueVersion_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetDialogueVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetDialogueVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDialogueVersion();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetDialogueVersion ***********************************

// ********** Begin Class UDlgDialogue Function GetEvents ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetEvents_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetEvents_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetEvents has been deprecated in favour of GetParticipantEventNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEvents constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEvents constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEvents Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetEvents_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetEvents_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEvents Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetEvents", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetEvents_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetEvents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetEvents)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetEvents(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetEvents ********************************************

// ********** Begin Class UDlgDialogue Function GetFloatNames **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetFloatNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetFloatNames_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetFloatNames has been deprecated in favour of GetParticipantFloatNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFloatNames constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFloatNames constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFloatNames Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetFloatNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetFloatNames_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFloatNames Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetFloatNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetFloatNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetFloatNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetFloatNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetFloatNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFloatNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetFloatNames ****************************************

// ********** Begin Class UDlgDialogue Function GetGUID ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetGUID_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetGUID_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|GUID" },
		{ "Comment", "// Gets the unique identifier for this dialogue.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the unique identifier for this dialogue." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGUID constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGUID constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGUID Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGUID Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetGUID();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetGUID **********************************************

// ********** Begin Class UDlgDialogue Function GetIntNames ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetIntNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetIntNames_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetIntNames has been deprecated in favour of GetParticipantIntNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIntNames constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIntNames constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIntNames Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetIntNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetIntNames_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetIntNames Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetIntNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetIntNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetIntNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetIntNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetIntNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetIntNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetIntNames ******************************************

// ********** Begin Class UDlgDialogue Function GetMutableNodeFromGUID *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetMutableNodeFromGUID_Parms
	{
		FGuid NodeGUID;
		UDlgNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DisplayName", "Get Node From GUID" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMutableNodeFromGUID constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMutableNodeFromGUID constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMutableNodeFromGUID Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromGUID_Parms, ReturnValue), Z_Construct_UClass_UDlgNode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMutableNodeFromGUID Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableNodeFromGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetMutableNodeFromGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetMutableNodeFromGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetMutableNodeFromGUID)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromGUID(Z_Param_Out_NodeGUID);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetMutableNodeFromGUID *******************************

// ********** Begin Class UDlgDialogue Function GetMutableNodeFromIndex ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetMutableNodeFromIndex_Parms
	{
		int32 NodeIndex;
		UDlgNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Node as a mutable pointer.\n" },
		{ "DisplayName", "Get Node From Index" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Node as a mutable pointer." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMutableNodeFromIndex constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMutableNodeFromIndex constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMutableNodeFromIndex Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromIndex_Parms, NodeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableNodeFromIndex_Parms, ReturnValue), Z_Construct_UClass_UDlgNode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMutableNodeFromIndex Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableNodeFromIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetMutableNodeFromIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetMutableNodeFromIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetMutableNodeFromIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromIndex(Z_Param_NodeIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetMutableNodeFromIndex ******************************

// ********** Begin Class UDlgDialogue Function GetMutableStartNode ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetMutableStartNode_Parms
	{
		UDlgNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Function has been deprecated, Please use GetMutableStartNodes" },
		{ "DisplayName", "Get Start Node" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMutableStartNode constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMutableStartNode constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMutableStartNode Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableStartNode_Parms, ReturnValue), Z_Construct_UClass_UDlgNode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMutableStartNode Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableStartNode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetMutableStartNode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetMutableStartNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetMutableStartNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableStartNode();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetMutableStartNode **********************************

// ********** Begin Class UDlgDialogue Function GetMutableStartNodes *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetMutableStartNodes_Parms
	{
		TArray<UDlgNode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DisplayName", "Get Start Nodes" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMutableStartNodes constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMutableStartNodes constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMutableStartNodes Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDlgNode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetMutableStartNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMutableStartNodes Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetMutableStartNodes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetMutableStartNodes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetMutableStartNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetMutableStartNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDlgNode*>*)Z_Param__Result=P_THIS->GetMutableStartNodes();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetMutableStartNodes *********************************

// ********** Begin Class UDlgDialogue Function GetNameNames ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetNameNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetNameNames_Parms
	{
		FName ParticipantName;
		TSet<FName> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetNameNames has been deprecated in favour of GetParticipantFNameNames" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNameNames constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNameNames constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNameNames Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetNameNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetNameNames_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNameNames Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetNameNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetNameNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetNameNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetNameNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetNameNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TSET_REF(FName,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNameNames(Z_Param_ParticipantName,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetNameNames *****************************************

// ********** Begin Class UDlgDialogue Function GetNodeGUIDForIndex ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetNodeGUIDForIndex_Parms
	{
		int32 NodeIndex;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the GUID for the Node at NodeIndex\n" },
		{ "DisplayName", "Get Node GUID For Index" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the GUID for the Node at NodeIndex" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeGUIDForIndex constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeGUIDForIndex constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeGUIDForIndex Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetNodeGUIDForIndex_Parms, NodeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetNodeGUIDForIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeGUIDForIndex Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetNodeGUIDForIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetNodeGUIDForIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetNodeGUIDForIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetNodeGUIDForIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetNodeGUIDForIndex(Z_Param_NodeIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetNodeGUIDForIndex **********************************

// ********** Begin Class UDlgDialogue Function GetNodeIndexForGUID ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetNodeIndexForGUID_Parms
	{
		FGuid NodeGUID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the corresponding Node Index for the supplied NodeGUID\n// Returns -1 (INDEX_NONE) if the Node GUID does not exist.\n" },
		{ "DisplayName", "Get Node Index For GUID" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the corresponding Node Index for the supplied NodeGUID\nReturns -1 (INDEX_NONE) if the Node GUID does not exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeIndexForGUID constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeIndexForGUID constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeIndexForGUID Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetNodeIndexForGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetNodeIndexForGUID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeIndexForGUID Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetNodeIndexForGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetNodeIndexForGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetNodeIndexForGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetNodeIndexForGUID)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNodeIndexForGUID(Z_Param_Out_NodeGUID);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetNodeIndexForGUID **********************************

// ********** Begin Class UDlgDialogue Function GetNodes *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetNodes_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetNodes_Parms
	{
		TArray<UDlgNode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets all the nodes\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets all the nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodes constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodes constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodes Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDlgNode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodes Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetNodes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetNodes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetNodes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDlgNode*>*)Z_Param__Result=P_THIS->GetNodes();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetNodes *********************************************

// ********** Begin Class UDlgDialogue Function GetParticipantBoolNames ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantBoolNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the bool variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the bool variable Names that correspond to the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantBoolNames constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantBoolNames constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantBoolNames Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantBoolNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantBoolNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantBoolNames Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantBoolNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantBoolNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantBoolNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantBoolNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantBoolNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantBoolNames ******************************

// ********** Begin Class UDlgDialogue Function GetParticipantClass ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantClass_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantClass_Parms
	{
		FName ParticipantName;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/// EDITOR function, it only works if the participant class is setup in the ParticipantsClasses array\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "EDITOR function, it only works if the participant class is setup in the ParticipantsClasses array" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantClass constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantClass constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantClass Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClass_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantClass Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClass", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantClass_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClass(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClass)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetParticipantClass(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantClass **********************************

// ********** Begin Class UDlgDialogue Function GetParticipantClassBoolNames ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantClassBoolNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the bool variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the bool variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantClassBoolNames constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantClassBoolNames constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantClassBoolNames Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassBoolNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassBoolNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantClassBoolNames Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClassBoolNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantClassBoolNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantClassBoolNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClassBoolNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantClassBoolNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantClassBoolNames *************************

// ********** Begin Class UDlgDialogue Function GetParticipantClasses ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantClasses_Parms
	{
		TArray<FDlgParticipantClass> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantClasses constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantClasses constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantClasses Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgParticipantClass, METADATA_PARAMS(0, nullptr) }; // d2c3de1683bf9b4f40ed3fadeb00073748d890c4
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // d2c3de1683bf9b4f40ed3fadeb00073748d890c4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantClasses Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClasses", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantClasses_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantClasses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClasses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDlgParticipantClass>*)Z_Param__Result=P_THIS->GetParticipantClasses();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantClasses ********************************

// ********** Begin Class UDlgDialogue Function GetParticipantClassFloatNames **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantClassFloatNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the float variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the float variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantClassFloatNames constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantClassFloatNames constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantClassFloatNames Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFloatNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFloatNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantClassFloatNames Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClassFloatNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantClassFloatNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantClassFloatNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClassFloatNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantClassFloatNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantClassFloatNames ************************

// ********** Begin Class UDlgDialogue Function GetParticipantClassFNameNames **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantClassFNameNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the FName variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the FName variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantClassFNameNames constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantClassFNameNames constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantClassFNameNames Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFNameNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFNameNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantClassFNameNames Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClassFNameNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantClassFNameNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantClassFNameNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClassFNameNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantClassFNameNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantClassFNameNames ************************

// ********** Begin Class UDlgDialogue Function GetParticipantClassFTextNames **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantClassFTextNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the FText variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the FText variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantClassFTextNames constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantClassFTextNames constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantClassFTextNames Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFTextNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassFTextNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantClassFTextNames Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClassFTextNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantClassFTextNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantClassFTextNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClassFTextNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantClassFTextNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantClassFTextNames ************************

// ********** Begin Class UDlgDialogue Function GetParticipantClassIntNames ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantClassIntNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the int variable Names that correspond to the UClass of the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the int variable Names that correspond to the UClass of the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantClassIntNames constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantClassIntNames constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantClassIntNames Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassIntNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantClassIntNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantClassIntNames Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantClassIntNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantClassIntNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantClassIntNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantClassIntNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantClassIntNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantClassIntNames **************************

// ********** Begin Class UDlgDialogue Function GetParticipantConditionNames ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantConditionNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Condition Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Condition Names that correspond to the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantConditionNames constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantConditionNames constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantConditionNames Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantConditionNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantConditionNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantConditionNames Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantConditionNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantConditionNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantConditionNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantConditionNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantConditionNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantConditionNames *************************

// ********** Begin Class UDlgDialogue Function GetParticipantCustomConditions *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantCustomConditions_Parms
	{
		FName ParticipantName;
		TSet<UClass*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Custom Conditions UClasses that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Custom Conditions UClasses that correspond to the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantCustomConditions constinit property declarations ********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantCustomConditions constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantCustomConditions Property Definitions *******************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomConditions_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomConditions_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantCustomConditions Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantCustomConditions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantCustomConditions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantCustomConditions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantCustomConditions)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<UClass*>*)Z_Param__Result=P_THIS->GetParticipantCustomConditions(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantCustomConditions ***********************

// ********** Begin Class UDlgDialogue Function GetParticipantCustomEvents *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantCustomEvents_Parms
	{
		FName ParticipantName;
		TSet<UClass*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Custom Events UClasses that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Custom Events UClasses that correspond to the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantCustomEvents constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantCustomEvents constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantCustomEvents Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomEvents_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomEvents_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantCustomEvents Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantCustomEvents", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantCustomEvents_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantCustomEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantCustomEvents)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<UClass*>*)Z_Param__Result=P_THIS->GetParticipantCustomEvents(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantCustomEvents ***************************

// ********** Begin Class UDlgDialogue Function GetParticipantCustomTextArguments ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantCustomTextArguments_Parms
	{
		FName ParticipantName;
		TSet<UClass*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Custom Text Arguments UClasses that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Custom Text Arguments UClasses that correspond to the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantCustomTextArguments constinit property declarations *****
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantCustomTextArguments constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantCustomTextArguments Property Definitions ****************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomTextArguments_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantCustomTextArguments_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantCustomTextArguments Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantCustomTextArguments", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantCustomTextArguments_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantCustomTextArguments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantCustomTextArguments)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<UClass*>*)Z_Param__Result=P_THIS->GetParticipantCustomTextArguments(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantCustomTextArguments ********************

// ********** Begin Class UDlgDialogue Function GetParticipantEventNames ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantEventNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Event Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Event Names that correspond to the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantEventNames constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantEventNames constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantEventNames Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantEventNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantEventNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantEventNames Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantEventNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantEventNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantEventNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantEventNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantEventNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantEventNames *****************************

// ********** Begin Class UDlgDialogue Function GetParticipantFloatNames ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantFloatNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the float variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the float variable Names that correspond to the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantFloatNames constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantFloatNames constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantFloatNames Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFloatNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFloatNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantFloatNames Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantFloatNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantFloatNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantFloatNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantFloatNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantFloatNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantFloatNames *****************************

// ********** Begin Class UDlgDialogue Function GetParticipantFNameNames ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantFNameNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the FName variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the FName variable Names that correspond to the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantFNameNames constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantFNameNames constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantFNameNames Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFNameNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFNameNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantFNameNames Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantFNameNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantFNameNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantFNameNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantFNameNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantFNameNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantFNameNames *****************************

// ********** Begin Class UDlgDialogue Function GetParticipantFunctionNames ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantFunctionNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Unreal Functions that can be called based on the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Unreal Functions that can be called based on the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantFunctionNames constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantFunctionNames constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantFunctionNames Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFunctionNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantFunctionNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantFunctionNames Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantFunctionNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantFunctionNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantFunctionNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantFunctionNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantFunctionNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantFunctionNames **************************

// ********** Begin Class UDlgDialogue Function GetParticipantIntNames *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantIntNames_Parms
	{
		FName ParticipantName;
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the int variable Names that correspond to the provided ParticipantName.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the int variable Names that correspond to the provided ParticipantName." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantIntNames constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantIntNames constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantIntNames Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantIntNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantIntNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantIntNames Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantIntNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantIntNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantIntNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantIntNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantIntNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantIntNames *******************************

// ********** Begin Class UDlgDialogue Function GetParticipantNames ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantNames_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantNames_Parms
	{
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets all the keys (participant names) of the DlgData Map\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets all the keys (participant names) of the DlgData Map" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantNames constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantNames constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantNames Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantNames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantNames Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetParticipantNames();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantNames **********************************

// ********** Begin Class UDlgDialogue Function GetParticipantsData ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantsData_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantsData_Parms
	{
		TMap<FName,FDlgParticipantData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the Dialogue Data Map. It maps Participant Name => Participant Data\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the Dialogue Data Map. It maps Participant Name => Participant Data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantsData constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantsData constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantsData Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgParticipantData, METADATA_PARAMS(0, nullptr) }; // b1c6202fd0abf3e175ca189b09ef60960f82a9a0
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantsData_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // b1c6202fd0abf3e175ca189b09ef60960f82a9a0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantsData Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantsData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantsData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantsData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantsData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantsData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,FDlgParticipantData>*)Z_Param__Result=P_THIS->GetParticipantsData();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantsData **********************************

// ********** Begin Class UDlgDialogue Function GetParticipantsNum *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetParticipantsNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets the number of participants in the Dialogue Data Map.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets the number of participants in the Dialogue Data Map." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantsNum constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantsNum constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantsNum Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetParticipantsNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantsNum Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetParticipantsNum", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetParticipantsNum_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetParticipantsNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetParticipantsNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetParticipantsNum();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetParticipantsNum ***********************************

// ********** Begin Class UDlgDialogue Function GetSpeakerStates ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventGetSpeakerStates_Parms
	{
		TSet<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gets all the SpeakerStates used inside this Dialogue\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gets all the SpeakerStates used inside this Dialogue" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpeakerStates constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpeakerStates constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpeakerStates Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventGetSpeakerStates_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSpeakerStates Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "GetSpeakerStates", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventGetSpeakerStates_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventGetSpeakerStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execGetSpeakerStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FName>*)Z_Param__Result=P_THIS->GetSpeakerStates();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function GetSpeakerStates *************************************

// ********** Begin Class UDlgDialogue Function HasGUID ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_HasGUID_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventHasGUID_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|GUID" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasGUID constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventHasGUID_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasGUID constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasGUID Property Definitions ******************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogue_eventHasGUID_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasGUID Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "HasGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventHasGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventHasGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_HasGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execHasGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasGUID();
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function HasGUID **********************************************

// ********** Begin Class UDlgDialogue Function HasParticipant *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_HasParticipant_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventHasParticipant_Parms
	{
		FName ParticipantName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Checks if the provided ParticipantName (SpeakerName) is a key in the Dialogue Data Map\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Checks if the provided ParticipantName (SpeakerName) is a key in the Dialogue Data Map" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasParticipant constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventHasParticipant_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasParticipant constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasParticipant Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventHasParticipant_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogue_eventHasParticipant_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasParticipant Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "HasParticipant", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventHasParticipant_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventHasParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_HasParticipant(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execHasParticipant)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasParticipant(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function HasParticipant ***************************************

// ********** Begin Class UDlgDialogue Function IsValidNodeGUID ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventIsValidNodeGUID_Parms
	{
		FGuid NodeGUID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidNodeGUID constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventIsValidNodeGUID_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidNodeGUID constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidNodeGUID Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventIsValidNodeGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogue_eventIsValidNodeGUID_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidNodeGUID Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "IsValidNodeGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventIsValidNodeGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventIsValidNodeGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execIsValidNodeGUID)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidNodeGUID(Z_Param_Out_NodeGUID);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function IsValidNodeGUID **************************************

// ********** Begin Class UDlgDialogue Function IsValidNodeIndex ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex_Statics
struct UHT_STATICS
{
	struct DlgDialogue_eventIsValidNodeIndex_Parms
	{
		int32 NodeIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidNodeIndex constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogue_eventIsValidNodeIndex_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidNodeIndex constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidNodeIndex Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogue_eventIsValidNodeIndex_Parms, NodeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogue_eventIsValidNodeIndex_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidNodeIndex Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogue, nullptr, "IsValidNodeIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgDialogue_eventIsValidNodeIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgDialogue_eventIsValidNodeIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgDialogue::execIsValidNodeIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidNodeIndex(Z_Param_NodeIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgDialogue Function IsValidNodeIndex *************************************

// ********** Begin Class UDlgDialogue *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgDialogue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Dialogue asset containing the static data of a dialogue\n *  Instances can be created in content browser\n *  Dialogues have a custom blueprint editor\n */" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "DlgDialogue.h" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Dialogue asset containing the static data of a dialogue\nInstances can be created in content browser\nDialogues have a custom blueprint editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Comment", "// Used to keep track of the version in text  file too, besides being written in the .uasset file.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Used to keep track of the version in text  file too, besides being written in the .uasset file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// The name of the dialog, only used for reference in the text file, as this must always match the .uasset file name and .dlg file name\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "The name of the dialog, only used for reference in the text file, as this must always match the .uasset file name and .dlg file name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// The Unique identifier for each dialogue. This is used to uniquely identify a Dialogue, instead of it's name or path. Much more safer.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "The Unique identifier for each dialogue. This is used to uniquely identify a Dialogue, instead of it's name or path. Much more safer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantsClasses_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// All the Participants that require for you to define its UClass otherwise the auto completion/suggestion won't work in case you want to modify/check Class variables.\n" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "All the Participants that require for you to define its UClass otherwise the auto completion/suggestion won't work in case you want to modify/check Class variables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantsData_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Gathered data about events/conditions for each participant (for bp nodes, suggestions, etc.)\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Gathered data about events/conditions for each participant (for bp nodes, suggestions, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllSpeakerStates_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// All the speaker states used inside this Dialogue.\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "All the speaker states used inside this Dialogue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[] = {
		{ "Comment", "// Root node, Dialogue is started from the first child with satisfied condition (like the SelectorFirst node)\n// NOTE: Add VisibleAnywhere to make it easier to debug\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Root node, Dialogue is started from the first child with satisfied condition (like the SelectorFirst node)\nNOTE: Add VisibleAnywhere to make it easier to debug" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNodes_Inner_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Root nodes, Dialogue is started from the first one which has a child with satisfied condition\n// (node itself works like the SelectorFirst node, first satisfied child will be picked)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Root nodes, Dialogue is started from the first one which has a child with satisfied condition\n(node itself works like the SelectorFirst node, first satisfied child will be picked)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNodes_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Root nodes, Dialogue is started from the first one which has a child with satisfied condition\n// (node itself works like the SelectorFirst node, first satisfied child will be picked)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Root nodes, Dialogue is started from the first one which has a child with satisfied condition\n(node itself works like the SelectorFirst node, first satisfied child will be picked)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_Inner_MetaData[] = {
		{ "Comment", "// The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\n// to other nodes in this array.\n// NOTE: Add VisibleAnywhere to make it easier to debug\n" },
		{ "DlgWriteIndex", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\nto other nodes in this array.\nNOTE: Add VisibleAnywhere to make it easier to debug" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Comment", "// The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\n// to other nodes in this array.\n// NOTE: Add VisibleAnywhere to make it easier to debug\n" },
		{ "DlgWriteIndex", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "The new list of all nodes that belong to this Dialogue. Each nodes has children (edges) that have indices that point\nto other nodes in this array.\nNOTE: Add VisibleAnywhere to make it easier to debug" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodesGUIDToIndexMap_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Maps Node GUID => Node Index\n" },
		{ "DisplayName", "Nodes GUID To Index Map" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Maps Node GUID => Node Index" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DlgGraph_MetaData[] = {
		{ "Comment", "// EdGraph based representation of the DlgDialogue class\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "EdGraph based representation of the DlgDialogue class" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Asset User Data" },
		{ "Comment", "/** Array of user data stored with the asset (for IInterface_AssetUserData implementation) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Array of user data stored with the asset (for IInterface_AssetUserData implementation)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Asset User Data" },
		{ "Comment", "/** Array of user data stored with the asset (for IInterface_AssetUserData implementation) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgDialogue.h" },
		{ "ToolTip", "Array of user data stored with the asset (for IInterface_AssetUserData implementation)" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgDialogue constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantsClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticipantsClasses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantsData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantsData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ParticipantsData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AllSpeakerStates_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AllSpeakerStates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodesGUIDToIndexMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodesGUIDToIndexMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NodesGUIDToIndexMap;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DlgGraph;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgDialogue constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAllParticipantNames"), .Pointer = &UDlgDialogue::execGetAllParticipantNames },
		{ .NameUTF8 = UTF8TEXT("GetAllSpeakerStates"), .Pointer = &UDlgDialogue::execGetAllSpeakerStates },
		{ .NameUTF8 = UTF8TEXT("GetBoolNames"), .Pointer = &UDlgDialogue::execGetBoolNames },
		{ .NameUTF8 = UTF8TEXT("GetClassBoolNames"), .Pointer = &UDlgDialogue::execGetClassBoolNames },
		{ .NameUTF8 = UTF8TEXT("GetClassFloatNames"), .Pointer = &UDlgDialogue::execGetClassFloatNames },
		{ .NameUTF8 = UTF8TEXT("GetClassIntNames"), .Pointer = &UDlgDialogue::execGetClassIntNames },
		{ .NameUTF8 = UTF8TEXT("GetClassNameNames"), .Pointer = &UDlgDialogue::execGetClassNameNames },
		{ .NameUTF8 = UTF8TEXT("GetClassTextNames"), .Pointer = &UDlgDialogue::execGetClassTextNames },
		{ .NameUTF8 = UTF8TEXT("GetConditions"), .Pointer = &UDlgDialogue::execGetConditions },
		{ .NameUTF8 = UTF8TEXT("GetCustomEvents"), .Pointer = &UDlgDialogue::execGetCustomEvents },
		{ .NameUTF8 = UTF8TEXT("GetDialogueFName"), .Pointer = &UDlgDialogue::execGetDialogueFName },
		{ .NameUTF8 = UTF8TEXT("GetDialogueName"), .Pointer = &UDlgDialogue::execGetDialogueName },
		{ .NameUTF8 = UTF8TEXT("GetDialogueVersion"), .Pointer = &UDlgDialogue::execGetDialogueVersion },
		{ .NameUTF8 = UTF8TEXT("GetEvents"), .Pointer = &UDlgDialogue::execGetEvents },
		{ .NameUTF8 = UTF8TEXT("GetFloatNames"), .Pointer = &UDlgDialogue::execGetFloatNames },
		{ .NameUTF8 = UTF8TEXT("GetGUID"), .Pointer = &UDlgDialogue::execGetGUID },
		{ .NameUTF8 = UTF8TEXT("GetIntNames"), .Pointer = &UDlgDialogue::execGetIntNames },
		{ .NameUTF8 = UTF8TEXT("GetMutableNodeFromGUID"), .Pointer = &UDlgDialogue::execGetMutableNodeFromGUID },
		{ .NameUTF8 = UTF8TEXT("GetMutableNodeFromIndex"), .Pointer = &UDlgDialogue::execGetMutableNodeFromIndex },
		{ .NameUTF8 = UTF8TEXT("GetMutableStartNode"), .Pointer = &UDlgDialogue::execGetMutableStartNode },
		{ .NameUTF8 = UTF8TEXT("GetMutableStartNodes"), .Pointer = &UDlgDialogue::execGetMutableStartNodes },
		{ .NameUTF8 = UTF8TEXT("GetNameNames"), .Pointer = &UDlgDialogue::execGetNameNames },
		{ .NameUTF8 = UTF8TEXT("GetNodeGUIDForIndex"), .Pointer = &UDlgDialogue::execGetNodeGUIDForIndex },
		{ .NameUTF8 = UTF8TEXT("GetNodeIndexForGUID"), .Pointer = &UDlgDialogue::execGetNodeIndexForGUID },
		{ .NameUTF8 = UTF8TEXT("GetNodes"), .Pointer = &UDlgDialogue::execGetNodes },
		{ .NameUTF8 = UTF8TEXT("GetParticipantBoolNames"), .Pointer = &UDlgDialogue::execGetParticipantBoolNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantClass"), .Pointer = &UDlgDialogue::execGetParticipantClass },
		{ .NameUTF8 = UTF8TEXT("GetParticipantClassBoolNames"), .Pointer = &UDlgDialogue::execGetParticipantClassBoolNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantClasses"), .Pointer = &UDlgDialogue::execGetParticipantClasses },
		{ .NameUTF8 = UTF8TEXT("GetParticipantClassFloatNames"), .Pointer = &UDlgDialogue::execGetParticipantClassFloatNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantClassFNameNames"), .Pointer = &UDlgDialogue::execGetParticipantClassFNameNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantClassFTextNames"), .Pointer = &UDlgDialogue::execGetParticipantClassFTextNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantClassIntNames"), .Pointer = &UDlgDialogue::execGetParticipantClassIntNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantConditionNames"), .Pointer = &UDlgDialogue::execGetParticipantConditionNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantCustomConditions"), .Pointer = &UDlgDialogue::execGetParticipantCustomConditions },
		{ .NameUTF8 = UTF8TEXT("GetParticipantCustomEvents"), .Pointer = &UDlgDialogue::execGetParticipantCustomEvents },
		{ .NameUTF8 = UTF8TEXT("GetParticipantCustomTextArguments"), .Pointer = &UDlgDialogue::execGetParticipantCustomTextArguments },
		{ .NameUTF8 = UTF8TEXT("GetParticipantEventNames"), .Pointer = &UDlgDialogue::execGetParticipantEventNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantFloatNames"), .Pointer = &UDlgDialogue::execGetParticipantFloatNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantFNameNames"), .Pointer = &UDlgDialogue::execGetParticipantFNameNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantFunctionNames"), .Pointer = &UDlgDialogue::execGetParticipantFunctionNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantIntNames"), .Pointer = &UDlgDialogue::execGetParticipantIntNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantNames"), .Pointer = &UDlgDialogue::execGetParticipantNames },
		{ .NameUTF8 = UTF8TEXT("GetParticipantsData"), .Pointer = &UDlgDialogue::execGetParticipantsData },
		{ .NameUTF8 = UTF8TEXT("GetParticipantsNum"), .Pointer = &UDlgDialogue::execGetParticipantsNum },
		{ .NameUTF8 = UTF8TEXT("GetSpeakerStates"), .Pointer = &UDlgDialogue::execGetSpeakerStates },
		{ .NameUTF8 = UTF8TEXT("HasGUID"), .Pointer = &UDlgDialogue::execHasGUID },
		{ .NameUTF8 = UTF8TEXT("HasParticipant"), .Pointer = &UDlgDialogue::execHasParticipant },
		{ .NameUTF8 = UTF8TEXT("IsValidNodeGUID"), .Pointer = &UDlgDialogue::execIsValidNodeGUID },
		{ .NameUTF8 = UTF8TEXT("IsValidNodeIndex"), .Pointer = &UDlgDialogue::execIsValidNodeIndex },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgDialogue_GetAllParticipantNames, "GetAllParticipantNames" }, // 31002cacaeaa165e704f575159a8396d4f31cb92
		{ &Z_Construct_UFunction_UDlgDialogue_GetAllSpeakerStates, "GetAllSpeakerStates" }, // e8117654bea15403f898282604cef9411d414843
		{ &Z_Construct_UFunction_UDlgDialogue_GetBoolNames, "GetBoolNames" }, // e6dbe3846b336d39dbec2fff542d2727afd516a3
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassBoolNames, "GetClassBoolNames" }, // e3707ef2a83f5e03938487c89e723cb61dd8379c
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassFloatNames, "GetClassFloatNames" }, // 4b9586bbb34246ba6aff0fd2aeeffdfbd5f49cf6
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassIntNames, "GetClassIntNames" }, // 57cf413248dfae55f68e409af9972e2dc9308089
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassNameNames, "GetClassNameNames" }, // b0daacb23c4af56f4633c69a41a757d9d1ee9214
		{ &Z_Construct_UFunction_UDlgDialogue_GetClassTextNames, "GetClassTextNames" }, // 6b580a7de89273d6bffd9049d5b807aef515b6d6
		{ &Z_Construct_UFunction_UDlgDialogue_GetConditions, "GetConditions" }, // ac9fdf6cead81a1d69b19379287f8fd472e9a6ac
		{ &Z_Construct_UFunction_UDlgDialogue_GetCustomEvents, "GetCustomEvents" }, // 2f5677f5d213df8c7533d4be9aa331453fa5a954
		{ &Z_Construct_UFunction_UDlgDialogue_GetDialogueFName, "GetDialogueFName" }, // 84a134f9c3efb440cc54c1ae151eafa22ed943e8
		{ &Z_Construct_UFunction_UDlgDialogue_GetDialogueName, "GetDialogueName" }, // 9905429570098062a087f6411d95e32caad44c6f
		{ &Z_Construct_UFunction_UDlgDialogue_GetDialogueVersion, "GetDialogueVersion" }, // f97ae0c3fcbd009b232a80e820290fbf0d6352ef
		{ &Z_Construct_UFunction_UDlgDialogue_GetEvents, "GetEvents" }, // f6a2e4c8c7d2504ee011d7babaaef32d2083c2b1
		{ &Z_Construct_UFunction_UDlgDialogue_GetFloatNames, "GetFloatNames" }, // 46c9d593b8fd4e43e0aedfb94cf04341f8eec778
		{ &Z_Construct_UFunction_UDlgDialogue_GetGUID, "GetGUID" }, // 677434cc8a3230739034b601575291be2fbe3af3
		{ &Z_Construct_UFunction_UDlgDialogue_GetIntNames, "GetIntNames" }, // f04d728319a66fb5a693a71b8ba81e04ef65c973
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromGUID, "GetMutableNodeFromGUID" }, // cd9774eee0c1f7e4184ca14deb21859920135d49
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableNodeFromIndex, "GetMutableNodeFromIndex" }, // 5d1653fc0a9f283979655d3241bc23edc30073ea
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableStartNode, "GetMutableStartNode" }, // a29a65a2601528d9b91249d7979cd0f176091d28
		{ &Z_Construct_UFunction_UDlgDialogue_GetMutableStartNodes, "GetMutableStartNodes" }, // 7d659c77eb8cee680b8368404ea28c84c57720a5
		{ &Z_Construct_UFunction_UDlgDialogue_GetNameNames, "GetNameNames" }, // fdd67d3f5aa94c5b399778b45d21eef353b51f8e
		{ &Z_Construct_UFunction_UDlgDialogue_GetNodeGUIDForIndex, "GetNodeGUIDForIndex" }, // e657267e72aee3a2e6bbad7a490015f2d210136d
		{ &Z_Construct_UFunction_UDlgDialogue_GetNodeIndexForGUID, "GetNodeIndexForGUID" }, // acfdc68d4be976851615db38b2fa660a1fbd7b35
		{ &Z_Construct_UFunction_UDlgDialogue_GetNodes, "GetNodes" }, // 9015fa13fc3e93c4e84e9e3cdb3717efa1f418f6
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantBoolNames, "GetParticipantBoolNames" }, // 1cabee8b739a461e6b73d5f2e7245529ccde0b5d
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClass, "GetParticipantClass" }, // 2d4bac040a4f05d19994e3b179e9e9be4b483e88
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClassBoolNames, "GetParticipantClassBoolNames" }, // 2b201475fd3c7c076ba239e56fd8506af366522e
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClasses, "GetParticipantClasses" }, // 78b27d77dfda8b5481293eefe4913d6fd30143e1
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFloatNames, "GetParticipantClassFloatNames" }, // d0bac6cc0b8c23a048ea0a1764d64d8ec9562979
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFNameNames, "GetParticipantClassFNameNames" }, // 89118f23039d4689bc2241cfcace39ba4db31f5c
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClassFTextNames, "GetParticipantClassFTextNames" }, // ecdb541bbdb189a84e57619b9df051ece249484a
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantClassIntNames, "GetParticipantClassIntNames" }, // 2737b653291a69b4a9a42c3992cfe1bf2ef39030
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantConditionNames, "GetParticipantConditionNames" }, // f238c20d9c24894f8b7a540a88ad2dbc9e662a3b
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomConditions, "GetParticipantCustomConditions" }, // 613e8fa639f57d4a84239aae5a3c598920bd67ec
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomEvents, "GetParticipantCustomEvents" }, // e47f1ce06fe8fb948f65c30ba268f81f1ddf2965
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantCustomTextArguments, "GetParticipantCustomTextArguments" }, // 965df4fee0421a60f9ce8eee563531888ec05999
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantEventNames, "GetParticipantEventNames" }, // 762922db27ee00b9aa109729b5883a30f92acbaf
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantFloatNames, "GetParticipantFloatNames" }, // d5575b4fa9e2151e4fafd9cfce97bd9f3abee270
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantFNameNames, "GetParticipantFNameNames" }, // 8e6c7300df6f24bdee434f86277df8da36d64e18
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantFunctionNames, "GetParticipantFunctionNames" }, // f7ace2165735b80600ab3ec065a8fe1deb218747
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantIntNames, "GetParticipantIntNames" }, // 01d3d92f7a0128c565c1da030b9620cd46aa4326
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantNames, "GetParticipantNames" }, // 508ac1fc1e86cafbfbd81b0d3484e32d22ddde08
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantsData, "GetParticipantsData" }, // f077d306a41fb882a822b5070376609f958c1030
		{ &Z_Construct_UFunction_UDlgDialogue_GetParticipantsNum, "GetParticipantsNum" }, // 427338640e67c8d2e4c2269ff2165fd0f2a3295e
		{ &Z_Construct_UFunction_UDlgDialogue_GetSpeakerStates, "GetSpeakerStates" }, // 4fef41194ea788512f421b383528f16f40661ad7
		{ &Z_Construct_UFunction_UDlgDialogue_HasGUID, "HasGUID" }, // ac4dfd203e0ea49f7a3d09c478d0fc0f5158fcb2
		{ &Z_Construct_UFunction_UDlgDialogue_HasParticipant, "HasParticipant" }, // f2dc08c48d3eeae5dd8491ed217fef0ddf282b4e
		{ &Z_Construct_UFunction_UDlgDialogue_IsValidNodeGUID, "IsValidNodeGUID" }, // 00159a4e8e0fadd1812a7df5563d3092be6ac471
		{ &Z_Construct_UFunction_UDlgDialogue_IsValidNodeIndex, "IsValidNodeIndex" }, // 15b576a2a869981374b4cb3a6d30787719f4a105
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgDialogue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgDialogue Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GUID_MetaData), NewProp_GUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ParticipantsClasses_Inner = { "ParticipantsClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgParticipantClass, METADATA_PARAMS(0, nullptr) }; // d2c3de1683bf9b4f40ed3fadeb00073748d890c4
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ParticipantsClasses = { "ParticipantsClasses", nullptr, (EPropertyFlags)0x0020080000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, ParticipantsClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantsClasses_MetaData), NewProp_ParticipantsClasses_MetaData) }; // d2c3de1683bf9b4f40ed3fadeb00073748d890c4
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ParticipantsData_ValueProp = { "ParticipantsData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgParticipantData, METADATA_PARAMS(0, nullptr) }; // b1c6202fd0abf3e175ca189b09ef60960f82a9a0
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantsData_Key_KeyProp = { "ParticipantsData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ParticipantsData = { "ParticipantsData", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, ParticipantsData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantsData_MetaData), NewProp_ParticipantsData_MetaData) }; // b1c6202fd0abf3e175ca189b09ef60960f82a9a0
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AllSpeakerStates_ElementProp = { "AllSpeakerStates", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_AllSpeakerStates = { "AllSpeakerStates", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, AllSpeakerStates), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllSpeakerStates_MetaData), NewProp_AllSpeakerStates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0022080020080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, StartNode_DEPRECATED), Z_Construct_UClass_UDlgNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNode_MetaData), NewProp_StartNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartNodes_Inner = { "StartNodes", nullptr, (EPropertyFlags)0x00020000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDlgNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNodes_Inner_MetaData), NewProp_StartNodes_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StartNodes = { "StartNodes", nullptr, (EPropertyFlags)0x0020088000020009, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, StartNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNodes_MetaData), NewProp_StartNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDlgNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_Inner_MetaData), NewProp_Nodes_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x00200c8000000048, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodesGUIDToIndexMap_ValueProp = { "NodesGUIDToIndexMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodesGUIDToIndexMap_Key_KeyProp = { "NodesGUIDToIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NodesGUIDToIndexMap = { "NodesGUIDToIndexMap", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, NodesGUIDToIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodesGUIDToIndexMap_MetaData), NewProp_NodesGUIDToIndexMap_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DlgGraph = { "DlgGraph", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, DlgGraph), Z_Construct_UClass_UEdGraph, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DlgGraph_MetaData), NewProp_DlgGraph_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0114048000000009, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgDialogue, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantsClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantsClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantsData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantsData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllSpeakerStates_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllSpeakerStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodesGUIDToIndexMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodesGUIDToIndexMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodesGUIDToIndexMap,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DlgGraph,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetUserData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgDialogue Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData, (int32)VTABLE_OFFSET(UDlgDialogue, IInterface_AssetUserData), false },  // 77bf8bf5fd9130d0f5c6a8c02bdc11853c0330e8
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgDialogue,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDlgDialogue_StaticRegisterNativesUDlgDialogue()
{
	UClass* Class = UDlgDialogue::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgDialogue;
UClass* Z_Construct_UClass_UDlgDialogue(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgDialogue;
		if (!Z_Registration_Info_UClass_UDlgDialogue.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgDialogue"),
				Z_Registration_Info_UClass_UDlgDialogue.InnerSingleton,
				UDlgDialogue_StaticRegisterNativesUDlgDialogue,
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
		return Z_Registration_Info_UClass_UDlgDialogue.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgDialogue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgDialogue.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgDialogue.OuterSingleton;
}
#undef UHT_STATICS
UDlgDialogue::UDlgDialogue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgDialogue);
UDlgDialogue::~UDlgDialogue() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgDialogue)
// ********** End Class UDlgDialogue ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgParticipantClass, Z_Construct_UScriptStruct_FDlgParticipantClass_Statics::NewStructOps, TEXT("DlgParticipantClass"),&Z_Registration_Info_UScriptStruct_FDlgParticipantClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgParticipantClass), 3536051734U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgDialogue, TEXT("UDlgDialogue"), &Z_Registration_Info_UClass_UDlgDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgDialogue), 3252688667U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h__Script_DlgSystem_66279f800a7f74001ac612a54ca6eaeb32204edb{
	TEXT("/Script/DlgSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
