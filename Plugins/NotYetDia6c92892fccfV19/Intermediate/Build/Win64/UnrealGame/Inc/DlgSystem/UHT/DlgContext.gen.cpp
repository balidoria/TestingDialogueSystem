// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgContext.h"
#include "DlgSystem/DlgCondition.h"
#include "DlgSystem/DlgEdge.h"
#include "DlgSystem/DlgParticipantName.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgContext() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundWave(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeData(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantName(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgValidateStatus(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_SpeechSequence(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FDlgEdgeData ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgEdgeData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgEdgeData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgEdgeData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used to store temporary state of edges\n// This represents a const version of an Edge\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Used to store temporary state of edges\nThis represents a const version of an Edge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSatisfied_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Edge_MetaData[] = {
		{ "Category", "Dialogue|Edge" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgEdgeData constinit property declarations **********************
	static void NewProp_bSatisfied_SetBit(void* Obj)
	{
		((FDlgEdgeData*)Obj)->bSatisfied = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSatisfied;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Edge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgEdgeData constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdgeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgEdgeData Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSatisfied = { "bSatisfied", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgEdgeData), &UHT_STATICS::NewProp_bSatisfied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSatisfied_MetaData), NewProp_bSatisfied_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Edge = { "Edge", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdgeData, Edge), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Edge_MetaData), NewProp_Edge_MetaData) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSatisfied,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Edge,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgEdgeData Property Definitions ***********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgEdgeData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgEdgeData>(),
	alignof(FDlgEdgeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgEdgeData;
UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgEdgeData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgEdgeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdgeData, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgEdgeData"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgEdgeData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgEdgeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgEdgeData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgEdgeData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgEdgeData ********************************************************

// ********** Begin Enum EDlgValidateStatus ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgValidateStatus_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgValidateStatus>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgValidateStatus(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DialogueIsNull.Name", "EDlgValidateStatus::DialogueIsNull" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ParticipantDoesNotImplementInterface.Comment", "// Is an instance but does not implement the UDlgDialogueParticipant interface\n" },
		{ "ParticipantDoesNotImplementInterface.Name", "EDlgValidateStatus::ParticipantDoesNotImplementInterface" },
		{ "ParticipantDoesNotImplementInterface.ToolTip", "Is an instance but does not implement the UDlgDialogueParticipant interface" },
		{ "ParticipantIsABlueprintClassAndDoesNotImplementInterface.Comment", "// Is a blueprint class from the content browser and does not implement the UDlgDialogueParticipant interface\n" },
		{ "ParticipantIsABlueprintClassAndDoesNotImplementInterface.Name", "EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface" },
		{ "ParticipantIsABlueprintClassAndDoesNotImplementInterface.ToolTip", "Is a blueprint class from the content browser and does not implement the UDlgDialogueParticipant interface" },
		{ "ParticipantIsNull.Comment", "// Either the participant or dialogue is invalid\n" },
		{ "ParticipantIsNull.Name", "EDlgValidateStatus::ParticipantIsNull" },
		{ "ParticipantIsNull.ToolTip", "Either the participant or dialogue is invalid" },
		{ "Valid.Name", "EDlgValidateStatus::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgValidateStatus::Valid", (int64)EDlgValidateStatus::Valid },
		{ "EDlgValidateStatus::ParticipantIsNull", (int64)EDlgValidateStatus::ParticipantIsNull },
		{ "EDlgValidateStatus::DialogueIsNull", (int64)EDlgValidateStatus::DialogueIsNull },
		{ "EDlgValidateStatus::ParticipantDoesNotImplementInterface", (int64)EDlgValidateStatus::ParticipantDoesNotImplementInterface },
		{ "EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface", (int64)EDlgValidateStatus::ParticipantIsABlueprintClassAndDoesNotImplementInterface },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgValidateStatus",
	"EDlgValidateStatus",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgValidateStatus;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgValidateStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgValidateStatus.OuterSingleton)
		{
			ZRIE_EDlgValidateStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgValidateStatus, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgValidateStatus"));
		}
		return ZRIE_EDlgValidateStatus.OuterSingleton;
	}
	if (!ZRIE_EDlgValidateStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgValidateStatus.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgValidateStatus.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgValidateStatus **********************************************************

// ********** Begin Class UDlgContext Function ChooseChild *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_ChooseChild_Statics
struct UHT_STATICS
{
	struct DlgContext_eventChooseChild_Parms
	{
		int32 OptionIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Control" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ChooseChild has been deprecated in favour of ChooseOption" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChooseChild constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseChild_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChooseChild constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChooseChild Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventChooseChild_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventChooseChild_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ChooseChild Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "ChooseChild", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventChooseChild_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventChooseChild_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_ChooseChild(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execChooseChild)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChooseChild(Z_Param_OptionIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function ChooseChild *******************************************

// ********** Begin Class UDlgContext Function ChooseOption ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_ChooseOption_Statics
struct UHT_STATICS
{
	struct DlgContext_eventChooseOption_Parms
	{
		int32 OptionIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Control" },
		{ "Comment", "/**\n\x09* Chooses the option with index OptionIndex of the active node index and it enters that node.\n\x09* Typically called based on user input.\n\x09* NOTICE: If the return value is false the dialogue is over and the context should be dropped\n\x09*\n\x09* @return true if the dialogue did not end, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Chooses the option with index OptionIndex of the active node index and it enters that node.\nTypically called based on user input.\nNOTICE: If the return value is false the dialogue is over and the context should be dropped\n\n@return true if the dialogue did not end, false otherwise" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChooseOption constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseOption_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChooseOption constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChooseOption Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventChooseOption_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventChooseOption_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ChooseOption Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "ChooseOption", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventChooseOption_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventChooseOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_ChooseOption(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execChooseOption)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChooseOption(Z_Param_OptionIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function ChooseOption ******************************************

// ********** Begin Class UDlgContext Function ChooseOptionFromAll *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll_Statics
struct UHT_STATICS
{
	struct DlgContext_eventChooseOptionFromAll_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Control|All" },
		{ "Comment", "/**\n\x09 *  Exactly as ChooseOption but expects an index from the AllOptions array\n\x09 *  If the index is invalid the call fails\n\x09 */" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Exactly as ChooseOption but expects an index from the AllOptions array\nIf the index is invalid the call fails" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChooseOptionFromAll constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseOptionFromAll_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChooseOptionFromAll constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChooseOptionFromAll Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventChooseOptionFromAll_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventChooseOptionFromAll_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ChooseOptionFromAll Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "ChooseOptionFromAll", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventChooseOptionFromAll_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventChooseOptionFromAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execChooseOptionFromAll)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChooseOptionFromAll(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function ChooseOptionFromAll ***********************************

// ********** Begin Class UDlgContext Function ChooseSpeechSequenceOptionFromReplicated ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated_Statics
struct UHT_STATICS
{
	struct DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms
	{
		int32 OptionIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Control" },
		{ "Comment", "/**\n\x09 * Chooses the option with OptionIndex that is replicated\n\x09 * NOTE: the ActiveNodeIndex must be a speech sequence node, otherwise the dialogue will end\n\x09 *\n\x09 * @return true if the dialogue did not end, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Chooses the option with OptionIndex that is replicated\nNOTE: the ActiveNodeIndex must be a speech sequence node, otherwise the dialogue will end\n\n@return true if the dialogue did not end, false otherwise" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChooseSpeechSequenceOptionFromReplicated constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChooseSpeechSequenceOptionFromReplicated constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChooseSpeechSequenceOptionFromReplicated Property Definitions *********
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ChooseSpeechSequenceOptionFromReplicated Property Definitions ***********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "ChooseSpeechSequenceOptionFromReplicated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventChooseSpeechSequenceOptionFromReplicated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execChooseSpeechSequenceOptionFromReplicated)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChooseSpeechSequenceOptionFromReplicated(Z_Param_OptionIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function ChooseSpeechSequenceOptionFromReplicated **************

// ********** Begin Class UDlgContext Function GetActiveNodeData ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeData_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeData_Parms
	{
		UDlgNodeData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeData constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeData constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeData Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeData_Parms, ReturnValue), Z_Construct_UClass_UDlgNodeData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeData Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgNodeData**)Z_Param__Result=P_THIS->GetActiveNodeData();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeData *************************************

// ********** Begin Class UDlgContext Function GetActiveNodeGenericData ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeGenericData_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeGenericData constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeGenericData constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeGenericData Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeGenericData_Parms, ReturnValue), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeGenericData Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeGenericData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeGenericData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeGenericData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeGenericData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetActiveNodeGenericData();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeGenericData ******************************

// ********** Begin Class UDlgContext Function GetActiveNodeGUID ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeGUID_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeGUID constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeGUID constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeGUID Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeGUID Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetActiveNodeGUID();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeGUID *************************************

// ********** Begin Class UDlgContext Function GetActiveNodeIndex **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeIndex constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeIndex constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeIndex Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeIndex Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveNodeIndex();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeIndex ************************************

// ********** Begin Class UDlgContext Function GetActiveNodeParticipant ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeParticipant_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Object associated with the active node participant name (owner name).\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Object associated with the active node participant name (owner name)." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeParticipant constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeParticipant constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeParticipant Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipant_Parms, ReturnValue), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeParticipant Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipant", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeParticipant_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipant)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetActiveNodeParticipant();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeParticipant ******************************

// ********** Begin Class UDlgContext Function GetActiveNodeParticipantDisplayName *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeParticipantDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the active participant display name\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the active participant display name" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeParticipantDisplayName constinit property declarations ***
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeParticipantDisplayName constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeParticipantDisplayName Property Definitions **************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipantDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeParticipantDisplayName Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipantDisplayName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeParticipantDisplayName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeParticipantDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipantDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetActiveNodeParticipantDisplayName();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeParticipantDisplayName *******************

// ********** Begin Class UDlgContext Function GetActiveNodeParticipantIcon ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeParticipantIcon_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Icon associated with the active node participant name (owner name).\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Icon associated with the active node participant name (owner name)." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeParticipantIcon constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeParticipantIcon constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeParticipantIcon Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipantIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeParticipantIcon Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipantIcon", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeParticipantIcon_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeParticipantIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipantIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetActiveNodeParticipantIcon();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeParticipantIcon **************************

// ********** Begin Class UDlgContext Function GetActiveNodeParticipantName ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeParticipantName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the active node participant name (owner name).\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the active node participant name (owner name)." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeParticipantName constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeParticipantName constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeParticipantName Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeParticipantName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeParticipantName Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeParticipantName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeParticipantName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeParticipantName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeParticipantName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetActiveNodeParticipantName();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeParticipantName **************************

// ********** Begin Class UDlgContext Function GetActiveNodeSpeakerState ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeSpeakerState_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the SpeakerState of the active node index\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the SpeakerState of the active node index" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeSpeakerState constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeSpeakerState constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeSpeakerState Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeSpeakerState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeSpeakerState Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeSpeakerState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeSpeakerState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeSpeakerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeSpeakerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetActiveNodeSpeakerState();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeSpeakerState *****************************

// ********** Begin Class UDlgContext Function GetActiveNodeText ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeText_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Text of the active node index\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Text of the active node index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeText constinit property declarations *********************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeText constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeText Property Definitions ********************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeText_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeText Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetActiveNodeText();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeText *************************************

// ********** Begin Class UDlgContext Function GetActiveNodeVoiceDialogueWave **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeVoiceDialogueWave_Parms
	{
		UDialogueWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Voice as a Dialogue Wave of the active node index\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Voice as a Dialogue Wave of the active node index" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeVoiceDialogueWave constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeVoiceDialogueWave constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeVoiceDialogueWave Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeVoiceDialogueWave_Parms, ReturnValue), Z_Construct_UClass_UDialogueWave, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeVoiceDialogueWave Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeVoiceDialogueWave", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeVoiceDialogueWave_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeVoiceDialogueWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeVoiceDialogueWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogueWave**)Z_Param__Result=P_THIS->GetActiveNodeVoiceDialogueWave();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeVoiceDialogueWave ************************

// ********** Begin Class UDlgContext Function GetActiveNodeVoiceSoundBase *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeVoiceSoundBase_Parms
	{
		USoundBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Same as GetActiveNodeVoiceSoundWave but this just returns the variable without casting it\n// to a USoundWave\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Same as GetActiveNodeVoiceSoundWave but this just returns the variable without casting it\nto a USoundWave" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeVoiceSoundBase constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeVoiceSoundBase constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeVoiceSoundBase Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeVoiceSoundBase_Parms, ReturnValue), Z_Construct_UClass_USoundBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeVoiceSoundBase Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeVoiceSoundBase", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeVoiceSoundBase_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeVoiceSoundBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeVoiceSoundBase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundBase**)Z_Param__Result=P_THIS->GetActiveNodeVoiceSoundBase();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeVoiceSoundBase ***************************

// ********** Begin Class UDlgContext Function GetActiveNodeVoiceSoundWave *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetActiveNodeVoiceSoundWave_Parms
	{
		USoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Gets the Voice as a Sound Wave of the active node index\n// This will get cast to USoundWave from a USoundBase\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Voice as a Sound Wave of the active node index\nThis will get cast to USoundWave from a USoundBase" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveNodeVoiceSoundWave constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveNodeVoiceSoundWave constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveNodeVoiceSoundWave Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetActiveNodeVoiceSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetActiveNodeVoiceSoundWave Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetActiveNodeVoiceSoundWave", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetActiveNodeVoiceSoundWave_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetActiveNodeVoiceSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetActiveNodeVoiceSoundWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundWave**)Z_Param__Result=P_THIS->GetActiveNodeVoiceSoundWave();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetActiveNodeVoiceSoundWave ***************************

// ********** Begin Class UDlgContext Function GetAllOptionsArray **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetAllOptionsArray_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetAllOptionsArray_Parms
	{
		TArray<FDlgEdgeData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets all edges (both satisfied and unsatisfied)\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets all edges (both satisfied and unsatisfied)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllOptionsArray constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllOptionsArray constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllOptionsArray Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgEdgeData, METADATA_PARAMS(0, nullptr) }; // 72b60761f4a678a77d85275a7fb8fd4a1a98a308
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetAllOptionsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 72b60761f4a678a77d85275a7fb8fd4a1a98a308
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllOptionsArray Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetAllOptionsArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetAllOptionsArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetAllOptionsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetAllOptionsArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetAllOptionsArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDlgEdgeData>*)Z_Param__Result=P_THIS->GetAllOptionsArray();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetAllOptionsArray ************************************

// ********** Begin Class UDlgContext Function GetAllOptionsNum ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetAllOptionsNum_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetAllOptionsNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the number of options (both satisfied and unsatisfied ones are counted)\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the number of options (both satisfied and unsatisfied ones are counted)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllOptionsNum constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllOptionsNum constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllOptionsNum Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetAllOptionsNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllOptionsNum Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetAllOptionsNum", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetAllOptionsNum_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetAllOptionsNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetAllOptionsNum(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetAllOptionsNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAllOptionsNum();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetAllOptionsNum **************************************

// ********** Begin Class UDlgContext Function GetContextString ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetContextString_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetContextString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Context" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetContextString constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetContextString constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetContextString Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetContextString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetContextString Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetContextString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetContextString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetContextString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetContextString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetContextString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetContextString();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetContextString **************************************

// ********** Begin Class UDlgContext Function GetDialogue *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetDialogue_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetDialogue_Parms
	{
		UDlgDialogue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Helper methods to get some Dialogue properties\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Helper methods to get some Dialogue properties" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogue constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogue constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogue Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetDialogue_Parms, ReturnValue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogue Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetDialogue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetDialogue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetDialogue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgDialogue**)Z_Param__Result=P_THIS->GetDialogue();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetDialogue *******************************************

// ********** Begin Class UDlgContext Function GetDialogueGUID *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetDialogueGUID_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetDialogueGUID_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueGUID constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueGUID constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueGUID Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetDialogueGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogueGUID Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetDialogueGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetDialogueGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetDialogueGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetDialogueGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetDialogueGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetDialogueGUID();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetDialogueGUID ***************************************

// ********** Begin Class UDlgContext Function GetDialogueName *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetDialogueName_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetDialogueName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueName constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueName constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueName Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetDialogueName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogueName Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetDialogueName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetDialogueName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetDialogueName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetDialogueName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetDialogueName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetDialogueName();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetDialogueName ***************************************

// ********** Begin Class UDlgContext Function GetDialoguePathName *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetDialoguePathName_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetDialoguePathName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialoguePathName constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialoguePathName constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialoguePathName Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetDialoguePathName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialoguePathName Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetDialoguePathName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetDialoguePathName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetDialoguePathName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetDialoguePathName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetDialoguePathName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDialoguePathName();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetDialoguePathName ***********************************

// ********** Begin Class UDlgContext Function GetMutableActiveNode ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetMutableActiveNode_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetMutableActiveNode_Parms
	{
		UDlgNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "DisplayName", "Get Active Node" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMutableActiveNode constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMutableActiveNode constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMutableActiveNode Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetMutableActiveNode_Parms, ReturnValue), Z_Construct_UClass_UDlgNode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMutableActiveNode Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetMutableActiveNode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetMutableActiveNode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetMutableActiveNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetMutableActiveNode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetMutableActiveNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableActiveNode();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetMutableActiveNode **********************************

// ********** Begin Class UDlgContext Function GetMutableActiveNodeAsSpeechSequence ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetMutableActiveNodeAsSpeechSequence_Parms
	{
		UDlgNode_SpeechSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|ActiveNode" },
		{ "Comment", "// Just a helper method for GetActiveNode that casts to UDlgNode_SpeechSequence\n" },
		{ "DisplayName", "Get Active Node As Speech Sequence" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Just a helper method for GetActiveNode that casts to UDlgNode_SpeechSequence" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMutableActiveNodeAsSpeechSequence constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMutableActiveNodeAsSpeechSequence constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMutableActiveNodeAsSpeechSequence Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetMutableActiveNodeAsSpeechSequence_Parms, ReturnValue), Z_Construct_UClass_UDlgNode_SpeechSequence, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMutableActiveNodeAsSpeechSequence Property Definitions ***************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetMutableActiveNodeAsSpeechSequence", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetMutableActiveNodeAsSpeechSequence_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetMutableActiveNodeAsSpeechSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetMutableActiveNodeAsSpeechSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgNode_SpeechSequence**)Z_Param__Result=P_THIS->GetMutableActiveNodeAsSpeechSequence();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetMutableActiveNodeAsSpeechSequence ******************

// ********** Begin Class UDlgContext Function GetMutableNodeFromGUID ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetMutableNodeFromGUID_Parms
	{
		FGuid NodeGUID;
		UDlgNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DisplayName", "Get Node From GUID" },
		{ "ModuleRelativePath", "DlgContext.h" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromGUID_Parms, ReturnValue), Z_Construct_UClass_UDlgNode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMutableNodeFromGUID Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetMutableNodeFromGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetMutableNodeFromGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetMutableNodeFromGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetMutableNodeFromGUID)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromGUID(Z_Param_Out_NodeGUID);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetMutableNodeFromGUID ********************************

// ********** Begin Class UDlgContext Function GetMutableNodeFromIndex *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetMutableNodeFromIndex_Parms
	{
		int32 NodeIndex;
		UDlgNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets the Node at the NodeIndex index\n" },
		{ "DisplayName", "Get Node From Index" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Node at the NodeIndex index" },
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
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromIndex_Parms, NodeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetMutableNodeFromIndex_Parms, ReturnValue), Z_Construct_UClass_UDlgNode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMutableNodeFromIndex Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetMutableNodeFromIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetMutableNodeFromIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetMutableNodeFromIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetMutableNodeFromIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgNode**)Z_Param__Result=P_THIS->GetMutableNodeFromIndex(Z_Param_NodeIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetMutableNodeFromIndex *******************************

// ********** Begin Class UDlgContext Function GetMutableParticipant *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetMutableParticipant_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetMutableParticipant_Parms
	{
		FName ParticipantName;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DisplayName", "Get Participant" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMutableParticipant constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMutableParticipant constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMutableParticipant Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetMutableParticipant_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetMutableParticipant_Parms, ReturnValue), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMutableParticipant Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetMutableParticipant", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetMutableParticipant_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetMutableParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetMutableParticipant(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetMutableParticipant)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetMutableParticipant(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetMutableParticipant *********************************

// ********** Begin Class UDlgContext Function GetNodeGUIDForIndex *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetNodeGUIDForIndex_Parms
	{
		int32 NodeIndex;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets the GUID for the Node at NodeIndex\n" },
		{ "DisplayName", "Get Node GUID For Index" },
		{ "ModuleRelativePath", "DlgContext.h" },
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
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetNodeGUIDForIndex_Parms, NodeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetNodeGUIDForIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeGUIDForIndex Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetNodeGUIDForIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetNodeGUIDForIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetNodeGUIDForIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetNodeGUIDForIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetNodeGUIDForIndex(Z_Param_NodeIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetNodeGUIDForIndex ***********************************

// ********** Begin Class UDlgContext Function GetNodeIndexForGUID *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetNodeIndexForGUID_Parms
	{
		FGuid NodeGUID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets the corresponding Node Index for the supplied NodeGUID\n// Returns -1 (INDEX_NONE) if the Node GUID does not exist.\n" },
		{ "DisplayName", "Get Node Index For GUID" },
		{ "ModuleRelativePath", "DlgContext.h" },
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
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetNodeIndexForGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetNodeIndexForGUID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeIndexForGUID Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetNodeIndexForGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetNodeIndexForGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetNodeIndexForGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetNodeIndexForGUID)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNodeIndexForGUID(Z_Param_Out_NodeGUID);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetNodeIndexForGUID ***********************************

// ********** Begin Class UDlgContext Function GetOption *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetOption_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetOption_Parms
	{
		int32 OptionIndex;
		FDlgEdge ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the edge representing a player option from the satisfied options\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the edge representing a player option from the satisfied options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOption constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOption constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOption Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOption_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOption_Parms, ReturnValue), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOption Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetOption", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetOption_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetOption(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetOption)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDlgEdge*)Z_Param__Result=P_THIS->GetOption(Z_Param_OptionIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetOption *********************************************

// ********** Begin Class UDlgContext Function GetOptionEnterConditions ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetOptionEnterConditions_Parms
	{
		int32 OptionIndex;
		TArray<FDlgCondition> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the Enter Conditions of the (satisfied) edge with index OptionIndex\n// NOTE: This is just a helper method, you could have called GetOption\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Enter Conditions of the (satisfied) edge with index OptionIndex\nNOTE: This is just a helper method, you could have called GetOption" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOptionEnterConditions constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOptionEnterConditions constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOptionEnterConditions Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionEnterConditions_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(0, nullptr) }; // 324b9de7b9dece928af37052ca5e878bb8c4c32a
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionEnterConditions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 324b9de7b9dece928af37052ca5e878bb8c4c32a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOptionEnterConditions Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetOptionEnterConditions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetOptionEnterConditions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetOptionEnterConditions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetOptionEnterConditions)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDlgCondition>*)Z_Param__Result=P_THIS->GetOptionEnterConditions(Z_Param_OptionIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetOptionEnterConditions ******************************

// ********** Begin Class UDlgContext Function GetOptionFromAll ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetOptionFromAll_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetOptionFromAll_Parms
	{
		int32 Index;
		FDlgEdgeData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the edge representing a player option from all options\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the edge representing a player option from all options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOptionFromAll constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOptionFromAll constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOptionFromAll Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionFromAll_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionFromAll_Parms, ReturnValue), Z_Construct_UScriptStruct_FDlgEdgeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 72b60761f4a678a77d85275a7fb8fd4a1a98a308
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOptionFromAll Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetOptionFromAll", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetOptionFromAll_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetOptionFromAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetOptionFromAll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetOptionFromAll)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDlgEdgeData*)Z_Param__Result=P_THIS->GetOptionFromAll(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetOptionFromAll **************************************

// ********** Begin Class UDlgContext Function GetOptionsArray *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetOptionsArray_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetOptionsArray_Parms
	{
		TArray<FDlgEdge> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets all satisfied edges\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets all satisfied edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOptionsArray constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOptionsArray constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOptionsArray Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(0, nullptr) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOptionsArray Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetOptionsArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetOptionsArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetOptionsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetOptionsArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetOptionsArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDlgEdge>*)Z_Param__Result=P_THIS->GetOptionsArray();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetOptionsArray ***************************************

// ********** Begin Class UDlgContext Function GetOptionsNum ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetOptionsNum_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetOptionsNum_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the number of options with satisfied conditions (number of options)\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the number of options with satisfied conditions (number of options)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOptionsNum constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOptionsNum constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOptionsNum Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionsNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOptionsNum Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetOptionsNum", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetOptionsNum_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetOptionsNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetOptionsNum(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetOptionsNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetOptionsNum();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetOptionsNum *****************************************

// ********** Begin Class UDlgContext Function GetOptionSpeakerState *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetOptionSpeakerState_Parms
	{
		int32 OptionIndex;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the SpeakerState of the (satisfied) edge with index OptionIndex\n// NOTE: This is just a helper method, you could have called GetOption\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the SpeakerState of the (satisfied) edge with index OptionIndex\nNOTE: This is just a helper method, you could have called GetOption" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOptionSpeakerState constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOptionSpeakerState constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOptionSpeakerState Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerState_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOptionSpeakerState Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetOptionSpeakerState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetOptionSpeakerState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetOptionSpeakerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetOptionSpeakerState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetOptionSpeakerState(Z_Param_OptionIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetOptionSpeakerState *********************************

// ********** Begin Class UDlgContext Function GetOptionSpeakerStateFromAll ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetOptionSpeakerStateFromAll_Parms
	{
		int32 Index;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the SpeakerState of the edge with index OptionIndex\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the SpeakerState of the edge with index OptionIndex" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOptionSpeakerStateFromAll constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOptionSpeakerStateFromAll constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOptionSpeakerStateFromAll Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerStateFromAll_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionSpeakerStateFromAll_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOptionSpeakerStateFromAll Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetOptionSpeakerStateFromAll", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetOptionSpeakerStateFromAll_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetOptionSpeakerStateFromAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetOptionSpeakerStateFromAll)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetOptionSpeakerStateFromAll(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetOptionSpeakerStateFromAll **************************

// ********** Begin Class UDlgContext Function GetOptionText ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetOptionText_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetOptionText_Parms
	{
		int32 OptionIndex;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Gets the Text of the (satisfied) option with index OptionIndex\n// NOTE: This is just a helper method, you could have called GetOption\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Text of the (satisfied) option with index OptionIndex\nNOTE: This is just a helper method, you could have called GetOption" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOptionText constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOptionText constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOptionText Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionText_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionText_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOptionText Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetOptionText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetOptionText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetOptionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetOptionText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetOptionText)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetOptionText(Z_Param_OptionIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetOptionText *****************************************

// ********** Begin Class UDlgContext Function GetOptionTextFromAll ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetOptionTextFromAll_Parms
	{
		int32 Index;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Gets the Text of an option from the all list, which includes the unsatisfied ones as well\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Gets the Text of an option from the all list, which includes the unsatisfied ones as well" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOptionTextFromAll constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOptionTextFromAll constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOptionTextFromAll Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionTextFromAll_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetOptionTextFromAll_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOptionTextFromAll Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetOptionTextFromAll", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetOptionTextFromAll_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetOptionTextFromAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetOptionTextFromAll)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetOptionTextFromAll(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetOptionTextFromAll **********************************

// ********** Begin Class UDlgContext Function GetParticipantFromName ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetParticipantFromName_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetParticipantFromName_Parms
	{
		FDlgParticipantName Participant;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantFromName constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Participant;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantFromName constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantFromName Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetParticipantFromName_Parms, Participant), Z_Construct_UScriptStruct_FDlgParticipantName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participant_MetaData), NewProp_Participant_MetaData) }; // 7a9a5d808bfd40d5f1a3cfa9328178b290f2ec90
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetParticipantFromName_Parms, ReturnValue), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantFromName Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetParticipantFromName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetParticipantFromName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetParticipantFromName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetParticipantFromName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetParticipantFromName)
{
	P_GET_STRUCT_REF(FDlgParticipantName,Z_Param_Out_Participant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetParticipantFromName(Z_Param_Out_Participant);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetParticipantFromName ********************************

// ********** Begin Class UDlgContext Function GetParticipants *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetParticipants_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetParticipants_Parms
	{
		TMap<FName,UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipants constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipants constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipants Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetParticipants_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipants Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetParticipants", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetParticipants_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetParticipants(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetParticipants)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,UObject*>*)Z_Param__Result=P_THIS->GetParticipants();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetParticipants ***************************************

// ********** Begin Class UDlgContext Function GetParticipantsMap **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetParticipantsMap_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetParticipantsMap_Parms
	{
		TMap<FName,UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantsMap constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantsMap constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantsMap Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetParticipantsMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantsMap Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetParticipantsMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetParticipantsMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetParticipantsMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetParticipantsMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetParticipantsMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,UObject*>*)Z_Param__Result=P_THIS->GetParticipantsMap();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetParticipantsMap ************************************

// ********** Begin Class UDlgContext Function GetVisitedNodeGUIDs *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetVisitedNodeGUIDs_Parms
	{
		TSet<FGuid> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Returns the GUIDs which were visited inside this single context. For global data check DlgMemory\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Returns the GUIDs which were visited inside this single context. For global data check DlgMemory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVisitedNodeGUIDs constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVisitedNodeGUIDs constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVisitedNodeGUIDs Property Definitions ******************************
static_assert(TModels_V<CGetTypeHashable, FGuid>, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetVisitedNodeGUIDs_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetVisitedNodeGUIDs Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetVisitedNodeGUIDs", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetVisitedNodeGUIDs_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetVisitedNodeGUIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetVisitedNodeGUIDs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FGuid>*)Z_Param__Result=P_THIS->GetVisitedNodeGUIDs();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetVisitedNodeGUIDs ***********************************

// ********** Begin Class UDlgContext Function GetVisitedNodeIndices *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices_Statics
struct UHT_STATICS
{
	struct DlgContext_eventGetVisitedNodeIndices_Parms
	{
		TSet<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Returns the indices which were visited inside this single context. For global data check DlgMemory\n// NOTE: You should use GetVisitedNodeGUIDs\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Returns the indices which were visited inside this single context. For global data check DlgMemory\nNOTE: You should use GetVisitedNodeGUIDs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVisitedNodeIndices constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVisitedNodeIndices constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVisitedNodeIndices Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventGetVisitedNodeIndices_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetVisitedNodeIndices Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "GetVisitedNodeIndices", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventGetVisitedNodeIndices_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventGetVisitedNodeIndices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execGetVisitedNodeIndices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<int32>*)Z_Param__Result=P_THIS->GetVisitedNodeIndices();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function GetVisitedNodeIndices *********************************

// ********** Begin Class UDlgContext Function HasDialogueEnded ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_HasDialogueEnded_Statics
struct UHT_STATICS
{
	struct DlgContext_eventHasDialogueEnded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Control" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasDialogueEnded constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventHasDialogueEnded_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasDialogueEnded constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasDialogueEnded Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventHasDialogueEnded_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasDialogueEnded Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "HasDialogueEnded", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventHasDialogueEnded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventHasDialogueEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_HasDialogueEnded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execHasDialogueEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDialogueEnded();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function HasDialogueEnded **************************************

// ********** Begin Class UDlgContext Function IsNodeVisited ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_IsNodeVisited_Statics
struct UHT_STATICS
{
	struct DlgContext_eventIsNodeVisited_Parms
	{
		int32 NodeIndex;
		FGuid NodeGUID;
		bool bLocalHistory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsNodeVisited constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
	static void NewProp_bLocalHistory_SetBit(void* Obj)
	{
		((DlgContext_eventIsNodeVisited_Parms*)Obj)->bLocalHistory = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalHistory;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsNodeVisited_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsNodeVisited constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsNodeVisited Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventIsNodeVisited_Parms, NodeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventIsNodeVisited_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLocalHistory = { "bLocalHistory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsNodeVisited_Parms), &UHT_STATICS::NewProp_bLocalHistory_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsNodeVisited_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLocalHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsNodeVisited Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "IsNodeVisited", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventIsNodeVisited_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventIsNodeVisited_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_IsNodeVisited(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execIsNodeVisited)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
	P_GET_UBOOL(Z_Param_bLocalHistory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNodeVisited(Z_Param_NodeIndex,Z_Param_Out_NodeGUID,Z_Param_bLocalHistory);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function IsNodeVisited *****************************************

// ********** Begin Class UDlgContext Function IsOptionConnectedToEndNode **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode_Statics
struct UHT_STATICS
{
	struct DlgContext_eventIsOptionConnectedToEndNode_Parms
	{
		int32 Index;
		bool bIndexSkipsUnsatisfiedEdges;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "/**\n\x09*  Checks if the node is connected directly to an end node or not\n\x09*  Does not handle complicated logic - if the said node is a logical one it will still check that node, and not one\n\x09*  of its option\n\x09*\n\x09* @param Index  Index of the edge/player option to test\n\x09* @param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n\x09* @return true if the node is an end node\n\x09*/" },
		{ "CPP_Default_bIndexSkipsUnsatisfiedEdges", "true" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Checks if the node is connected directly to an end node or not\nDoes not handle complicated logic - if the said node is a logical one it will still check that node, and not one\nof its option\n\n@param Index  Index of the edge/player option to test\n@param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n@return true if the node is an end node" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOptionConnectedToEndNode constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bIndexSkipsUnsatisfiedEdges_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToEndNode_Parms*)Obj)->bIndexSkipsUnsatisfiedEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIndexSkipsUnsatisfiedEdges;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToEndNode_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOptionConnectedToEndNode constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOptionConnectedToEndNode Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventIsOptionConnectedToEndNode_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIndexSkipsUnsatisfiedEdges = { "bIndexSkipsUnsatisfiedEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToEndNode_Parms), &UHT_STATICS::NewProp_bIndexSkipsUnsatisfiedEdges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToEndNode_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIndexSkipsUnsatisfiedEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsOptionConnectedToEndNode Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "IsOptionConnectedToEndNode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventIsOptionConnectedToEndNode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventIsOptionConnectedToEndNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execIsOptionConnectedToEndNode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL(Z_Param_bIndexSkipsUnsatisfiedEdges);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOptionConnectedToEndNode(Z_Param_Index,Z_Param_bIndexSkipsUnsatisfiedEdges);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function IsOptionConnectedToEndNode ****************************

// ********** Begin Class UDlgContext Function IsOptionConnectedToVisitedNode **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode_Statics
struct UHT_STATICS
{
	struct DlgContext_eventIsOptionConnectedToVisitedNode_Parms
	{
		int32 Index;
		bool bLocalHistory;
		bool bIndexSkipsUnsatisfiedEdges;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "/**\n\x09*  Checks if the node connected directly to one of the active player choices was already visited or not\n\x09*  Does not handle complicated logic - if the said node is a logical one it will still check that node, and not one\n\x09*  of its options\n\x09*\n\x09* @param Index  Index of the edge/player option to test\n\x09* @param bLocalHistory If true, only the history of this dialogue context is checked. If false, it is a global check\n\x09* @param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n\x09* @return true if the node was already IsOptionConnectedToVisitedNode\n\x09*/" },
		{ "CPP_Default_bIndexSkipsUnsatisfiedEdges", "true" },
		{ "CPP_Default_bLocalHistory", "false" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Checks if the node connected directly to one of the active player choices was already visited or not\nDoes not handle complicated logic - if the said node is a logical one it will still check that node, and not one\nof its options\n\n@param Index  Index of the edge/player option to test\n@param bLocalHistory If true, only the history of this dialogue context is checked. If false, it is a global check\n@param bIndexSkipsUnsatisfiedEdges  Decides if the index is in the [0, GetOptionsNum()[ interval (if true), or in the [0, GetAllOptionsNum()[ (if false)\n@return true if the node was already IsOptionConnectedToVisitedNode" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOptionConnectedToVisitedNode constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bLocalHistory_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToVisitedNode_Parms*)Obj)->bLocalHistory = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalHistory;
	static void NewProp_bIndexSkipsUnsatisfiedEdges_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToVisitedNode_Parms*)Obj)->bIndexSkipsUnsatisfiedEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIndexSkipsUnsatisfiedEdges;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionConnectedToVisitedNode_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOptionConnectedToVisitedNode constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOptionConnectedToVisitedNode Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventIsOptionConnectedToVisitedNode_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLocalHistory = { "bLocalHistory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToVisitedNode_Parms), &UHT_STATICS::NewProp_bLocalHistory_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIndexSkipsUnsatisfiedEdges = { "bIndexSkipsUnsatisfiedEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToVisitedNode_Parms), &UHT_STATICS::NewProp_bIndexSkipsUnsatisfiedEdges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionConnectedToVisitedNode_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLocalHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIndexSkipsUnsatisfiedEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsOptionConnectedToVisitedNode Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "IsOptionConnectedToVisitedNode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventIsOptionConnectedToVisitedNode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventIsOptionConnectedToVisitedNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execIsOptionConnectedToVisitedNode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL(Z_Param_bLocalHistory);
	P_GET_UBOOL(Z_Param_bIndexSkipsUnsatisfiedEdges);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOptionConnectedToVisitedNode(Z_Param_Index,Z_Param_bLocalHistory,Z_Param_bIndexSkipsUnsatisfiedEdges);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function IsOptionConnectedToVisitedNode ************************

// ********** Begin Class UDlgContext Function IsOptionSatisfied ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_IsOptionSatisfied_Statics
struct UHT_STATICS
{
	struct DlgContext_eventIsOptionSatisfied_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Is the option at Index satisfied? (Does it meet all the conditions)\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Is the option at Index satisfied? (Does it meet all the conditions)" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOptionSatisfied constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsOptionSatisfied_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOptionSatisfied constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOptionSatisfied Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventIsOptionSatisfied_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsOptionSatisfied_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsOptionSatisfied Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "IsOptionSatisfied", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventIsOptionSatisfied_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventIsOptionSatisfied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_IsOptionSatisfied(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execIsOptionSatisfied)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOptionSatisfied(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function IsOptionSatisfied *************************************

// ********** Begin Class UDlgContext Function IsValidAllOptionIndex *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex_Statics
struct UHT_STATICS
{
	struct DlgContext_eventIsValidAllOptionIndex_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|All" },
		{ "Comment", "// Is the Index valid index for both satisfied and unsatisfied conditions\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Is the Index valid index for both satisfied and unsatisfied conditions" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidAllOptionIndex constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidAllOptionIndex_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidAllOptionIndex constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidAllOptionIndex Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventIsValidAllOptionIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsValidAllOptionIndex_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidAllOptionIndex Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "IsValidAllOptionIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventIsValidAllOptionIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventIsValidAllOptionIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execIsValidAllOptionIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidAllOptionIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function IsValidAllOptionIndex *********************************

// ********** Begin Class UDlgContext Function IsValidNodeGUID *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_IsValidNodeGUID_Statics
struct UHT_STATICS
{
	struct DlgContext_eventIsValidNodeGUID_Parms
	{
		FGuid NodeGUID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidNodeGUID constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidNodeGUID_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidNodeGUID constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidNodeGUID Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventIsValidNodeGUID_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsValidNodeGUID_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidNodeGUID Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "IsValidNodeGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventIsValidNodeGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventIsValidNodeGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_IsValidNodeGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execIsValidNodeGUID)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidNodeGUID(Z_Param_Out_NodeGUID);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function IsValidNodeGUID ***************************************

// ********** Begin Class UDlgContext Function IsValidNodeIndex ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_IsValidNodeIndex_Statics
struct UHT_STATICS
{
	struct DlgContext_eventIsValidNodeIndex_Parms
	{
		int32 NodeIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "//\n// Data\n//\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Data" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidNodeIndex constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidNodeIndex_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidNodeIndex constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidNodeIndex Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventIsValidNodeIndex_Parms, NodeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsValidNodeIndex_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidNodeIndex Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "IsValidNodeIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventIsValidNodeIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventIsValidNodeIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_IsValidNodeIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execIsValidNodeIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidNodeIndex(Z_Param_NodeIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function IsValidNodeIndex **************************************

// ********** Begin Class UDlgContext Function IsValidOptionIndex **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_IsValidOptionIndex_Statics
struct UHT_STATICS
{
	struct DlgContext_eventIsValidOptionIndex_Parms
	{
		int32 OptionIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Options|Satisfied" },
		{ "Comment", "// Is the OptionIndex valid index for the satisfied conditions?\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Is the OptionIndex valid index for the satisfied conditions?" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsValidOptionIndex constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventIsValidOptionIndex_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsValidOptionIndex constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsValidOptionIndex Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventIsValidOptionIndex_Parms, OptionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventIsValidOptionIndex_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OptionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsValidOptionIndex Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "IsValidOptionIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventIsValidOptionIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventIsValidOptionIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_IsValidOptionIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execIsValidOptionIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidOptionIndex(Z_Param_OptionIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function IsValidOptionIndex ************************************

// ********** Begin Class UDlgContext Function OnRep_SerializedParticipants ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "//\n// Own methods\n//\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Own methods" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_SerializedParticipants constinit property declarations **********
// ********** End Function OnRep_SerializedParticipants constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "OnRep_SerializedParticipants", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execOnRep_SerializedParticipants)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SerializedParticipants();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function OnRep_SerializedParticipants **************************

// ********** Begin Class UDlgContext Function ReevaluateChildren **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_ReevaluateChildren_Statics
struct UHT_STATICS
{
	struct DlgContext_eventReevaluateChildren_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Control" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ReevaluateChildren has been deprecated in Favour of ReevaluateOptions" },
		{ "ModuleRelativePath", "DlgContext.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReevaluateChildren constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventReevaluateChildren_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReevaluateChildren constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReevaluateChildren Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventReevaluateChildren_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReevaluateChildren Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "ReevaluateChildren", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventReevaluateChildren_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventReevaluateChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_ReevaluateChildren(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execReevaluateChildren)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReevaluateChildren();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function ReevaluateChildren ************************************

// ********** Begin Class UDlgContext Function ReevaluateOptions ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_ReevaluateOptions_Statics
struct UHT_STATICS
{
	struct DlgContext_eventReevaluateOptions_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Control" },
		{ "Comment", "/**\n\x09 * Normally the options of the active node are checked only once, when the conversation enters the node.\n\x09 * If an option can appear/disappear real time in the middle of the conversation this function should be called manually each frame\n\x09 */" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Normally the options of the active node are checked only once, when the conversation enters the node.\nIf an option can appear/disappear real time in the middle of the conversation this function should be called manually each frame" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReevaluateOptions constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventReevaluateOptions_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReevaluateOptions constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReevaluateOptions Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventReevaluateOptions_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReevaluateOptions Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "ReevaluateOptions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventReevaluateOptions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventReevaluateOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_ReevaluateOptions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execReevaluateOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReevaluateOptions();
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function ReevaluateOptions *************************************

// ********** Begin Class UDlgContext Function WasNodeGUIDVisitedInThisContext *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext_Statics
struct UHT_STATICS
{
	struct DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms
	{
		FGuid NodeGUID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Was the node GUID visited in the lifetime of this context?\n" },
		{ "DisplayName", "Was Node GUID Visited In This Context" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Was the node GUID visited in the lifetime of this context?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function WasNodeGUIDVisitedInThisContext constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WasNodeGUIDVisitedInThisContext constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WasNodeGUIDVisitedInThisContext Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function WasNodeGUIDVisitedInThisContext Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "WasNodeGUIDVisitedInThisContext", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventWasNodeGUIDVisitedInThisContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execWasNodeGUIDVisitedInThisContext)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasNodeGUIDVisitedInThisContext(Z_Param_Out_NodeGUID);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function WasNodeGUIDVisitedInThisContext ***********************

// ********** Begin Class UDlgContext Function WasNodeIndexVisitedInThisContext ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext_Statics
struct UHT_STATICS
{
	struct DlgContext_eventWasNodeIndexVisitedInThisContext_Parms
	{
		int32 NodeIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Context|History" },
		{ "Comment", "// Was the node Index visited in the lifetime of this context?\n// NOTE: you should  most likely use WasNodeGUIDVisitedInThisContext\n" },
		{ "DisplayName", "Was Node Index Visited In This Context" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Was the node Index visited in the lifetime of this context?\nNOTE: you should  most likely use WasNodeGUIDVisitedInThisContext" },
	};
#endif // WITH_METADATA

// ********** Begin Function WasNodeIndexVisitedInThisContext constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgContext_eventWasNodeIndexVisitedInThisContext_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WasNodeIndexVisitedInThisContext constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WasNodeIndexVisitedInThisContext Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgContext_eventWasNodeIndexVisitedInThisContext_Parms, NodeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgContext_eventWasNodeIndexVisitedInThisContext_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function WasNodeIndexVisitedInThisContext Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgContext, nullptr, "WasNodeIndexVisitedInThisContext", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgContext_eventWasNodeIndexVisitedInThisContext_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgContext_eventWasNodeIndexVisitedInThisContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgContext::execWasNodeIndexVisitedInThisContext)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasNodeIndexVisitedInThisContext(Z_Param_NodeIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgContext Function WasNodeIndexVisitedInThisContext **********************

// ********** Begin Class UDlgContext **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgContext_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Class representing an active dialogue, can be used to gain information and to control it\n *  Should be controlled from Player Character/Player controller\n *  For starting a dialogue check UDlgManager - the proper function creates an UDlgContext for you\n *\n *  Call ChooseOption() if an option is selected\n *  If the return value is false the dialogue is over and the context should be dropped\n *  This abstract class contains the outer functionality only\n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgContext.h" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class representing an active dialogue, can be used to gain information and to control it\nShould be controlled from Player Character/Player controller\nFor starting a dialogue check UDlgManager - the proper function creates an UDlgContext for you\n\nCall ChooseOption() if an option is selected\nIf the return value is false the dialogue is over and the context should be dropped\nThis abstract class contains the outer functionality only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "Comment", "// Current Dialogue used in this context at runtime.\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Current Dialogue used in this context at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SerializedParticipants_MetaData[] = {
		{ "Comment", "// Helper array to serialize to Participants map for clients as well\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "Helper array to serialize to Participants map for clients as well" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[] = {
		{ "Comment", "// All object is expected to implement the IDlgDialogueParticipant interface\n// the key is the return value of IDlgDialogueParticipant::GetParticipantName()\n" },
		{ "ModuleRelativePath", "DlgContext.h" },
		{ "ToolTip", "All object is expected to implement the IDlgDialogueParticipant interface\nthe key is the return value of IDlgDialogueParticipant::GetParticipantName()" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgContext constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SerializedParticipants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedParticipants;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Participants_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Participants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgContext constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ChooseChild"), .Pointer = &UDlgContext::execChooseChild },
		{ .NameUTF8 = UTF8TEXT("ChooseOption"), .Pointer = &UDlgContext::execChooseOption },
		{ .NameUTF8 = UTF8TEXT("ChooseOptionFromAll"), .Pointer = &UDlgContext::execChooseOptionFromAll },
		{ .NameUTF8 = UTF8TEXT("ChooseSpeechSequenceOptionFromReplicated"), .Pointer = &UDlgContext::execChooseSpeechSequenceOptionFromReplicated },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeData"), .Pointer = &UDlgContext::execGetActiveNodeData },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeGenericData"), .Pointer = &UDlgContext::execGetActiveNodeGenericData },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeGUID"), .Pointer = &UDlgContext::execGetActiveNodeGUID },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeIndex"), .Pointer = &UDlgContext::execGetActiveNodeIndex },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeParticipant"), .Pointer = &UDlgContext::execGetActiveNodeParticipant },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeParticipantDisplayName"), .Pointer = &UDlgContext::execGetActiveNodeParticipantDisplayName },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeParticipantIcon"), .Pointer = &UDlgContext::execGetActiveNodeParticipantIcon },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeParticipantName"), .Pointer = &UDlgContext::execGetActiveNodeParticipantName },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeSpeakerState"), .Pointer = &UDlgContext::execGetActiveNodeSpeakerState },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeText"), .Pointer = &UDlgContext::execGetActiveNodeText },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeVoiceDialogueWave"), .Pointer = &UDlgContext::execGetActiveNodeVoiceDialogueWave },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeVoiceSoundBase"), .Pointer = &UDlgContext::execGetActiveNodeVoiceSoundBase },
		{ .NameUTF8 = UTF8TEXT("GetActiveNodeVoiceSoundWave"), .Pointer = &UDlgContext::execGetActiveNodeVoiceSoundWave },
		{ .NameUTF8 = UTF8TEXT("GetAllOptionsArray"), .Pointer = &UDlgContext::execGetAllOptionsArray },
		{ .NameUTF8 = UTF8TEXT("GetAllOptionsNum"), .Pointer = &UDlgContext::execGetAllOptionsNum },
		{ .NameUTF8 = UTF8TEXT("GetContextString"), .Pointer = &UDlgContext::execGetContextString },
		{ .NameUTF8 = UTF8TEXT("GetDialogue"), .Pointer = &UDlgContext::execGetDialogue },
		{ .NameUTF8 = UTF8TEXT("GetDialogueGUID"), .Pointer = &UDlgContext::execGetDialogueGUID },
		{ .NameUTF8 = UTF8TEXT("GetDialogueName"), .Pointer = &UDlgContext::execGetDialogueName },
		{ .NameUTF8 = UTF8TEXT("GetDialoguePathName"), .Pointer = &UDlgContext::execGetDialoguePathName },
		{ .NameUTF8 = UTF8TEXT("GetMutableActiveNode"), .Pointer = &UDlgContext::execGetMutableActiveNode },
		{ .NameUTF8 = UTF8TEXT("GetMutableActiveNodeAsSpeechSequence"), .Pointer = &UDlgContext::execGetMutableActiveNodeAsSpeechSequence },
		{ .NameUTF8 = UTF8TEXT("GetMutableNodeFromGUID"), .Pointer = &UDlgContext::execGetMutableNodeFromGUID },
		{ .NameUTF8 = UTF8TEXT("GetMutableNodeFromIndex"), .Pointer = &UDlgContext::execGetMutableNodeFromIndex },
		{ .NameUTF8 = UTF8TEXT("GetMutableParticipant"), .Pointer = &UDlgContext::execGetMutableParticipant },
		{ .NameUTF8 = UTF8TEXT("GetNodeGUIDForIndex"), .Pointer = &UDlgContext::execGetNodeGUIDForIndex },
		{ .NameUTF8 = UTF8TEXT("GetNodeIndexForGUID"), .Pointer = &UDlgContext::execGetNodeIndexForGUID },
		{ .NameUTF8 = UTF8TEXT("GetOption"), .Pointer = &UDlgContext::execGetOption },
		{ .NameUTF8 = UTF8TEXT("GetOptionEnterConditions"), .Pointer = &UDlgContext::execGetOptionEnterConditions },
		{ .NameUTF8 = UTF8TEXT("GetOptionFromAll"), .Pointer = &UDlgContext::execGetOptionFromAll },
		{ .NameUTF8 = UTF8TEXT("GetOptionsArray"), .Pointer = &UDlgContext::execGetOptionsArray },
		{ .NameUTF8 = UTF8TEXT("GetOptionsNum"), .Pointer = &UDlgContext::execGetOptionsNum },
		{ .NameUTF8 = UTF8TEXT("GetOptionSpeakerState"), .Pointer = &UDlgContext::execGetOptionSpeakerState },
		{ .NameUTF8 = UTF8TEXT("GetOptionSpeakerStateFromAll"), .Pointer = &UDlgContext::execGetOptionSpeakerStateFromAll },
		{ .NameUTF8 = UTF8TEXT("GetOptionText"), .Pointer = &UDlgContext::execGetOptionText },
		{ .NameUTF8 = UTF8TEXT("GetOptionTextFromAll"), .Pointer = &UDlgContext::execGetOptionTextFromAll },
		{ .NameUTF8 = UTF8TEXT("GetParticipantFromName"), .Pointer = &UDlgContext::execGetParticipantFromName },
		{ .NameUTF8 = UTF8TEXT("GetParticipants"), .Pointer = &UDlgContext::execGetParticipants },
		{ .NameUTF8 = UTF8TEXT("GetParticipantsMap"), .Pointer = &UDlgContext::execGetParticipantsMap },
		{ .NameUTF8 = UTF8TEXT("GetVisitedNodeGUIDs"), .Pointer = &UDlgContext::execGetVisitedNodeGUIDs },
		{ .NameUTF8 = UTF8TEXT("GetVisitedNodeIndices"), .Pointer = &UDlgContext::execGetVisitedNodeIndices },
		{ .NameUTF8 = UTF8TEXT("HasDialogueEnded"), .Pointer = &UDlgContext::execHasDialogueEnded },
		{ .NameUTF8 = UTF8TEXT("IsNodeVisited"), .Pointer = &UDlgContext::execIsNodeVisited },
		{ .NameUTF8 = UTF8TEXT("IsOptionConnectedToEndNode"), .Pointer = &UDlgContext::execIsOptionConnectedToEndNode },
		{ .NameUTF8 = UTF8TEXT("IsOptionConnectedToVisitedNode"), .Pointer = &UDlgContext::execIsOptionConnectedToVisitedNode },
		{ .NameUTF8 = UTF8TEXT("IsOptionSatisfied"), .Pointer = &UDlgContext::execIsOptionSatisfied },
		{ .NameUTF8 = UTF8TEXT("IsValidAllOptionIndex"), .Pointer = &UDlgContext::execIsValidAllOptionIndex },
		{ .NameUTF8 = UTF8TEXT("IsValidNodeGUID"), .Pointer = &UDlgContext::execIsValidNodeGUID },
		{ .NameUTF8 = UTF8TEXT("IsValidNodeIndex"), .Pointer = &UDlgContext::execIsValidNodeIndex },
		{ .NameUTF8 = UTF8TEXT("IsValidOptionIndex"), .Pointer = &UDlgContext::execIsValidOptionIndex },
		{ .NameUTF8 = UTF8TEXT("OnRep_SerializedParticipants"), .Pointer = &UDlgContext::execOnRep_SerializedParticipants },
		{ .NameUTF8 = UTF8TEXT("ReevaluateChildren"), .Pointer = &UDlgContext::execReevaluateChildren },
		{ .NameUTF8 = UTF8TEXT("ReevaluateOptions"), .Pointer = &UDlgContext::execReevaluateOptions },
		{ .NameUTF8 = UTF8TEXT("WasNodeGUIDVisitedInThisContext"), .Pointer = &UDlgContext::execWasNodeGUIDVisitedInThisContext },
		{ .NameUTF8 = UTF8TEXT("WasNodeIndexVisitedInThisContext"), .Pointer = &UDlgContext::execWasNodeIndexVisitedInThisContext },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgContext_ChooseChild, "ChooseChild" }, // 2b9ba937a330bae95c73e0c8877dc34f660ccb06
		{ &Z_Construct_UFunction_UDlgContext_ChooseOption, "ChooseOption" }, // 9858c9190d16ee5e4e5d4659a99a4db80c71a6b4
		{ &Z_Construct_UFunction_UDlgContext_ChooseOptionFromAll, "ChooseOptionFromAll" }, // d3da4b15c6a31f71256d333f2f4e112e1b440a2a
		{ &Z_Construct_UFunction_UDlgContext_ChooseSpeechSequenceOptionFromReplicated, "ChooseSpeechSequenceOptionFromReplicated" }, // 606b0917d8c429cd32d55e64572e076e12a99db2
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeData, "GetActiveNodeData" }, // b3936dfd3a64fc8a9c71eaf149c8d0220052f41e
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeGenericData, "GetActiveNodeGenericData" }, // 132f60425c19c2a040176f8101b3f0177653e7c3
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeGUID, "GetActiveNodeGUID" }, // 7121cf5c2a028eaf5fbeafd175c637861bf13e17
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeIndex, "GetActiveNodeIndex" }, // baabf07c33e60e3659f63556e9df292d9f19f88c
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipant, "GetActiveNodeParticipant" }, // dab601cd60f8c655b06a039a964c1e8ce3439b78
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantDisplayName, "GetActiveNodeParticipantDisplayName" }, // a1253cdef919719ccb439b0ad15efe851c5cef31
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantIcon, "GetActiveNodeParticipantIcon" }, // ec44b28d62154953878dec3bc8164db652fc4539
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeParticipantName, "GetActiveNodeParticipantName" }, // 7f0704e74f32d94ebc1541ca1abad6b6331e45be
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeSpeakerState, "GetActiveNodeSpeakerState" }, // f28993da7b50b0be8062f0eae1a3a309fcbf9e59
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeText, "GetActiveNodeText" }, // 86e12c7496080a76e30eacdc676e521cbf137541
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceDialogueWave, "GetActiveNodeVoiceDialogueWave" }, // ccebd23e863ebb24395052bd14eb40d4075f0a8a
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundBase, "GetActiveNodeVoiceSoundBase" }, // df59ee8632f9e7f0e59ffce29e76fc37ea3dd862
		{ &Z_Construct_UFunction_UDlgContext_GetActiveNodeVoiceSoundWave, "GetActiveNodeVoiceSoundWave" }, // 868e2031c97821bdc51f43095da1b4fb08823ae2
		{ &Z_Construct_UFunction_UDlgContext_GetAllOptionsArray, "GetAllOptionsArray" }, // c176b41cd4a2ca5d34a5808e0a6541add7f79805
		{ &Z_Construct_UFunction_UDlgContext_GetAllOptionsNum, "GetAllOptionsNum" }, // bd72925f8bb994f85089538bcf50ace039f5d6db
		{ &Z_Construct_UFunction_UDlgContext_GetContextString, "GetContextString" }, // 3eb5c04aee9e9e3c7c52dfa99d2eb083ada36a99
		{ &Z_Construct_UFunction_UDlgContext_GetDialogue, "GetDialogue" }, // daddde85a30ece2329a4e9dc34a4b7429539b2a8
		{ &Z_Construct_UFunction_UDlgContext_GetDialogueGUID, "GetDialogueGUID" }, // 5365e2cea7cf5a84f0eb94a717c5fdd72f2ff48d
		{ &Z_Construct_UFunction_UDlgContext_GetDialogueName, "GetDialogueName" }, // 02d8a3d30facadba5e1d19e88dd979d519fcb12a
		{ &Z_Construct_UFunction_UDlgContext_GetDialoguePathName, "GetDialoguePathName" }, // 76f61d9de893378a8302fda09ce5fad7161d884c
		{ &Z_Construct_UFunction_UDlgContext_GetMutableActiveNode, "GetMutableActiveNode" }, // 4d846944f0729e3c7760b7bd76841055c729c468
		{ &Z_Construct_UFunction_UDlgContext_GetMutableActiveNodeAsSpeechSequence, "GetMutableActiveNodeAsSpeechSequence" }, // 6bcf252bed54709a86a1aef051591d042abb0e81
		{ &Z_Construct_UFunction_UDlgContext_GetMutableNodeFromGUID, "GetMutableNodeFromGUID" }, // 5acbfa657121d01cd7dadc08dcf5be4dea7c5d8e
		{ &Z_Construct_UFunction_UDlgContext_GetMutableNodeFromIndex, "GetMutableNodeFromIndex" }, // 6b8e0445f08b2d07252f807005fc8182f987070e
		{ &Z_Construct_UFunction_UDlgContext_GetMutableParticipant, "GetMutableParticipant" }, // 7469f6e39b17792a63474993634bf703ad119152
		{ &Z_Construct_UFunction_UDlgContext_GetNodeGUIDForIndex, "GetNodeGUIDForIndex" }, // 846540caf87f90b6497a7638dd20f92eefe66419
		{ &Z_Construct_UFunction_UDlgContext_GetNodeIndexForGUID, "GetNodeIndexForGUID" }, // 98ef458f656b24694a87f32d87f800646e50691c
		{ &Z_Construct_UFunction_UDlgContext_GetOption, "GetOption" }, // 39a456a40d8da4c2a1eb506a52575f13e936ffc1
		{ &Z_Construct_UFunction_UDlgContext_GetOptionEnterConditions, "GetOptionEnterConditions" }, // 98c06d82058079e6d4a53fb8de81d37597b5ed5e
		{ &Z_Construct_UFunction_UDlgContext_GetOptionFromAll, "GetOptionFromAll" }, // f1ab4988f651c34982ac23caf7d2f4c29cbfe215
		{ &Z_Construct_UFunction_UDlgContext_GetOptionsArray, "GetOptionsArray" }, // 3293cc7c00876920b2ef44cd26c268068ef49ae0
		{ &Z_Construct_UFunction_UDlgContext_GetOptionsNum, "GetOptionsNum" }, // 58c8463a3d0948edb5e67853b3f5dbe7e7952080
		{ &Z_Construct_UFunction_UDlgContext_GetOptionSpeakerState, "GetOptionSpeakerState" }, // 4cbf95e01498b193fadb81e751541ab932506ba0
		{ &Z_Construct_UFunction_UDlgContext_GetOptionSpeakerStateFromAll, "GetOptionSpeakerStateFromAll" }, // 843a690ad5613fcf68c832f2cb64a760e392a404
		{ &Z_Construct_UFunction_UDlgContext_GetOptionText, "GetOptionText" }, // 2e2110a51db4655fd96609f9f0a53c4ccc283d4a
		{ &Z_Construct_UFunction_UDlgContext_GetOptionTextFromAll, "GetOptionTextFromAll" }, // d46127e17991ea32dd3ce3a1b517effb087ad119
		{ &Z_Construct_UFunction_UDlgContext_GetParticipantFromName, "GetParticipantFromName" }, // cf448e545b192dc011141bf9ef8e536fe35b541f
		{ &Z_Construct_UFunction_UDlgContext_GetParticipants, "GetParticipants" }, // 72d3f635ff6d483fe96c485024d162d9f434d521
		{ &Z_Construct_UFunction_UDlgContext_GetParticipantsMap, "GetParticipantsMap" }, // 8ce5260eba56d2970cf22d22d30853feb0080267
		{ &Z_Construct_UFunction_UDlgContext_GetVisitedNodeGUIDs, "GetVisitedNodeGUIDs" }, // 7db26aac0d4b46e1518f18107592b41a802e7a4b
		{ &Z_Construct_UFunction_UDlgContext_GetVisitedNodeIndices, "GetVisitedNodeIndices" }, // 7db1518f0c97234d66259caf3b957b2f2f4eb798
		{ &Z_Construct_UFunction_UDlgContext_HasDialogueEnded, "HasDialogueEnded" }, // 21e7067cb1d64b45fd766b59ef834b039e1e79f1
		{ &Z_Construct_UFunction_UDlgContext_IsNodeVisited, "IsNodeVisited" }, // 4ec2fa96482ee83002d87b8fe1eba816bd95b712
		{ &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToEndNode, "IsOptionConnectedToEndNode" }, // 9c6b9140a24f635a7714465bb6413b07df412c9f
		{ &Z_Construct_UFunction_UDlgContext_IsOptionConnectedToVisitedNode, "IsOptionConnectedToVisitedNode" }, // 1b6b772f0ffd75debfdbff9a0eae8652e15882c3
		{ &Z_Construct_UFunction_UDlgContext_IsOptionSatisfied, "IsOptionSatisfied" }, // f96d490005a0cf4d201dec99732a1dfea9176118
		{ &Z_Construct_UFunction_UDlgContext_IsValidAllOptionIndex, "IsValidAllOptionIndex" }, // d93252295497a834bc6838e03c7fc2ee90ed8a25
		{ &Z_Construct_UFunction_UDlgContext_IsValidNodeGUID, "IsValidNodeGUID" }, // 5aa61aa8cabbae7b017a512e6ff8b353299d9eed
		{ &Z_Construct_UFunction_UDlgContext_IsValidNodeIndex, "IsValidNodeIndex" }, // 8f1884e4c0f1c71d6b9223eafd9ac64c74681f86
		{ &Z_Construct_UFunction_UDlgContext_IsValidOptionIndex, "IsValidOptionIndex" }, // 8753615c79d0b4fe67f9b28dddd4fc9a3c5b3878
		{ &Z_Construct_UFunction_UDlgContext_OnRep_SerializedParticipants, "OnRep_SerializedParticipants" }, // 5fe30b04e98525a75e7f9b07cddb0927b01e10e0
		{ &Z_Construct_UFunction_UDlgContext_ReevaluateChildren, "ReevaluateChildren" }, // 4b1a44765c41f3a2c98384ba98e3b8343c7cca6f
		{ &Z_Construct_UFunction_UDlgContext_ReevaluateOptions, "ReevaluateOptions" }, // dfb4a6f1232cff8cb07e370ab2503b7b948501b3
		{ &Z_Construct_UFunction_UDlgContext_WasNodeGUIDVisitedInThisContext, "WasNodeGUIDVisitedInThisContext" }, // 0603c8ea02423424e9473c5300d41c17c712bebb
		{ &Z_Construct_UFunction_UDlgContext_WasNodeIndexVisitedInThisContext, "WasNodeIndexVisitedInThisContext" }, // a12b8c9b4c7568f0c0949a689d22f8de1e3c92f5
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgContext Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgContext, Dialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SerializedParticipants_Inner = { "SerializedParticipants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SerializedParticipants = { "SerializedParticipants", "OnRep_SerializedParticipants", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgContext, SerializedParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SerializedParticipants_MetaData), NewProp_SerializedParticipants_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participants_ValueProp = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Participants_Key_KeyProp = { "Participants_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgContext, Participants), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participants_MetaData), NewProp_Participants_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SerializedParticipants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SerializedParticipants,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgContext Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgContext,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDlgContext_StaticRegisterNativesUDlgContext()
{
	UClass* Class = UDlgContext::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgContext;
UClass* Z_Construct_UClass_UDlgContext(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgContext;
		if (!Z_Registration_Info_UClass_UDlgContext.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgContext"),
				Z_Registration_Info_UClass_UDlgContext.InnerSingleton,
				UDlgContext_StaticRegisterNativesUDlgContext,
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
		return Z_Registration_Info_UClass_UDlgContext.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgContext.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgContext.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UDlgContext::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Dialogue(TEXT("Dialogue"));
	static FName Name_SerializedParticipants(TEXT("SerializedParticipants"));
	const bool bIsValid = true
		&& Name_Dialogue == ClassReps[(int32)ENetFields_Private::Dialogue].Property->GetFName()
		&& Name_SerializedParticipants == ClassReps[(int32)ENetFields_Private::SerializedParticipants].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDlgContext"));
}
#endif
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgContext);
UDlgContext::~UDlgContext() {}
// ********** End Class UDlgContext ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgContext_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystem_EDlgValidateStatus, TEXT("EDlgValidateStatus"), &ZRIE_EDlgValidateStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 487470322U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgEdgeData, Z_Construct_UScriptStruct_FDlgEdgeData_Statics::NewStructOps, TEXT("DlgEdgeData"),&Z_Registration_Info_UScriptStruct_FDlgEdgeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgEdgeData), 1924532065U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgContext, TEXT("UDlgContext"), &Z_Registration_Info_UClass_UDlgContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgContext), 1091094338U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgContext_h__Script_DlgSystem_9cc40b2e97133a4b86c987c0cf46f3c1ad708246{
	TEXT("/Script/DlgSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
