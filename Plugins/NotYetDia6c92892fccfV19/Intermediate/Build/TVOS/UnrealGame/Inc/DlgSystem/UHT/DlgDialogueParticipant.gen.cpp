// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgDialogueParticipant.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgDialogueParticipant() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextGender(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogueParticipant(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_IDlgDialogueParticipant(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogueParticipant(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_IDlgDialogueParticipant(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Interface UDlgDialogueParticipant Function CheckCondition **********************
struct DlgDialogueParticipant_eventCheckCondition_Parms
{
	const UDlgContext* Context;
	FName ConditionName;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventCheckCondition_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDlgDialogueParticipant::CheckCondition(const UDlgContext* Context, FName ConditionName) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CheckCondition instead.");
	DlgDialogueParticipant_eventCheckCondition_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_CheckCondition = FName(TEXT("CheckCondition"));
bool IDlgDialogueParticipant::Execute_CheckCondition(const UObject* O, const UDlgContext* Context, FName ConditionName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventCheckCondition_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_CheckCondition);
	if (Func)
	{
		Parms.Context=std::move(Context);
		Parms.ConditionName=std::move(ConditionName);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->CheckCondition_Implementation(Context,ConditionName);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant|Condition" },
		{ "Comment", "// Used for the condition type EDlgConditionType::EventCall (Check Dialogue Named Condition)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the condition type EDlgConditionType::EventCall (Check Dialogue Named Condition)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CheckCondition constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConditionName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventCheckCondition_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CheckCondition constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CheckCondition Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventCheckCondition_Parms, Context), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ConditionName = { "ConditionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventCheckCondition_Parms, ConditionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogueParticipant_eventCheckCondition_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConditionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CheckCondition Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "CheckCondition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventCheckCondition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventCheckCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execCheckCondition)
{
	P_GET_OBJECT(UDlgContext,Z_Param_Context);
	P_GET_PROPERTY(FNameProperty,Z_Param_ConditionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckCondition_Implementation(Z_Param_Context,Z_Param_ConditionName);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function CheckCondition ************************

// ********** Begin Interface UDlgDialogueParticipant Function GetBoolValue ************************
struct DlgDialogueParticipant_eventGetBoolValue_Parms
{
	FName ValueName;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventGetBoolValue_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDlgDialogueParticipant::GetBoolValue(FName ValueName) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetBoolValue instead.");
	DlgDialogueParticipant_eventGetBoolValue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_GetBoolValue = FName(TEXT("GetBoolValue"));
bool IDlgDialogueParticipant::Execute_GetBoolValue(const UObject* O, FName ValueName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventGetBoolValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetBoolValue);
	if (Func)
	{
		Parms.ValueName=std::move(ValueName);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->GetBoolValue_Implementation(ValueName);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant|Condition" },
		{ "Comment", "// Used for the condition type EDlgConditionType::BoolCall (Check Dialogue Bool Value)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the condition type EDlgConditionType::BoolCall (Check Dialogue Bool Value)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoolValue constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventGetBoolValue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoolValue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoolValue Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetBoolValue_Parms, ValueName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogueParticipant_eventGetBoolValue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBoolValue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetBoolValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventGetBoolValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventGetBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execGetBoolValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolValue_Implementation(Z_Param_ValueName);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function GetBoolValue **************************

// ********** Begin Interface UDlgDialogueParticipant Function GetFloatValue ***********************
struct DlgDialogueParticipant_eventGetFloatValue_Parms
{
	FName ValueName;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventGetFloatValue_Parms()
		: ReturnValue(0)
	{
	}
};
float IDlgDialogueParticipant::GetFloatValue(FName ValueName) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFloatValue instead.");
	DlgDialogueParticipant_eventGetFloatValue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_GetFloatValue = FName(TEXT("GetFloatValue"));
float IDlgDialogueParticipant::Execute_GetFloatValue(const UObject* O, FName ValueName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventGetFloatValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetFloatValue);
	if (Func)
	{
		Parms.ValueName=std::move(ValueName);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->GetFloatValue_Implementation(ValueName);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant|Condition" },
		{ "Comment", "// Used for the condition type EDlgConditionType::FloatCall (Check Dialogue Float Value)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the condition type EDlgConditionType::FloatCall (Check Dialogue Float Value)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFloatValue constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFloatValue constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFloatValue Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetFloatValue_Parms, ValueName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFloatValue Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetFloatValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventGetFloatValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventGetFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execGetFloatValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloatValue_Implementation(Z_Param_ValueName);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function GetFloatValue *************************

// ********** Begin Interface UDlgDialogueParticipant Function GetIntValue *************************
struct DlgDialogueParticipant_eventGetIntValue_Parms
{
	FName ValueName;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventGetIntValue_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IDlgDialogueParticipant::GetIntValue(FName ValueName) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetIntValue instead.");
	DlgDialogueParticipant_eventGetIntValue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_GetIntValue = FName(TEXT("GetIntValue"));
int32 IDlgDialogueParticipant::Execute_GetIntValue(const UObject* O, FName ValueName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventGetIntValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetIntValue);
	if (Func)
	{
		Parms.ValueName=std::move(ValueName);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->GetIntValue_Implementation(ValueName);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant|Condition" },
		{ "Comment", "// Used for the condition type EDlgConditionType::IntCall (Check Dialogue Int Value)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the condition type EDlgConditionType::IntCall (Check Dialogue Int Value)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIntValue constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIntValue constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIntValue Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetIntValue_Parms, ValueName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetIntValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetIntValue Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetIntValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventGetIntValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventGetIntValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execGetIntValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntValue_Implementation(Z_Param_ValueName);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function GetIntValue ***************************

// ********** Begin Interface UDlgDialogueParticipant Function GetNameValue ************************
struct DlgDialogueParticipant_eventGetNameValue_Parms
{
	FName ValueName;
	FName ReturnValue;
};
FName IDlgDialogueParticipant::GetNameValue(FName ValueName) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetNameValue instead.");
	DlgDialogueParticipant_eventGetNameValue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_GetNameValue = FName(TEXT("GetNameValue"));
FName IDlgDialogueParticipant::Execute_GetNameValue(const UObject* O, FName ValueName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventGetNameValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetNameValue);
	if (Func)
	{
		Parms.ValueName=std::move(ValueName);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->GetNameValue_Implementation(ValueName);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant|Condition" },
		{ "Comment", "// Used for the condition type EDlgConditionType::NameCall (Check Dialogue Name Value)\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the condition type EDlgConditionType::NameCall (Check Dialogue Name Value)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNameValue constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNameValue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNameValue Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetNameValue_Parms, ValueName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetNameValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNameValue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetNameValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventGetNameValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventGetNameValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execGetNameValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetNameValue_Implementation(Z_Param_ValueName);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function GetNameValue **************************

// ********** Begin Interface UDlgDialogueParticipant Function GetParticipantDisplayName ***********
struct DlgDialogueParticipant_eventGetParticipantDisplayName_Parms
{
	FName ActiveSpeaker;
	FText ReturnValue;
};
FText IDlgDialogueParticipant::GetParticipantDisplayName(FName ActiveSpeaker) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParticipantDisplayName instead.");
	DlgDialogueParticipant_eventGetParticipantDisplayName_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_GetParticipantDisplayName = FName(TEXT("GetParticipantDisplayName"));
FText IDlgDialogueParticipant::Execute_GetParticipantDisplayName(const UObject* O, FName ActiveSpeaker)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventGetParticipantDisplayName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetParticipantDisplayName);
	if (Func)
	{
		Parms.ActiveSpeaker=std::move(ActiveSpeaker);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->GetParticipantDisplayName_Implementation(ActiveSpeaker);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantDisplayName constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveSpeaker;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantDisplayName constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantDisplayName Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ActiveSpeaker = { "ActiveSpeaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantDisplayName_Parms, ActiveSpeaker), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveSpeaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantDisplayName Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetParticipantDisplayName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventGetParticipantDisplayName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventGetParticipantDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execGetParticipantDisplayName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ActiveSpeaker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetParticipantDisplayName_Implementation(Z_Param_ActiveSpeaker);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function GetParticipantDisplayName *************

// ********** Begin Interface UDlgDialogueParticipant Function GetParticipantGender ****************
struct DlgDialogueParticipant_eventGetParticipantGender_Parms
{
	ETextGender ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventGetParticipantGender_Parms()
		: ReturnValue((ETextGender)0)
	{
	}
};
ETextGender IDlgDialogueParticipant::GetParticipantGender() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParticipantGender instead.");
	DlgDialogueParticipant_eventGetParticipantGender_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_GetParticipantGender = FName(TEXT("GetParticipantGender"));
ETextGender IDlgDialogueParticipant::Execute_GetParticipantGender(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventGetParticipantGender_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetParticipantGender);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->GetParticipantGender_Implementation();
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "/** May be used for formatted node texts, check https://docs.unrealengine.com/en-us/Gameplay/Localization/Formatting for more information */" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "May be used for formatted node texts, check https://docs.unrealengine.com/en-us/Gameplay/Localization/Formatting for more information" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantGender constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantGender constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantGender Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantGender_Parms, ReturnValue), Z_Construct_UEnum_Engine_ETextGender, METADATA_PARAMS(0, nullptr) }; // 6cea441408bd94f69c1c03aa943172fd70a9135c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantGender Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetParticipantGender", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventGetParticipantGender_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventGetParticipantGender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execGetParticipantGender)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETextGender*)Z_Param__Result=P_THIS->GetParticipantGender_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function GetParticipantGender ******************

// ********** Begin Interface UDlgDialogueParticipant Function GetParticipantIcon ******************
struct DlgDialogueParticipant_eventGetParticipantIcon_Parms
{
	FName ActiveSpeaker;
	FName ActiveSpeakerState;
	UTexture2D* ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventGetParticipantIcon_Parms()
		: ReturnValue(NULL)
	{
	}
};
UTexture2D* IDlgDialogueParticipant::GetParticipantIcon(FName ActiveSpeaker, FName ActiveSpeakerState) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParticipantIcon instead.");
	DlgDialogueParticipant_eventGetParticipantIcon_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_GetParticipantIcon = FName(TEXT("GetParticipantIcon"));
UTexture2D* IDlgDialogueParticipant::Execute_GetParticipantIcon(const UObject* O, FName ActiveSpeaker, FName ActiveSpeakerState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventGetParticipantIcon_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetParticipantIcon);
	if (Func)
	{
		Parms.ActiveSpeaker=std::move(ActiveSpeaker);
		Parms.ActiveSpeakerState=std::move(ActiveSpeakerState);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->GetParticipantIcon_Implementation(ActiveSpeaker,ActiveSpeakerState);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "/**\n\x09* @param\x09""ActiveSpeaker: name of the active speaker at the time of the call (might or might not this participant)\n\x09* @param\x09""ActiveSpeakerState: state of the active participant (might or might not belong to this participant)\n\x09*\x09\x09\x09If it is not displayed in editor it has to be turned on in the dialogue settings\n\x09* @return\x09Participant icon to display\n\x09*/" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "@param        ActiveSpeaker: name of the active speaker at the time of the call (might or might not this participant)\n@param        ActiveSpeakerState: state of the active participant (might or might not belong to this participant)\n                      If it is not displayed in editor it has to be turned on in the dialogue settings\n@return       Participant icon to display" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantIcon constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveSpeaker;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveSpeakerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantIcon constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantIcon Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ActiveSpeaker = { "ActiveSpeaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantIcon_Parms, ActiveSpeaker), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ActiveSpeakerState = { "ActiveSpeakerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantIcon_Parms, ActiveSpeakerState), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveSpeaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveSpeakerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantIcon Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetParticipantIcon", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventGetParticipantIcon_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventGetParticipantIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execGetParticipantIcon)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ActiveSpeaker);
	P_GET_PROPERTY(FNameProperty,Z_Param_ActiveSpeakerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetParticipantIcon_Implementation(Z_Param_ActiveSpeaker,Z_Param_ActiveSpeakerState);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function GetParticipantIcon ********************

// ********** Begin Interface UDlgDialogueParticipant Function GetParticipantName ******************
struct DlgDialogueParticipant_eventGetParticipantName_Parms
{
	FName ReturnValue;
};
FName IDlgDialogueParticipant::GetParticipantName() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParticipantName instead.");
	DlgDialogueParticipant_eventGetParticipantName_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_GetParticipantName = FName(TEXT("GetParticipantName"));
FName IDlgDialogueParticipant::Execute_GetParticipantName(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventGetParticipantName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_GetParticipantName);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->GetParticipantName_Implementation();
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant" },
		{ "Comment", "//\n// Participant information\n//\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Participant information" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParticipantName constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParticipantName constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParticipantName Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventGetParticipantName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParticipantName Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "GetParticipantName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventGetParticipantName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventGetParticipantName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execGetParticipantName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetParticipantName_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function GetParticipantName ********************

// ********** Begin Interface UDlgDialogueParticipant Function ModifyBoolValue *********************
struct DlgDialogueParticipant_eventModifyBoolValue_Parms
{
	FName ValueName;
	bool bNewValue;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventModifyBoolValue_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDlgDialogueParticipant::ModifyBoolValue(FName ValueName, bool bNewValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyBoolValue instead.");
	DlgDialogueParticipant_eventModifyBoolValue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_ModifyBoolValue = FName(TEXT("ModifyBoolValue"));
bool IDlgDialogueParticipant::Execute_ModifyBoolValue(UObject* O, FName ValueName, bool bNewValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventModifyBoolValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_ModifyBoolValue);
	if (Func)
	{
		Parms.ValueName=std::move(ValueName);
		Parms.bNewValue=std::move(bNewValue);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->ModifyBoolValue_Implementation(ValueName,bNewValue);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant|Event" },
		{ "Comment", "// Used for the event type EDlgEventType::ModifyBool (Modify Dialogue Bool Value)\n// @return value: irrelevant\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the event type EDlgEventType::ModifyBool (Modify Dialogue Bool Value)\n@return value: irrelevant" },
	};
#endif // WITH_METADATA

// ********** Begin Function ModifyBoolValue constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
	static void NewProp_bNewValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyBoolValue_Parms*)Obj)->bNewValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyBoolValue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ModifyBoolValue constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ModifyBoolValue Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyBoolValue_Parms, ValueName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyBoolValue_Parms), &UHT_STATICS::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyBoolValue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bNewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ModifyBoolValue Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "ModifyBoolValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventModifyBoolValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventModifyBoolValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execModifyBoolValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ModifyBoolValue_Implementation(Z_Param_ValueName,Z_Param_bNewValue);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function ModifyBoolValue ***********************

// ********** Begin Interface UDlgDialogueParticipant Function ModifyFloatValue ********************
struct DlgDialogueParticipant_eventModifyFloatValue_Parms
{
	FName ValueName;
	bool bDelta;
	float Value;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventModifyFloatValue_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDlgDialogueParticipant::ModifyFloatValue(FName ValueName, bool bDelta, float Value)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyFloatValue instead.");
	DlgDialogueParticipant_eventModifyFloatValue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_ModifyFloatValue = FName(TEXT("ModifyFloatValue"));
bool IDlgDialogueParticipant::Execute_ModifyFloatValue(UObject* O, FName ValueName, bool bDelta, float Value)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventModifyFloatValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_ModifyFloatValue);
	if (Func)
	{
		Parms.ValueName=std::move(ValueName);
		Parms.bDelta=std::move(bDelta);
		Parms.Value=std::move(Value);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->ModifyFloatValue_Implementation(ValueName,bDelta,Value);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant|Event" },
		{ "Comment", "// Used for the event type EDlgEventType::ModifyFloat (Modify Dialogue Float Value)\n// @param\x09""bDelta Whether we expect the value to be set or modified\n// @return\x09Irrelevant, ignored\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the event type EDlgEventType::ModifyFloat (Modify Dialogue Float Value)\n@param        bDelta Whether we expect the value to be set or modified\n@return       Irrelevant, ignored" },
	};
#endif // WITH_METADATA

// ********** Begin Function ModifyFloatValue constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
	static void NewProp_bDelta_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyFloatValue_Parms*)Obj)->bDelta = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyFloatValue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ModifyFloatValue constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ModifyFloatValue Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyFloatValue_Parms, ValueName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDelta = { "bDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyFloatValue_Parms), &UHT_STATICS::NewProp_bDelta_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyFloatValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyFloatValue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ModifyFloatValue Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "ModifyFloatValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventModifyFloatValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventModifyFloatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execModifyFloatValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
	P_GET_UBOOL(Z_Param_bDelta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ModifyFloatValue_Implementation(Z_Param_ValueName,Z_Param_bDelta,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function ModifyFloatValue **********************

// ********** Begin Interface UDlgDialogueParticipant Function ModifyIntValue **********************
struct DlgDialogueParticipant_eventModifyIntValue_Parms
{
	FName ValueName;
	bool bDelta;
	int32 Value;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventModifyIntValue_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDlgDialogueParticipant::ModifyIntValue(FName ValueName, bool bDelta, int32 Value)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyIntValue instead.");
	DlgDialogueParticipant_eventModifyIntValue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_ModifyIntValue = FName(TEXT("ModifyIntValue"));
bool IDlgDialogueParticipant::Execute_ModifyIntValue(UObject* O, FName ValueName, bool bDelta, int32 Value)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventModifyIntValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_ModifyIntValue);
	if (Func)
	{
		Parms.ValueName=std::move(ValueName);
		Parms.bDelta=std::move(bDelta);
		Parms.Value=std::move(Value);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->ModifyIntValue_Implementation(ValueName,bDelta,Value);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant|Event" },
		{ "Comment", "// Used for the event type EDlgEventType::ModifyInt (Modify Dialogue Int Value)\n// @param\x09""bDelta Whether we expect the value to be set or modified\n// @return\x09Irrelevant, ignored\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the event type EDlgEventType::ModifyInt (Modify Dialogue Int Value)\n@param        bDelta Whether we expect the value to be set or modified\n@return       Irrelevant, ignored" },
	};
#endif // WITH_METADATA

// ********** Begin Function ModifyIntValue constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
	static void NewProp_bDelta_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyIntValue_Parms*)Obj)->bDelta = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelta;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyIntValue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ModifyIntValue constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ModifyIntValue Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyIntValue_Parms, ValueName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDelta = { "bDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyIntValue_Parms), &UHT_STATICS::NewProp_bDelta_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyIntValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyIntValue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ModifyIntValue Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "ModifyIntValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventModifyIntValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventModifyIntValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execModifyIntValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
	P_GET_UBOOL(Z_Param_bDelta);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ModifyIntValue_Implementation(Z_Param_ValueName,Z_Param_bDelta,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function ModifyIntValue ************************

// ********** Begin Interface UDlgDialogueParticipant Function ModifyNameValue *********************
struct DlgDialogueParticipant_eventModifyNameValue_Parms
{
	FName ValueName;
	FName NameValue;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventModifyNameValue_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDlgDialogueParticipant::ModifyNameValue(FName ValueName, FName NameValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyNameValue instead.");
	DlgDialogueParticipant_eventModifyNameValue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_ModifyNameValue = FName(TEXT("ModifyNameValue"));
bool IDlgDialogueParticipant::Execute_ModifyNameValue(UObject* O, FName ValueName, FName NameValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventModifyNameValue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_ModifyNameValue);
	if (Func)
	{
		Parms.ValueName=std::move(ValueName);
		Parms.NameValue=std::move(NameValue);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->ModifyNameValue_Implementation(ValueName,NameValue);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant|Event" },
		{ "Comment", "// Used for the event type EDlgEventType::ModifyName (Modify Dialogue Name Value)\n// @return value: irrelevant\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the event type EDlgEventType::ModifyName (Modify Dialogue Name Value)\n@return value: irrelevant" },
	};
#endif // WITH_METADATA

// ********** Begin Function ModifyNameValue constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventModifyNameValue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ModifyNameValue constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ModifyNameValue Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ValueName = { "ValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyNameValue_Parms, ValueName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventModifyNameValue_Parms, NameValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogueParticipant_eventModifyNameValue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ModifyNameValue Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "ModifyNameValue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventModifyNameValue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventModifyNameValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execModifyNameValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueName);
	P_GET_PROPERTY(FNameProperty,Z_Param_NameValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ModifyNameValue_Implementation(Z_Param_ValueName,Z_Param_NameValue);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function ModifyNameValue ***********************

// ********** Begin Interface UDlgDialogueParticipant Function OnDialogueEvent *********************
struct DlgDialogueParticipant_eventOnDialogueEvent_Parms
{
	UDlgContext* Context;
	FName EventName;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DlgDialogueParticipant_eventOnDialogueEvent_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDlgDialogueParticipant::OnDialogueEvent(UDlgContext* Context, FName EventName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDialogueEvent instead.");
	DlgDialogueParticipant_eventOnDialogueEvent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDlgDialogueParticipant_OnDialogueEvent = FName(TEXT("OnDialogueEvent"));
bool IDlgDialogueParticipant::Execute_OnDialogueEvent(UObject* O, UDlgContext* Context, FName EventName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDlgDialogueParticipant::StaticClass()));
	DlgDialogueParticipant_eventOnDialogueEvent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDlgDialogueParticipant_OnDialogueEvent);
	if (Func)
	{
		Parms.Context=std::move(Context);
		Parms.EventName=std::move(EventName);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDlgDialogueParticipant*)(O->GetNativeInterfaceAddress(UDlgDialogueParticipant::StaticClass())))
	{
		Parms.ReturnValue = I->OnDialogueEvent_Implementation(Context,EventName);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Participant|Event" },
		{ "Comment", "// Used for the event type EDlgEventType::Event (Event)\n// @return value: irrelevant\n" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
		{ "ToolTip", "Used for the event type EDlgEventType::Event (Event)\n@return value: irrelevant" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDialogueEvent constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgDialogueParticipant_eventOnDialogueEvent_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnDialogueEvent constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnDialogueEvent Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventOnDialogueEvent_Parms, Context), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgDialogueParticipant_eventOnDialogueEvent_Parms, EventName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgDialogueParticipant_eventOnDialogueEvent_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnDialogueEvent Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgDialogueParticipant, nullptr, "OnDialogueEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgDialogueParticipant_eventOnDialogueEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgDialogueParticipant_eventOnDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDlgDialogueParticipant::execOnDialogueEvent)
{
	P_GET_OBJECT(UDlgContext,Z_Param_Context);
	P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnDialogueEvent_Implementation(Z_Param_Context,Z_Param_EventName);
	P_NATIVE_END;
}
// ********** End Interface UDlgDialogueParticipant Function OnDialogueEvent ***********************

// ********** Begin Interface UDlgDialogueParticipant **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgDialogueParticipant_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgDialogueParticipant.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UDlgDialogueParticipant constinit property declarations **************
// ********** End Interface UDlgDialogueParticipant constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CheckCondition"), .Pointer = &IDlgDialogueParticipant::execCheckCondition },
		{ .NameUTF8 = UTF8TEXT("GetBoolValue"), .Pointer = &IDlgDialogueParticipant::execGetBoolValue },
		{ .NameUTF8 = UTF8TEXT("GetFloatValue"), .Pointer = &IDlgDialogueParticipant::execGetFloatValue },
		{ .NameUTF8 = UTF8TEXT("GetIntValue"), .Pointer = &IDlgDialogueParticipant::execGetIntValue },
		{ .NameUTF8 = UTF8TEXT("GetNameValue"), .Pointer = &IDlgDialogueParticipant::execGetNameValue },
		{ .NameUTF8 = UTF8TEXT("GetParticipantDisplayName"), .Pointer = &IDlgDialogueParticipant::execGetParticipantDisplayName },
		{ .NameUTF8 = UTF8TEXT("GetParticipantGender"), .Pointer = &IDlgDialogueParticipant::execGetParticipantGender },
		{ .NameUTF8 = UTF8TEXT("GetParticipantIcon"), .Pointer = &IDlgDialogueParticipant::execGetParticipantIcon },
		{ .NameUTF8 = UTF8TEXT("GetParticipantName"), .Pointer = &IDlgDialogueParticipant::execGetParticipantName },
		{ .NameUTF8 = UTF8TEXT("ModifyBoolValue"), .Pointer = &IDlgDialogueParticipant::execModifyBoolValue },
		{ .NameUTF8 = UTF8TEXT("ModifyFloatValue"), .Pointer = &IDlgDialogueParticipant::execModifyFloatValue },
		{ .NameUTF8 = UTF8TEXT("ModifyIntValue"), .Pointer = &IDlgDialogueParticipant::execModifyIntValue },
		{ .NameUTF8 = UTF8TEXT("ModifyNameValue"), .Pointer = &IDlgDialogueParticipant::execModifyNameValue },
		{ .NameUTF8 = UTF8TEXT("OnDialogueEvent"), .Pointer = &IDlgDialogueParticipant::execOnDialogueEvent },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_CheckCondition, "CheckCondition" }, // 4c60d0a1cd24e574446219bf0710c5c4f1b21e3c
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetBoolValue, "GetBoolValue" }, // 3d3c71327aeea580c0c2fc24e49ccbfd8c716685
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetFloatValue, "GetFloatValue" }, // 035faf99e20d454bc5e8fe5f1a7ae0e02b00528c
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetIntValue, "GetIntValue" }, // 8c548f58b1a052d7f4cf76869dfe6188730123b2
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetNameValue, "GetNameValue" }, // dc2c78b1b112482adc10b22d777c90c9eccb0bb7
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantDisplayName, "GetParticipantDisplayName" }, // 81ebf2308c7f865d1a2af6b4c370fc4a740e36d7
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantGender, "GetParticipantGender" }, // 20e52daa9e69f54b2e84def561206f3e90314196
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantIcon, "GetParticipantIcon" }, // 664178541324afdced92db8544e918ab2a5c45a3
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_GetParticipantName, "GetParticipantName" }, // 4ee46a0028cdc60d5276ffd766fcd0b554c6c5ef
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyBoolValue, "ModifyBoolValue" }, // 7df63434fb41d57663ca0bb9f4685bf07569259e
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyFloatValue, "ModifyFloatValue" }, // b5e6493e8a22cc4761632c58e746c93cc3f9366e
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyIntValue, "ModifyIntValue" }, // 1f1819990a23104f4a81a2ab09d8cccad74a2312
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_ModifyNameValue, "ModifyNameValue" }, // 97c64503abb2bbf9dba9a87dd522cf778dd7d578
		{ &Z_Construct_UFunction_UDlgDialogueParticipant_OnDialogueEvent, "OnDialogueEvent" }, // 7f0ce284a1cd7684f32162e9f7efefd55144ca4d
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDlgDialogueParticipant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgDialogueParticipant,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDlgDialogueParticipant_StaticRegisterNativesUDlgDialogueParticipant()
{
	UClass* Class = UDlgDialogueParticipant::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgDialogueParticipant;
UClass* Z_Construct_UClass_UDlgDialogueParticipant(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgDialogueParticipant;
		if (!Z_Registration_Info_UClass_UDlgDialogueParticipant.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgDialogueParticipant"),
				Z_Registration_Info_UClass_UDlgDialogueParticipant.InnerSingleton,
				UDlgDialogueParticipant_StaticRegisterNativesUDlgDialogueParticipant,
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
		return Z_Registration_Info_UClass_UDlgDialogueParticipant.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgDialogueParticipant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgDialogueParticipant.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgDialogueParticipant.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgDialogueParticipant);
// ********** End Interface UDlgDialogueParticipant ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogueParticipant_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgDialogueParticipant, TEXT("UDlgDialogueParticipant"), &Z_Registration_Info_UClass_UDlgDialogueParticipant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgDialogueParticipant), 584645762U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogueParticipant_h__Script_DlgSystem_eaf16508a75473ca2b6e79c92f5f6aafd0cff295{
	TEXT("/Script/DlgSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
