// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgManager.h"
#include "DlgSystem/DlgMemory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UWorld(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgHistory(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgManager(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgObjectsArray(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgManager(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FDlgObjectsArray **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgObjectsArray_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgObjectsArray>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgObjectsArray); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgObjectsArray constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgObjectsArray constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgObjectsArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgObjectsArray Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgObjectsArray, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Array_MetaData), NewProp_Array_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Array,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgObjectsArray Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgObjectsArray",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgObjectsArray>(),
	alignof(FDlgObjectsArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgObjectsArray;
UScriptStruct* Z_Construct_UScriptStruct_FDlgObjectsArray(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgObjectsArray.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgObjectsArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgObjectsArray, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgObjectsArray"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgObjectsArray.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgObjectsArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgObjectsArray.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgObjectsArray.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgObjectsArray ****************************************************

// ********** Begin Class UDlgManager Function CanStartDialogue ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_CanStartDialogue_Statics
struct UHT_STATICS
{
	struct DlgManager_eventCanStartDialogue_Parms
	{
		UDlgDialogue* Dialogue;
		TArray<UObject*> Participants;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "/**\n\x09 * Checks if there is any child of the start node which can be enterred based on the conditions\n\x09 *\n\x09 * @returns true if there is an enterable node from the start node\n\x09 */" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Checks if there is any child of the start node which can be enterred based on the conditions\n\n@returns true if there is an enterable node from the start node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanStartDialogue constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventCanStartDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanStartDialogue constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanStartDialogue Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventCanStartDialogue_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventCanStartDialogue_Parms, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participants_MetaData), NewProp_Participants_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgManager_eventCanStartDialogue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CanStartDialogue Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "CanStartDialogue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventCanStartDialogue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventCanStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_CanStartDialogue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execCanStartDialogue)
{
	P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_Participants);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDlgManager::CanStartDialogue(Z_Param_Dialogue,Z_Param_Out_Participants);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function CanStartDialogue **************************************

// ********** Begin Class UDlgManager Function ClearDialogueHistory ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_ClearDialogueHistory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Memory" },
		{ "Comment", "// Empties the FDlgMemory Dialogue history.\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Empties the FDlgMemory Dialogue history." },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearDialogueHistory constinit property declarations ******************
// ********** End Function ClearDialogueHistory constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "ClearDialogueHistory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UDlgManager_ClearDialogueHistory(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execClearDialogueHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::ClearDialogueHistory();
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function ClearDialogueHistory **********************************

// ********** Begin Class UDlgManager Function ClearDialoguePersistentWorldContextObject ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Persistence" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearDialoguePersistentWorldContextObject constinit property declarations 
// ********** End Function ClearDialoguePersistentWorldContextObject constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "ClearDialoguePersistentWorldContextObject", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execClearDialoguePersistentWorldContextObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::ClearDialoguePersistentWorldContextObject();
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function ClearDialoguePersistentWorldContextObject *************

// ********** Begin Class UDlgManager Function DoesObjectImplementDialogueParticipantInterface *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface_Statics
struct UHT_STATICS
{
	struct DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms
	{
		const UObject* Object;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Does the Object implement the Dialogue Participant Interface?\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Does the Object implement the Dialogue Participant Interface?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DoesObjectImplementDialogueParticipantInterface constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoesObjectImplementDialogueParticipantInterface constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoesObjectImplementDialogueParticipantInterface Property Definitions **
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DoesObjectImplementDialogueParticipantInterface Property Definitions ****
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "DoesObjectImplementDialogueParticipantInterface", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventDoesObjectImplementDialogueParticipantInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execDoesObjectImplementDialogueParticipantInterface)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDlgManager::DoesObjectImplementDialogueParticipantInterface(Z_Param_Object);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function DoesObjectImplementDialogueParticipantInterface *******

// ********** Begin Class UDlgManager Function GetAllDialoguesBoolNames ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetAllDialoguesBoolNames_Parms
	{
		FName ParticipantName;
		TArray<FName> OutArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesBoolNames has been deprecated in favour of GetDialoguesParticipantBoolNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllDialoguesBoolNames constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllDialoguesBoolNames constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllDialoguesBoolNames Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesBoolNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesBoolNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllDialoguesBoolNames Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesBoolNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetAllDialoguesBoolNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetAllDialoguesBoolNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesBoolNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::GetAllDialoguesBoolNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetAllDialoguesBoolNames ******************************

// ********** Begin Class UDlgManager Function GetAllDialoguesConditionNames ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetAllDialoguesConditionNames_Parms
	{
		FName ParticipantName;
		TArray<FName> OutArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesConditionNames has been deprecated in favour of GetDialoguesParticipantConditionNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllDialoguesConditionNames constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllDialoguesConditionNames constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllDialoguesConditionNames Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesConditionNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesConditionNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllDialoguesConditionNames Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesConditionNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetAllDialoguesConditionNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetAllDialoguesConditionNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesConditionNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::GetAllDialoguesConditionNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetAllDialoguesConditionNames *************************

// ********** Begin Class UDlgManager Function GetAllDialoguesEventNames ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetAllDialoguesEventNames_Parms
	{
		FName ParticipantName;
		TArray<FName> OutArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesEventNames has been deprecated in favour of GetDialoguesParticipantEventNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllDialoguesEventNames constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllDialoguesEventNames constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllDialoguesEventNames Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesEventNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesEventNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllDialoguesEventNames Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesEventNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetAllDialoguesEventNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetAllDialoguesEventNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesEventNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::GetAllDialoguesEventNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetAllDialoguesEventNames *****************************

// ********** Begin Class UDlgManager Function GetAllDialoguesFloatNames ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetAllDialoguesFloatNames_Parms
	{
		FName ParticipantName;
		TArray<FName> OutArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesFloatNames has been deprecated in favour of GetDialoguesParticipantFloatNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllDialoguesFloatNames constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllDialoguesFloatNames constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllDialoguesFloatNames Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesFloatNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesFloatNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllDialoguesFloatNames Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesFloatNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetAllDialoguesFloatNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetAllDialoguesFloatNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesFloatNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::GetAllDialoguesFloatNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetAllDialoguesFloatNames *****************************

// ********** Begin Class UDlgManager Function GetAllDialoguesIntNames *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetAllDialoguesIntNames_Parms
	{
		FName ParticipantName;
		TArray<FName> OutArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesIntNames has been deprecated in favour of GetDialoguesParticipantIntNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllDialoguesIntNames constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllDialoguesIntNames constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllDialoguesIntNames Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesIntNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesIntNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllDialoguesIntNames Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesIntNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetAllDialoguesIntNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetAllDialoguesIntNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesIntNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::GetAllDialoguesIntNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetAllDialoguesIntNames *******************************

// ********** Begin Class UDlgManager Function GetAllDialoguesNameNames ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetAllDialoguesNameNames_Parms
	{
		FName ParticipantName;
		TArray<FName> OutArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesNameNames has been deprecated in favour of GetDialoguesParticipantFNameNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllDialoguesNameNames constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllDialoguesNameNames constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllDialoguesNameNames Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesNameNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesNameNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllDialoguesNameNames Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesNameNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetAllDialoguesNameNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetAllDialoguesNameNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesNameNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::GetAllDialoguesNameNames(Z_Param_ParticipantName,Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetAllDialoguesNameNames ******************************

// ********** Begin Class UDlgManager Function GetAllDialoguesParticipantNames *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetAllDialoguesParticipantNames_Parms
	{
		TArray<FName> OutArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesParticipantNames has been deprecated in favour of GetDialoguesParticipantNames" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllDialoguesParticipantNames constinit property declarations *******
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllDialoguesParticipantNames constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllDialoguesParticipantNames Property Definitions ******************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesParticipantNames_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllDialoguesParticipantNames Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesParticipantNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetAllDialoguesParticipantNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetAllDialoguesParticipantNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesParticipantNames)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::GetAllDialoguesParticipantNames(Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetAllDialoguesParticipantNames ***********************

// ********** Begin Class UDlgManager Function GetAllDialoguesSpeakerStates ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetAllDialoguesSpeakerStates_Parms
	{
		TArray<FName> OutArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllDialoguesSpeakerStates has been deprecated in favour of GetDialoguesSpeakerStates" },
		{ "ModuleRelativePath", "DlgManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllDialoguesSpeakerStates constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllDialoguesSpeakerStates constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllDialoguesSpeakerStates Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetAllDialoguesSpeakerStates_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllDialoguesSpeakerStates Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetAllDialoguesSpeakerStates", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetAllDialoguesSpeakerStates_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetAllDialoguesSpeakerStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetAllDialoguesSpeakerStates)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::GetAllDialoguesSpeakerStates(Z_Param_Out_OutArray);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetAllDialoguesSpeakerStates **************************

// ********** Begin Class UDlgManager Function GetDialogueHistory **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetDialogueHistory_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetDialogueHistory_Parms
	{
		TMap<FGuid,FDlgHistory> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Memory" },
		{ "Comment", "// Gets the Dialogue History from the FDlgMemory.\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets the Dialogue History from the FDlgMemory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueHistory constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueHistory constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueHistory Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgHistory, METADATA_PARAMS(0, nullptr) }; // 0f5ae929b52f0f8a898ab6a5897610cc4fe94c21
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialogueHistory_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 0f5ae929b52f0f8a898ab6a5897610cc4fe94c21
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogueHistory Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetDialogueHistory", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetDialogueHistory_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetDialogueHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetDialogueHistory(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetDialogueHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FGuid,FDlgHistory>*)Z_Param__Result=UDlgManager::GetDialogueHistory();
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetDialogueHistory ************************************

// ********** Begin Class UDlgManager Function GetDialoguesParticipantBoolNames ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetDialoguesParticipantBoolNames_Parms
	{
		FName ParticipantName;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique bool variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique bool variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialoguesParticipantBoolNames constinit property declarations ******
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialoguesParticipantBoolNames constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialoguesParticipantBoolNames Property Definitions *****************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantBoolNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantBoolNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialoguesParticipantBoolNames Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantBoolNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetDialoguesParticipantBoolNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetDialoguesParticipantBoolNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantBoolNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantBoolNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetDialoguesParticipantBoolNames **********************

// ********** Begin Class UDlgManager Function GetDialoguesParticipantConditionNames ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetDialoguesParticipantConditionNames_Parms
	{
		FName ParticipantName;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique condition names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique condition names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialoguesParticipantConditionNames constinit property declarations *
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialoguesParticipantConditionNames constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialoguesParticipantConditionNames Property Definitions ************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantConditionNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantConditionNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialoguesParticipantConditionNames Property Definitions **************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantConditionNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetDialoguesParticipantConditionNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetDialoguesParticipantConditionNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantConditionNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantConditionNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetDialoguesParticipantConditionNames *****************

// ********** Begin Class UDlgManager Function GetDialoguesParticipantEventNames *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetDialoguesParticipantEventNames_Parms
	{
		FName ParticipantName;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique event names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique event names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialoguesParticipantEventNames constinit property declarations *****
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialoguesParticipantEventNames constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialoguesParticipantEventNames Property Definitions ****************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantEventNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantEventNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialoguesParticipantEventNames Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantEventNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetDialoguesParticipantEventNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetDialoguesParticipantEventNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantEventNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantEventNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetDialoguesParticipantEventNames *********************

// ********** Begin Class UDlgManager Function GetDialoguesParticipantFloatNames *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetDialoguesParticipantFloatNames_Parms
	{
		FName ParticipantName;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique float variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique float variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialoguesParticipantFloatNames constinit property declarations *****
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialoguesParticipantFloatNames constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialoguesParticipantFloatNames Property Definitions ****************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantFloatNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantFloatNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialoguesParticipantFloatNames Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantFloatNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetDialoguesParticipantFloatNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetDialoguesParticipantFloatNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantFloatNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantFloatNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetDialoguesParticipantFloatNames *********************

// ********** Begin Class UDlgManager Function GetDialoguesParticipantFNameNames *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetDialoguesParticipantFNameNames_Parms
	{
		FName ParticipantName;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique name variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique name variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialoguesParticipantFNameNames constinit property declarations *****
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialoguesParticipantFNameNames constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialoguesParticipantFNameNames Property Definitions ****************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantFNameNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantFNameNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialoguesParticipantFNameNames Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantFNameNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetDialoguesParticipantFNameNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetDialoguesParticipantFNameNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantFNameNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantFNameNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetDialoguesParticipantFNameNames *********************

// ********** Begin Class UDlgManager Function GetDialoguesParticipantIntNames *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetDialoguesParticipantIntNames_Parms
	{
		FName ParticipantName;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique int variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique int variable names sorted alphabetically for the specified ParticipantName from the loaded Dialogues" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialoguesParticipantIntNames constinit property declarations *******
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialoguesParticipantIntNames constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialoguesParticipantIntNames Property Definitions ******************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantIntNames_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantIntNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialoguesParticipantIntNames Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantIntNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetDialoguesParticipantIntNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetDialoguesParticipantIntNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantIntNames)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantIntNames(Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetDialoguesParticipantIntNames ***********************

// ********** Begin Class UDlgManager Function GetDialoguesParticipantNames ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetDialoguesParticipantNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the unique participant names sorted alphabetically from all the Dialogues loaded into memory.\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the unique participant names sorted alphabetically from all the Dialogues loaded into memory." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialoguesParticipantNames constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialoguesParticipantNames constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialoguesParticipantNames Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesParticipantNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialoguesParticipantNames Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesParticipantNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetDialoguesParticipantNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetDialoguesParticipantNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetDialoguesParticipantNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesParticipantNames();
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetDialoguesParticipantNames **************************

// ********** Begin Class UDlgManager Function GetDialoguesSpeakerStates ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetDialoguesSpeakerStates_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Data" },
		{ "Comment", "// Gets all the used speaker states sorted alphabetically from all the Dialogues loaded into memory.\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all the used speaker states sorted alphabetically from all the Dialogues loaded into memory." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialoguesSpeakerStates constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialoguesSpeakerStates constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialoguesSpeakerStates Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialoguesSpeakerStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialoguesSpeakerStates Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetDialoguesSpeakerStates", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetDialoguesSpeakerStates_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetDialoguesSpeakerStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetDialoguesSpeakerStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UDlgManager::GetDialoguesSpeakerStates();
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetDialoguesSpeakerStates *****************************

// ********** Begin Class UDlgManager Function GetDialogueWorld ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetDialogueWorld_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetDialogueWorld_Parms
	{
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Persistence" },
		{ "Comment", "// This tries to get the source world for the dialogues\n// In the following order (the first one that is valid, returns that):\n// 1. The user set one UserWorldContextObjectPtr (if it is set):\n//\x09- Set with SetDialoguePersistentWorldContextObject_NameMethod\n//\x09- Clear with ClearDialoguePersistentWorldContextObject\n// 2. The first PIE world\n// 3. The first Game World\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "This tries to get the source world for the dialogues\nIn the following order (the first one that is valid, returns that):\n1. The user set one UserWorldContextObjectPtr (if it is set):\n      - Set with SetDialoguePersistentWorldContextObject_NameMethod\n      - Clear with ClearDialoguePersistentWorldContextObject\n2. The first PIE world\n3. The first Game World" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueWorld constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueWorld constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueWorld Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetDialogueWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogueWorld Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetDialogueWorld", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetDialogueWorld_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetDialogueWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetDialogueWorld(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetDialogueWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=UDlgManager::GetDialogueWorld();
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetDialogueWorld **************************************

// ********** Begin Class UDlgManager Function GetObjectsMapWithDialogueParticipantInterface *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetObjectsMapWithDialogueParticipantInterface_Parms
	{
		UObject* WorldContextObject;
		TMap<FName,FDlgObjectsArray> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Same as GetObjectsWithDialogueParticipantInterface but groups the Objects into a Map\n// Where the Key is the Participant Name\n// and the Value is the Participants Array\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Same as GetObjectsWithDialogueParticipantInterface but groups the Objects into a Map\nWhere the Key is the Participant Name\nand the Value is the Participants Array" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObjectsMapWithDialogueParticipantInterface constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObjectsMapWithDialogueParticipantInterface constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObjectsMapWithDialogueParticipantInterface Property Definitions ****
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetObjectsMapWithDialogueParticipantInterface_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgObjectsArray, METADATA_PARAMS(0, nullptr) }; // 75f06559e8d91d14a548544687e34213f5dafb61
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetObjectsMapWithDialogueParticipantInterface_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 75f06559e8d91d14a548544687e34213f5dafb61
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetObjectsMapWithDialogueParticipantInterface Property Definitions ******
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetObjectsMapWithDialogueParticipantInterface", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetObjectsMapWithDialogueParticipantInterface_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetObjectsMapWithDialogueParticipantInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetObjectsMapWithDialogueParticipantInterface)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,FDlgObjectsArray>*)Z_Param__Result=UDlgManager::GetObjectsMapWithDialogueParticipantInterface(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetObjectsMapWithDialogueParticipantInterface *********

// ********** Begin Class UDlgManager Function GetObjectsWithDialogueParticipantInterface **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface_Statics
struct UHT_STATICS
{
	struct DlgManager_eventGetObjectsWithDialogueParticipantInterface_Parms
	{
		UObject* WorldContextObject;
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Gets all objects from the World that implement the Dialogue Participant Interface\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Gets all objects from the World that implement the Dialogue Participant Interface" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObjectsWithDialogueParticipantInterface constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObjectsWithDialogueParticipantInterface constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObjectsWithDialogueParticipantInterface Property Definitions *******
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetObjectsWithDialogueParticipantInterface_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventGetObjectsWithDialogueParticipantInterface_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetObjectsWithDialogueParticipantInterface Property Definitions *********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "GetObjectsWithDialogueParticipantInterface", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventGetObjectsWithDialogueParticipantInterface_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventGetObjectsWithDialogueParticipantInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execGetObjectsWithDialogueParticipantInterface)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=UDlgManager::GetObjectsWithDialogueParticipantInterface(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function GetObjectsWithDialogueParticipantInterface ************

// ********** Begin Class UDlgManager Function IsObjectACustomCondition ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition_Statics
struct UHT_STATICS
{
	struct DlgManager_eventIsObjectACustomCondition_Parms
	{
		const UObject* Object;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Is Object a UDlgConditionCustom or a child from that\n" },
		{ "DisplayName", "Is Object A Custom Condition" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Is Object a UDlgConditionCustom or a child from that" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsObjectACustomCondition constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventIsObjectACustomCondition_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsObjectACustomCondition constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsObjectACustomCondition Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventIsObjectACustomCondition_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgManager_eventIsObjectACustomCondition_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsObjectACustomCondition Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "IsObjectACustomCondition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventIsObjectACustomCondition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventIsObjectACustomCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execIsObjectACustomCondition)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDlgManager::IsObjectACustomCondition(Z_Param_Object);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function IsObjectACustomCondition ******************************

// ********** Begin Class UDlgManager Function IsObjectACustomEvent ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent_Statics
struct UHT_STATICS
{
	struct DlgManager_eventIsObjectACustomEvent_Parms
	{
		const UObject* Object;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Is Object a UDlgEventCustom or a child from that\n" },
		{ "DisplayName", "Is Object A Custom Event" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Is Object a UDlgEventCustom or a child from that" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsObjectACustomEvent constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventIsObjectACustomEvent_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsObjectACustomEvent constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsObjectACustomEvent Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventIsObjectACustomEvent_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgManager_eventIsObjectACustomEvent_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsObjectACustomEvent Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "IsObjectACustomEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventIsObjectACustomEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventIsObjectACustomEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execIsObjectACustomEvent)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDlgManager::IsObjectACustomEvent(Z_Param_Object);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function IsObjectACustomEvent **********************************

// ********** Begin Class UDlgManager Function IsObjectACustomTextArgument *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument_Statics
struct UHT_STATICS
{
	struct DlgManager_eventIsObjectACustomTextArgument_Parms
	{
		const UObject* Object;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Is Object a UDlgTextArgumentCustom or a child from that\n" },
		{ "DisplayName", "Is Object A Custom Text Argument" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Is Object a UDlgTextArgumentCustom or a child from that" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsObjectACustomTextArgument constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventIsObjectACustomTextArgument_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsObjectACustomTextArgument constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsObjectACustomTextArgument Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventIsObjectACustomTextArgument_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgManager_eventIsObjectACustomTextArgument_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsObjectACustomTextArgument Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "IsObjectACustomTextArgument", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventIsObjectACustomTextArgument_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventIsObjectACustomTextArgument_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execIsObjectACustomTextArgument)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDlgManager::IsObjectACustomTextArgument(Z_Param_Object);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function IsObjectACustomTextArgument ***************************

// ********** Begin Class UDlgManager Function IsObjectANodeData ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_IsObjectANodeData_Statics
struct UHT_STATICS
{
	struct DlgManager_eventIsObjectANodeData_Parms
	{
		const UObject* Object;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Helper" },
		{ "Comment", "// Is Object a UDlgNodeData or a child from that\n" },
		{ "DisplayName", "Is Object A Node Data" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Is Object a UDlgNodeData or a child from that" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsObjectANodeData constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventIsObjectANodeData_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsObjectANodeData constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsObjectANodeData Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventIsObjectANodeData_Parms, Object), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgManager_eventIsObjectANodeData_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsObjectANodeData Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "IsObjectANodeData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventIsObjectANodeData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventIsObjectANodeData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_IsObjectANodeData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execIsObjectANodeData)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDlgManager::IsObjectANodeData(Z_Param_Object);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function IsObjectANodeData *************************************

// ********** Begin Class UDlgManager Function RegisterDialogueConsoleCommands *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands_Statics
struct UHT_STATICS
{
	struct DlgManager_eventRegisterDialogueConsoleCommands_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Console" },
		{ "Comment", "// Registers all the DlgSystem Module console commands.\n// To set the custom reference WorldContextObjectPtr, set it with SetDialoguePersistentWorldContextObject\n// @return true on success, false otherwise\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Registers all the DlgSystem Module console commands.\nTo set the custom reference WorldContextObjectPtr, set it with SetDialoguePersistentWorldContextObject\n@return true on success, false otherwise" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterDialogueConsoleCommands constinit property declarations *******
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventRegisterDialogueConsoleCommands_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterDialogueConsoleCommands constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterDialogueConsoleCommands Property Definitions ******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgManager_eventRegisterDialogueConsoleCommands_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RegisterDialogueConsoleCommands Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "RegisterDialogueConsoleCommands", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventRegisterDialogueConsoleCommands_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventRegisterDialogueConsoleCommands_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execRegisterDialogueConsoleCommands)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDlgManager::RegisterDialogueConsoleCommands();
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function RegisterDialogueConsoleCommands ***********************

// ********** Begin Class UDlgManager Function ResumeDialogueFromNodeGUID **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID_Statics
struct UHT_STATICS
{
	struct DlgManager_eventResumeDialogueFromNodeGUID_Parms
	{
		UDlgDialogue* Dialogue;
		TArray<UObject*> Participants;
		FGuid StartNodeGUID;
		TSet<FGuid> AlreadyVisitedNodes;
		bool bFireEnterEvents;
		UDlgContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "/**\n\x09* Starts a Dialogue with the provided Dialogue and Participants array, at the given entry point\n\x09*\n\x09* This method can fail in the following situations:\n\x09*  - The Participants number does not match the number of participants from the Dialogue.\n\x09*  - Any UObject in the Participant array does not implement the Participant Interface\n\x09*  - Participant->GetParticipantName() does not exist in the Dialogue\n\x09*  - The given node GUID is invalid\n\x09*  - The starter node does not have any valid child\n\x09*\n\x09* @param Dialogue\x09\x09\x09\x09- The dialogue asset to start\n\x09* @param Participants\x09\x09\x09- Array of participants, has to match with the expected input for the Dialogue\n\x09* @param StartNodeGUID\x09\x09\x09- GUID of the node the dialogue is resumed at\n\x09* @param AlreadyVisitedNodes\x09- Set of nodes already visited in the context the last time this Dialogue was going on.\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09  Can be acquired via GetVisitedNodeGUIDs() on the context\n\x09* @param bFireEnterEvents\x09\x09- decides if the enter events should be fired on the resumed node or not\n\x09* @returns The dialogue context object or nullptr if something wrong happened\n\x09*/" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Starts a Dialogue with the provided Dialogue and Participants array, at the given entry point\n\nThis method can fail in the following situations:\n - The Participants number does not match the number of participants from the Dialogue.\n - Any UObject in the Participant array does not implement the Participant Interface\n - Participant->GetParticipantName() does not exist in the Dialogue\n - The given node GUID is invalid\n - The starter node does not have any valid child\n\n@param Dialogue                               - The dialogue asset to start\n@param Participants                   - Array of participants, has to match with the expected input for the Dialogue\n@param StartNodeGUID                  - GUID of the node the dialogue is resumed at\n@param AlreadyVisitedNodes    - Set of nodes already visited in the context the last time this Dialogue was going on.\n                                                                Can be acquired via GetVisitedNodeGUIDs() on the context\n@param bFireEnterEvents               - decides if the enter events should be fired on the resumed node or not\n@returns The dialogue context object or nullptr if something wrong happened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlreadyVisitedNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResumeDialogueFromNodeGUID constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartNodeGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlreadyVisitedNodes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AlreadyVisitedNodes;
	static void NewProp_bFireEnterEvents_SetBit(void* Obj)
	{
		((DlgManager_eventResumeDialogueFromNodeGUID_Parms*)Obj)->bFireEnterEvents = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEnterEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResumeDialogueFromNodeGUID constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResumeDialogueFromNodeGUID Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeGUID_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeGUID_Parms, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participants_MetaData), NewProp_Participants_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StartNodeGUID = { "StartNodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeGUID_Parms, StartNodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNodeGUID_MetaData), NewProp_StartNodeGUID_MetaData) };
static_assert(TModels_V<CGetTypeHashable, FGuid>, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AlreadyVisitedNodes_ElementProp = { "AlreadyVisitedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_AlreadyVisitedNodes = { "AlreadyVisitedNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeGUID_Parms, AlreadyVisitedNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlreadyVisitedNodes_MetaData), NewProp_AlreadyVisitedNodes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFireEnterEvents = { "bFireEnterEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgManager_eventResumeDialogueFromNodeGUID_Parms), &UHT_STATICS::NewProp_bFireEnterEvents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeGUID_Parms, ReturnValue), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartNodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlreadyVisitedNodes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlreadyVisitedNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFireEnterEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ResumeDialogueFromNodeGUID Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "ResumeDialogueFromNodeGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventResumeDialogueFromNodeGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventResumeDialogueFromNodeGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execResumeDialogueFromNodeGUID)
{
	P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_Participants);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_StartNodeGUID);
	P_GET_TSET_REF(FGuid,Z_Param_Out_AlreadyVisitedNodes);
	P_GET_UBOOL(Z_Param_bFireEnterEvents);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgContext**)Z_Param__Result=UDlgManager::ResumeDialogueFromNodeGUID(Z_Param_Dialogue,Z_Param_Out_Participants,Z_Param_Out_StartNodeGUID,Z_Param_Out_AlreadyVisitedNodes,Z_Param_bFireEnterEvents);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function ResumeDialogueFromNodeGUID ****************************

// ********** Begin Class UDlgManager Function ResumeDialogueFromNodeIndex *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex_Statics
struct UHT_STATICS
{
	struct DlgManager_eventResumeDialogueFromNodeIndex_Parms
	{
		UDlgDialogue* Dialogue;
		TArray<UObject*> Participants;
		int32 StartIndex;
		TSet<int32> AlreadyVisitedNodes;
		bool bFireEnterEvents;
		UDlgContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "/**\n\x09 * Starts a Dialogue with the provided Dialogue and Participants array, at the given entry point\n\x09 *\n\x09 * NOTE: You should most likely use ResumeDialogueFromNodeGUID\n\x09 *\n\x09 * This method can fail in the following situations:\n\x09 *  - The Participants number does not match the number of participants from the Dialogue.\n\x09 *  - Any UObject in the Participant array does not implement the Participant Interface\n\x09 *  - Participant->GetParticipantName() does not exist in the Dialogue\n\x09 *  - The given node index is invalid\n\x09 *  - The starter node does not have any valid child\n\x09 *\n\x09 * @param Dialogue\x09\x09\x09\x09- The dialogue asset to start\n\x09 * @param Participants\x09\x09\x09- Array of participants, has to match with the expected input for the Dialogue\n\x09 * @param StartIndex\x09\x09\x09- Index of the node the dialogue is resumed at\n\x09 * @param AlreadyVisitedNodes\x09- Set of nodes already visited in the context the last time this Dialogue was going on.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  Can be acquired via GetVisitedNodeIndices() on the context\n\x09 * @param bFireEnterEvents\x09\x09- decides if the enter events should be fired on the resumed node or not\n\x09 * @returns The dialogue context object or nullptr if something wrong happened\n\x09 */" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Starts a Dialogue with the provided Dialogue and Participants array, at the given entry point\n\nNOTE: You should most likely use ResumeDialogueFromNodeGUID\n\nThis method can fail in the following situations:\n - The Participants number does not match the number of participants from the Dialogue.\n - Any UObject in the Participant array does not implement the Participant Interface\n - Participant->GetParticipantName() does not exist in the Dialogue\n - The given node index is invalid\n - The starter node does not have any valid child\n\n@param Dialogue                              - The dialogue asset to start\n@param Participants                  - Array of participants, has to match with the expected input for the Dialogue\n@param StartIndex                    - Index of the node the dialogue is resumed at\n@param AlreadyVisitedNodes   - Set of nodes already visited in the context the last time this Dialogue was going on.\n                                                               Can be acquired via GetVisitedNodeIndices() on the context\n@param bFireEnterEvents              - decides if the enter events should be fired on the resumed node or not\n@returns The dialogue context object or nullptr if something wrong happened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[] = {
		{ "DisplayName", "Start Node Index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlreadyVisitedNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResumeDialogueFromNodeIndex constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AlreadyVisitedNodes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AlreadyVisitedNodes;
	static void NewProp_bFireEnterEvents_SetBit(void* Obj)
	{
		((DlgManager_eventResumeDialogueFromNodeIndex_Parms*)Obj)->bFireEnterEvents = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEnterEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResumeDialogueFromNodeIndex constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResumeDialogueFromNodeIndex Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeIndex_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeIndex_Parms, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participants_MetaData), NewProp_Participants_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeIndex_Parms, StartIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartIndex_MetaData), NewProp_StartIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AlreadyVisitedNodes_ElementProp = { "AlreadyVisitedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_AlreadyVisitedNodes = { "AlreadyVisitedNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeIndex_Parms, AlreadyVisitedNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlreadyVisitedNodes_MetaData), NewProp_AlreadyVisitedNodes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFireEnterEvents = { "bFireEnterEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgManager_eventResumeDialogueFromNodeIndex_Parms), &UHT_STATICS::NewProp_bFireEnterEvents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventResumeDialogueFromNodeIndex_Parms, ReturnValue), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlreadyVisitedNodes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlreadyVisitedNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFireEnterEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ResumeDialogueFromNodeIndex Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "ResumeDialogueFromNodeIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventResumeDialogueFromNodeIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventResumeDialogueFromNodeIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execResumeDialogueFromNodeIndex)
{
	P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_Participants);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
	P_GET_TSET_REF(int32,Z_Param_Out_AlreadyVisitedNodes);
	P_GET_UBOOL(Z_Param_bFireEnterEvents);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgContext**)Z_Param__Result=UDlgManager::ResumeDialogueFromNodeIndex(Z_Param_Dialogue,Z_Param_Out_Participants,Z_Param_StartIndex,Z_Param_Out_AlreadyVisitedNodes,Z_Param_bFireEnterEvents);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function ResumeDialogueFromNodeIndex ***************************

// ********** Begin Class UDlgManager Function SetDialogueHistory **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_SetDialogueHistory_Statics
struct UHT_STATICS
{
	struct DlgManager_eventSetDialogueHistory_Parms
	{
		TMap<FGuid,FDlgHistory> DlgHistory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Memory" },
		{ "Comment", "// Sets the FDlgMemory Dialogue history.\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Sets the FDlgMemory Dialogue history." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DlgHistory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDialogueHistory constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DlgHistory_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DlgHistory_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DlgHistory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDialogueHistory constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDialogueHistory Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DlgHistory_ValueProp = { "DlgHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgHistory, METADATA_PARAMS(0, nullptr) }; // 0f5ae929b52f0f8a898ab6a5897610cc4fe94c21
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DlgHistory_Key_KeyProp = { "DlgHistory_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_DlgHistory = { "DlgHistory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventSetDialogueHistory_Parms, DlgHistory), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DlgHistory_MetaData), NewProp_DlgHistory_MetaData) }; // 0f5ae929b52f0f8a898ab6a5897610cc4fe94c21
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DlgHistory_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DlgHistory_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DlgHistory,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDialogueHistory Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "SetDialogueHistory", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventSetDialogueHistory_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventSetDialogueHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_SetDialogueHistory(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execSetDialogueHistory)
{
	P_GET_TMAP_REF(FGuid,FDlgHistory,Z_Param_Out_DlgHistory);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::SetDialogueHistory(Z_Param_Out_DlgHistory);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function SetDialogueHistory ************************************

// ********** Begin Class UDlgManager Function SetDialoguePersistentWorldContextObject *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject_Statics
struct UHT_STATICS
{
	struct DlgManager_eventSetDialoguePersistentWorldContextObject_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Persistence" },
		{ "Comment", "// If the user wants to set the world context object manually\n// Otherwise just use GetDialogueWorld\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "If the user wants to set the world context object manually\nOtherwise just use GetDialogueWorld" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDialoguePersistentWorldContextObject constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDialoguePersistentWorldContextObject constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDialoguePersistentWorldContextObject Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventSetDialoguePersistentWorldContextObject_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDialoguePersistentWorldContextObject Property Definitions ************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "SetDialoguePersistentWorldContextObject", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventSetDialoguePersistentWorldContextObject_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventSetDialoguePersistentWorldContextObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execSetDialoguePersistentWorldContextObject)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDlgManager::SetDialoguePersistentWorldContextObject(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function SetDialoguePersistentWorldContextObject ***************

// ********** Begin Class UDlgManager Function StartDialogue ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_StartDialogue_Statics
struct UHT_STATICS
{
	struct DlgManager_eventStartDialogue_Parms
	{
		UDlgDialogue* Dialogue;
		TArray<UObject*> Participants;
		UDlgContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "/**\n\x09 * Starts a Dialogue with the provided Dialogue and Participants array\n\x09 * This method can fail in the following situations:\n\x09 *  - The Participants number does not match the number of participants from the Dialogue.\n\x09 *  - Any UObject in the Participant array does not implement the Participant Interface\n\x09 *  - Participant->GetParticipantName() does not exist in the Dialogue\n\x09 *\n\x09 * @returns The dialogue context object or nullptr if something wrong happened\n\x09 */" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Starts a Dialogue with the provided Dialogue and Participants array\nThis method can fail in the following situations:\n - The Participants number does not match the number of participants from the Dialogue.\n - Any UObject in the Participant array does not implement the Participant Interface\n - Participant->GetParticipantName() does not exist in the Dialogue\n\n@returns The dialogue context object or nullptr if something wrong happened" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartDialogue constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Participants;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartDialogue constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartDialogue Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participants_Inner = { "Participants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue_Parms, Participants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participants_MetaData), NewProp_Participants_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue_Parms, ReturnValue), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participants,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartDialogue Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "StartDialogue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventStartDialogue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_StartDialogue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execStartDialogue)
{
	P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_Participants);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgContext**)Z_Param__Result=UDlgManager::StartDialogue(Z_Param_Dialogue,Z_Param_Out_Participants);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function StartDialogue *****************************************

// ********** Begin Class UDlgManager Function StartDialogue2 **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_StartDialogue2_Statics
struct UHT_STATICS
{
	struct DlgManager_eventStartDialogue2_Parms
	{
		UDlgDialogue* Dialogue;
		UObject* Participant0;
		UObject* Participant1;
		UDlgContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "// Helper methods that allows you to start a Dialogue with 2 participants\n// For N Participants just use StartDialogue\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Helper methods that allows you to start a Dialogue with 2 participants\nFor N Participants just use StartDialogue" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartDialogue2 constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartDialogue2 constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartDialogue2 Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue2_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant0 = { "Participant0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue2_Parms, Participant0), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant1 = { "Participant1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue2_Parms, Participant1), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue2_Parms, ReturnValue), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant0,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant1,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartDialogue2 Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "StartDialogue2", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventStartDialogue2_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventStartDialogue2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_StartDialogue2(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execStartDialogue2)
{
	P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
	P_GET_OBJECT(UObject,Z_Param_Participant0);
	P_GET_OBJECT(UObject,Z_Param_Participant1);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgContext**)Z_Param__Result=UDlgManager::StartDialogue2(Z_Param_Dialogue,Z_Param_Participant0,Z_Param_Participant1);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function StartDialogue2 ****************************************

// ********** Begin Class UDlgManager Function StartDialogue3 **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_StartDialogue3_Statics
struct UHT_STATICS
{
	struct DlgManager_eventStartDialogue3_Parms
	{
		UDlgDialogue* Dialogue;
		UObject* Participant0;
		UObject* Participant1;
		UObject* Participant2;
		UDlgContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "// Helper methods that allows you to start a Dialogue with 3 participants\n// For N Participants just use StartDialogue\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Helper methods that allows you to start a Dialogue with 3 participants\nFor N Participants just use StartDialogue" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartDialogue3 constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartDialogue3 constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartDialogue3 Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue3_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant0 = { "Participant0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue3_Parms, Participant0), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant1 = { "Participant1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue3_Parms, Participant1), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant2 = { "Participant2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue3_Parms, Participant2), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue3_Parms, ReturnValue), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant0,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant1,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant2,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartDialogue3 Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "StartDialogue3", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventStartDialogue3_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventStartDialogue3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_StartDialogue3(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execStartDialogue3)
{
	P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
	P_GET_OBJECT(UObject,Z_Param_Participant0);
	P_GET_OBJECT(UObject,Z_Param_Participant1);
	P_GET_OBJECT(UObject,Z_Param_Participant2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgContext**)Z_Param__Result=UDlgManager::StartDialogue3(Z_Param_Dialogue,Z_Param_Participant0,Z_Param_Participant1,Z_Param_Participant2);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function StartDialogue3 ****************************************

// ********** Begin Class UDlgManager Function StartDialogue4 **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_StartDialogue4_Statics
struct UHT_STATICS
{
	struct DlgManager_eventStartDialogue4_Parms
	{
		UDlgDialogue* Dialogue;
		UObject* Participant0;
		UObject* Participant1;
		UObject* Participant2;
		UObject* Participant3;
		UDlgContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "// Helper methods that allows you to start a Dialogue with 4 participants\n// For N Participants just use StartDialogue\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Helper methods that allows you to start a Dialogue with 4 participants\nFor N Participants just use StartDialogue" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartDialogue4 constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartDialogue4 constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartDialogue4 Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant0 = { "Participant0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, Participant0), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant1 = { "Participant1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, Participant1), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant2 = { "Participant2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, Participant2), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant3 = { "Participant3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, Participant3), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogue4_Parms, ReturnValue), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant0,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant1,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant2,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant3,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartDialogue4 Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "StartDialogue4", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventStartDialogue4_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventStartDialogue4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_StartDialogue4(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execStartDialogue4)
{
	P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
	P_GET_OBJECT(UObject,Z_Param_Participant0);
	P_GET_OBJECT(UObject,Z_Param_Participant1);
	P_GET_OBJECT(UObject,Z_Param_Participant2);
	P_GET_OBJECT(UObject,Z_Param_Participant3);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgContext**)Z_Param__Result=UDlgManager::StartDialogue4(Z_Param_Dialogue,Z_Param_Participant0,Z_Param_Participant1,Z_Param_Participant2,Z_Param_Participant3);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function StartDialogue4 ****************************************

// ********** Begin Class UDlgManager Function StartDialogueWithDefaultParticipants ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants_Statics
struct UHT_STATICS
{
	struct DlgManager_eventStartDialogueWithDefaultParticipants_Parms
	{
		UObject* WorldContextObject;
		UDlgDialogue* Dialogue;
		UDlgContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "/**\n\x09 * Starts a Dialogue with the provided Dialogue\n\x09 * The function checks all the objects in the world to gather the participants\n\x09 * This method can fail in the following situations:\n\x09 *  - The Dialogue has a Participant which does not exist in the World\n\x09 *\x09- Multiple Objects are using the same Participant Name in the World\n\x09 *\n\x09 *\x09NOTE: If this fails because it can't find the unique participants you should use the StartDialogue* functions\n\x09 *\n\x09 * @returns The dialogue context object or nullptr if something went wrong\n\x09 */" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Starts a Dialogue with the provided Dialogue\nThe function checks all the objects in the world to gather the participants\nThis method can fail in the following situations:\n - The Dialogue has a Participant which does not exist in the World\n     - Multiple Objects are using the same Participant Name in the World\n\n     NOTE: If this fails because it can't find the unique participants you should use the StartDialogue* functions\n\n@returns The dialogue context object or nullptr if something went wrong" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartDialogueWithDefaultParticipants constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartDialogueWithDefaultParticipants constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartDialogueWithDefaultParticipants Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogueWithDefaultParticipants_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogueWithDefaultParticipants_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartDialogueWithDefaultParticipants_Parms, ReturnValue), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartDialogueWithDefaultParticipants Property Definitions ***************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "StartDialogueWithDefaultParticipants", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventStartDialogueWithDefaultParticipants_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventStartDialogueWithDefaultParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execStartDialogueWithDefaultParticipants)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgContext**)Z_Param__Result=UDlgManager::StartDialogueWithDefaultParticipants(Z_Param_WorldContextObject,Z_Param_Dialogue);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function StartDialogueWithDefaultParticipants ******************

// ********** Begin Class UDlgManager Function StartMonologue **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_StartMonologue_Statics
struct UHT_STATICS
{
	struct DlgManager_eventStartMonologue_Parms
	{
		UDlgDialogue* Dialogue;
		UObject* Participant;
		UDlgContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Launch" },
		{ "Comment", "// Helper methods that allows you to start a Dialogue with only a participant\n// For N Participants just use StartDialogue\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Helper methods that allows you to start a Dialogue with only a participant\nFor N Participants just use StartDialogue" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartMonologue constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartMonologue constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartMonologue Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartMonologue_Parms, Dialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartMonologue_Parms, Participant), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgManager_eventStartMonologue_Parms, ReturnValue), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function StartMonologue Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "StartMonologue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventStartMonologue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventStartMonologue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_StartMonologue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execStartMonologue)
{
	P_GET_OBJECT(UDlgDialogue,Z_Param_Dialogue);
	P_GET_OBJECT(UObject,Z_Param_Participant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgContext**)Z_Param__Result=UDlgManager::StartMonologue(Z_Param_Dialogue,Z_Param_Participant);
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function StartMonologue ****************************************

// ********** Begin Class UDlgManager Function UnregisterDialogueConsoleCommands *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands_Statics
struct UHT_STATICS
{
	struct DlgManager_eventUnregisterDialogueConsoleCommands_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Console" },
		{ "Comment", "// Unregister all the DlgSystem Module console commands.\n// @return true on success, false otherwise\n" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Unregister all the DlgSystem Module console commands.\n@return true on success, false otherwise" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnregisterDialogueConsoleCommands constinit property declarations *****
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgManager_eventUnregisterDialogueConsoleCommands_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnregisterDialogueConsoleCommands constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnregisterDialogueConsoleCommands Property Definitions ****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgManager_eventUnregisterDialogueConsoleCommands_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UnregisterDialogueConsoleCommands Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgManager, nullptr, "UnregisterDialogueConsoleCommands", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgManager_eventUnregisterDialogueConsoleCommands_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgManager_eventUnregisterDialogueConsoleCommands_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgManager::execUnregisterDialogueConsoleCommands)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDlgManager::UnregisterDialogueConsoleCommands();
	P_NATIVE_END;
}
// ********** End Class UDlgManager Function UnregisterDialogueConsoleCommands *********************

// ********** Begin Class UDlgManager **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgManager_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n *  Class providing a collection of static functions to start a conversation and work with Dialogues.\n */" },
		{ "IncludePath", "DlgManager.h" },
		{ "ModuleRelativePath", "DlgManager.h" },
		{ "ToolTip", "Class providing a collection of static functions to start a conversation and work with Dialogues." },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgManager constinit property declarations ******************************
// ********** End Class UDlgManager constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanStartDialogue"), .Pointer = &UDlgManager::execCanStartDialogue },
		{ .NameUTF8 = UTF8TEXT("ClearDialogueHistory"), .Pointer = &UDlgManager::execClearDialogueHistory },
		{ .NameUTF8 = UTF8TEXT("ClearDialoguePersistentWorldContextObject"), .Pointer = &UDlgManager::execClearDialoguePersistentWorldContextObject },
		{ .NameUTF8 = UTF8TEXT("DoesObjectImplementDialogueParticipantInterface"), .Pointer = &UDlgManager::execDoesObjectImplementDialogueParticipantInterface },
		{ .NameUTF8 = UTF8TEXT("GetAllDialoguesBoolNames"), .Pointer = &UDlgManager::execGetAllDialoguesBoolNames },
		{ .NameUTF8 = UTF8TEXT("GetAllDialoguesConditionNames"), .Pointer = &UDlgManager::execGetAllDialoguesConditionNames },
		{ .NameUTF8 = UTF8TEXT("GetAllDialoguesEventNames"), .Pointer = &UDlgManager::execGetAllDialoguesEventNames },
		{ .NameUTF8 = UTF8TEXT("GetAllDialoguesFloatNames"), .Pointer = &UDlgManager::execGetAllDialoguesFloatNames },
		{ .NameUTF8 = UTF8TEXT("GetAllDialoguesIntNames"), .Pointer = &UDlgManager::execGetAllDialoguesIntNames },
		{ .NameUTF8 = UTF8TEXT("GetAllDialoguesNameNames"), .Pointer = &UDlgManager::execGetAllDialoguesNameNames },
		{ .NameUTF8 = UTF8TEXT("GetAllDialoguesParticipantNames"), .Pointer = &UDlgManager::execGetAllDialoguesParticipantNames },
		{ .NameUTF8 = UTF8TEXT("GetAllDialoguesSpeakerStates"), .Pointer = &UDlgManager::execGetAllDialoguesSpeakerStates },
		{ .NameUTF8 = UTF8TEXT("GetDialogueHistory"), .Pointer = &UDlgManager::execGetDialogueHistory },
		{ .NameUTF8 = UTF8TEXT("GetDialoguesParticipantBoolNames"), .Pointer = &UDlgManager::execGetDialoguesParticipantBoolNames },
		{ .NameUTF8 = UTF8TEXT("GetDialoguesParticipantConditionNames"), .Pointer = &UDlgManager::execGetDialoguesParticipantConditionNames },
		{ .NameUTF8 = UTF8TEXT("GetDialoguesParticipantEventNames"), .Pointer = &UDlgManager::execGetDialoguesParticipantEventNames },
		{ .NameUTF8 = UTF8TEXT("GetDialoguesParticipantFloatNames"), .Pointer = &UDlgManager::execGetDialoguesParticipantFloatNames },
		{ .NameUTF8 = UTF8TEXT("GetDialoguesParticipantFNameNames"), .Pointer = &UDlgManager::execGetDialoguesParticipantFNameNames },
		{ .NameUTF8 = UTF8TEXT("GetDialoguesParticipantIntNames"), .Pointer = &UDlgManager::execGetDialoguesParticipantIntNames },
		{ .NameUTF8 = UTF8TEXT("GetDialoguesParticipantNames"), .Pointer = &UDlgManager::execGetDialoguesParticipantNames },
		{ .NameUTF8 = UTF8TEXT("GetDialoguesSpeakerStates"), .Pointer = &UDlgManager::execGetDialoguesSpeakerStates },
		{ .NameUTF8 = UTF8TEXT("GetDialogueWorld"), .Pointer = &UDlgManager::execGetDialogueWorld },
		{ .NameUTF8 = UTF8TEXT("GetObjectsMapWithDialogueParticipantInterface"), .Pointer = &UDlgManager::execGetObjectsMapWithDialogueParticipantInterface },
		{ .NameUTF8 = UTF8TEXT("GetObjectsWithDialogueParticipantInterface"), .Pointer = &UDlgManager::execGetObjectsWithDialogueParticipantInterface },
		{ .NameUTF8 = UTF8TEXT("IsObjectACustomCondition"), .Pointer = &UDlgManager::execIsObjectACustomCondition },
		{ .NameUTF8 = UTF8TEXT("IsObjectACustomEvent"), .Pointer = &UDlgManager::execIsObjectACustomEvent },
		{ .NameUTF8 = UTF8TEXT("IsObjectACustomTextArgument"), .Pointer = &UDlgManager::execIsObjectACustomTextArgument },
		{ .NameUTF8 = UTF8TEXT("IsObjectANodeData"), .Pointer = &UDlgManager::execIsObjectANodeData },
		{ .NameUTF8 = UTF8TEXT("RegisterDialogueConsoleCommands"), .Pointer = &UDlgManager::execRegisterDialogueConsoleCommands },
		{ .NameUTF8 = UTF8TEXT("ResumeDialogueFromNodeGUID"), .Pointer = &UDlgManager::execResumeDialogueFromNodeGUID },
		{ .NameUTF8 = UTF8TEXT("ResumeDialogueFromNodeIndex"), .Pointer = &UDlgManager::execResumeDialogueFromNodeIndex },
		{ .NameUTF8 = UTF8TEXT("SetDialogueHistory"), .Pointer = &UDlgManager::execSetDialogueHistory },
		{ .NameUTF8 = UTF8TEXT("SetDialoguePersistentWorldContextObject"), .Pointer = &UDlgManager::execSetDialoguePersistentWorldContextObject },
		{ .NameUTF8 = UTF8TEXT("StartDialogue"), .Pointer = &UDlgManager::execStartDialogue },
		{ .NameUTF8 = UTF8TEXT("StartDialogue2"), .Pointer = &UDlgManager::execStartDialogue2 },
		{ .NameUTF8 = UTF8TEXT("StartDialogue3"), .Pointer = &UDlgManager::execStartDialogue3 },
		{ .NameUTF8 = UTF8TEXT("StartDialogue4"), .Pointer = &UDlgManager::execStartDialogue4 },
		{ .NameUTF8 = UTF8TEXT("StartDialogueWithDefaultParticipants"), .Pointer = &UDlgManager::execStartDialogueWithDefaultParticipants },
		{ .NameUTF8 = UTF8TEXT("StartMonologue"), .Pointer = &UDlgManager::execStartMonologue },
		{ .NameUTF8 = UTF8TEXT("UnregisterDialogueConsoleCommands"), .Pointer = &UDlgManager::execUnregisterDialogueConsoleCommands },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgManager_CanStartDialogue, "CanStartDialogue" }, // 7fd8132bfa053586aa989b574ae3e272fbda1789
		{ &Z_Construct_UFunction_UDlgManager_ClearDialogueHistory, "ClearDialogueHistory" }, // a72fdd73e5e878fd621b9ed0feca8d568e4fc3ba
		{ &Z_Construct_UFunction_UDlgManager_ClearDialoguePersistentWorldContextObject, "ClearDialoguePersistentWorldContextObject" }, // 295727a9b5bc58bb7adad0a2366260654734372e
		{ &Z_Construct_UFunction_UDlgManager_DoesObjectImplementDialogueParticipantInterface, "DoesObjectImplementDialogueParticipantInterface" }, // 17237c18cb33119917d91469dc334292e4fff28f
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesBoolNames, "GetAllDialoguesBoolNames" }, // bc6cf31dcec549bdf1cf4bbb079cbb36eea3aa75
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesConditionNames, "GetAllDialoguesConditionNames" }, // d08b9522933314a9b3752d27ddfd4f35ea549f7a
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesEventNames, "GetAllDialoguesEventNames" }, // 1c3117cf3e633b279ba9a921c694d7aba3196c50
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesFloatNames, "GetAllDialoguesFloatNames" }, // 56b388af1572097e135d140869a85c86266a7122
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesIntNames, "GetAllDialoguesIntNames" }, // 3b51d970aadc4a337ed1721a9ec18c320dd21f0c
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesNameNames, "GetAllDialoguesNameNames" }, // 96f2847a0eb4fce3d89f36ba571a61cbee87ad24
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesParticipantNames, "GetAllDialoguesParticipantNames" }, // 6da48ae0d2361cb6afa34471624a5f0817769ca4
		{ &Z_Construct_UFunction_UDlgManager_GetAllDialoguesSpeakerStates, "GetAllDialoguesSpeakerStates" }, // f664e367f031c443802a5b6b6c06801c876f247c
		{ &Z_Construct_UFunction_UDlgManager_GetDialogueHistory, "GetDialogueHistory" }, // c7953380f6ab31d30a6729e3578532856d0de20c
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantBoolNames, "GetDialoguesParticipantBoolNames" }, // 097e3848e3ca974b40812b810c39ae2643864eae
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantConditionNames, "GetDialoguesParticipantConditionNames" }, // 5261235572179204b3e1c6239f6cfe7e2d50bd03
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantEventNames, "GetDialoguesParticipantEventNames" }, // 8fc182b17957d767ab97a9915a02b08cce648cf4
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFloatNames, "GetDialoguesParticipantFloatNames" }, // 3ba9a1fcb5b03ebdb25ba2b7bab6aa67bab9e157
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantFNameNames, "GetDialoguesParticipantFNameNames" }, // 938d0e67a7c5f3e92ef869b88a93f4ce253fae48
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantIntNames, "GetDialoguesParticipantIntNames" }, // 9a4df18708d6eb670971002fac759e5923c09468
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesParticipantNames, "GetDialoguesParticipantNames" }, // 57198b3d09b42d10adb927a59fc166e88f976580
		{ &Z_Construct_UFunction_UDlgManager_GetDialoguesSpeakerStates, "GetDialoguesSpeakerStates" }, // cc7a02324078bd560f00a337526aea1c3136000d
		{ &Z_Construct_UFunction_UDlgManager_GetDialogueWorld, "GetDialogueWorld" }, // 52745c3b028771ed4ecce02a4fe7a1dab8ea1c89
		{ &Z_Construct_UFunction_UDlgManager_GetObjectsMapWithDialogueParticipantInterface, "GetObjectsMapWithDialogueParticipantInterface" }, // 445146bee174f5592112cab779655c0aad419232
		{ &Z_Construct_UFunction_UDlgManager_GetObjectsWithDialogueParticipantInterface, "GetObjectsWithDialogueParticipantInterface" }, // 56325b0b0942abbf5d1057ec05ff95d6b68dbedc
		{ &Z_Construct_UFunction_UDlgManager_IsObjectACustomCondition, "IsObjectACustomCondition" }, // af5b9643ed475915e41e3aab836dc64efd3ff8ee
		{ &Z_Construct_UFunction_UDlgManager_IsObjectACustomEvent, "IsObjectACustomEvent" }, // 29b3a98ee8dbae375068815d4e7b29837663dea5
		{ &Z_Construct_UFunction_UDlgManager_IsObjectACustomTextArgument, "IsObjectACustomTextArgument" }, // 57d9eefaaac7c58f61fbe4cb2e386bcfb1d8d44b
		{ &Z_Construct_UFunction_UDlgManager_IsObjectANodeData, "IsObjectANodeData" }, // 65a098fcfcbe7a5225a73d39671a771255e7018a
		{ &Z_Construct_UFunction_UDlgManager_RegisterDialogueConsoleCommands, "RegisterDialogueConsoleCommands" }, // 4495ef46986d438f885014d6292880d807969c0e
		{ &Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeGUID, "ResumeDialogueFromNodeGUID" }, // 936bdb5be524990a6604e95876170e41ab92d0b3
		{ &Z_Construct_UFunction_UDlgManager_ResumeDialogueFromNodeIndex, "ResumeDialogueFromNodeIndex" }, // 11b79e7dba6bcf357214f4f3c7b5128ce675a02e
		{ &Z_Construct_UFunction_UDlgManager_SetDialogueHistory, "SetDialogueHistory" }, // d28e93279c25a1e8e8ceab98efc0b62fb7a7f651
		{ &Z_Construct_UFunction_UDlgManager_SetDialoguePersistentWorldContextObject, "SetDialoguePersistentWorldContextObject" }, // 40cdea507bfb74b25e4e47d43503e67f5dac61f4
		{ &Z_Construct_UFunction_UDlgManager_StartDialogue, "StartDialogue" }, // c4b3ab9a9164f4c2dbbea9bedfc10a0e008c8493
		{ &Z_Construct_UFunction_UDlgManager_StartDialogue2, "StartDialogue2" }, // f59e6a14040c81698d6e5dca5d11cbf04d42d453
		{ &Z_Construct_UFunction_UDlgManager_StartDialogue3, "StartDialogue3" }, // 458c4ef4cda5ccc6858c99ce1186e60cdcc92881
		{ &Z_Construct_UFunction_UDlgManager_StartDialogue4, "StartDialogue4" }, // d58a9e795e7c5cda8c36ee580ea250fc93f23229
		{ &Z_Construct_UFunction_UDlgManager_StartDialogueWithDefaultParticipants, "StartDialogueWithDefaultParticipants" }, // b40256fe9601cfe94d33c4c15c390d4af77e0e1b
		{ &Z_Construct_UFunction_UDlgManager_StartMonologue, "StartMonologue" }, // bc1093684976347d653c3a9d3ed2942fc188ed28
		{ &Z_Construct_UFunction_UDlgManager_UnregisterDialogueConsoleCommands, "UnregisterDialogueConsoleCommands" }, // 4cf6969f5293a65eaf2a579305494a79f973ba17
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgManager,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDlgManager_StaticRegisterNativesUDlgManager()
{
	UClass* Class = UDlgManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgManager;
UClass* Z_Construct_UClass_UDlgManager(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgManager;
		if (!Z_Registration_Info_UClass_UDlgManager.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgManager"),
				Z_Registration_Info_UClass_UDlgManager.InnerSingleton,
				UDlgManager_StaticRegisterNativesUDlgManager,
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
		return Z_Registration_Info_UClass_UDlgManager.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgManager.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgManager.OuterSingleton;
}
#undef UHT_STATICS
UDlgManager::UDlgManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgManager);
UDlgManager::~UDlgManager() {}
// ********** End Class UDlgManager ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgObjectsArray, Z_Construct_UScriptStruct_FDlgObjectsArray_Statics::NewStructOps, TEXT("DlgObjectsArray"),&Z_Registration_Info_UScriptStruct_FDlgObjectsArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgObjectsArray), 1978688857U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgManager, TEXT("UDlgManager"), &Z_Registration_Info_UClass_UDlgManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgManager), 2729906327U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h__Script_DlgSystem_c52c898a13e1cccbfafe379284c4dc7505664d74{
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
