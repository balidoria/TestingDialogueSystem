// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode.h"
#include "DlgSystem/DlgCondition.h"
#include "DlgSystem/DlgEdge.h"
#include "DlgSystem/DlgEvent.h"
#include "DlgSystem/DlgTextArgument.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgNode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundWave(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEvent(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EDlgEntryRestriction ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgEntryRestriction>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "None.Comment", "// Node can be entered multiple times\n" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDlgEntryRestriction::None" },
		{ "None.ToolTip", "Node can be entered multiple times" },
		{ "Once.Comment", "// Node can only be entered once globally (same as WasNodeAlreadyVisited check in global memory (Dialogue history))\n" },
		{ "Once.DisplayName", "Only Once" },
		{ "Once.Name", "EDlgEntryRestriction::Once" },
		{ "Once.ToolTip", "Node can only be entered once globally (same as WasNodeAlreadyVisited check in global memory (Dialogue history))" },
		{ "OncePerContext.Comment", "// Node can only be entered once per context (same as WasNodeAlreadyVisited check in local memory)\n" },
		{ "OncePerContext.DisplayName", "Once per Context" },
		{ "OncePerContext.Name", "EDlgEntryRestriction::OncePerContext" },
		{ "OncePerContext.ToolTip", "Node can only be entered once per context (same as WasNodeAlreadyVisited check in local memory)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgEntryRestriction::None", (int64)EDlgEntryRestriction::None },
		{ "EDlgEntryRestriction::OncePerContext", (int64)EDlgEntryRestriction::OncePerContext },
		{ "EDlgEntryRestriction::Once", (int64)EDlgEntryRestriction::Once },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgEntryRestriction",
	"EDlgEntryRestriction",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgEntryRestriction;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgEntryRestriction.OuterSingleton)
		{
			ZRIE_EDlgEntryRestriction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgEntryRestriction"));
		}
		return ZRIE_EDlgEntryRestriction.OuterSingleton;
	}
	if (!ZRIE_EDlgEntryRestriction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgEntryRestriction.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgEntryRestriction.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgEntryRestriction ********************************************************

// ********** Begin Class UDlgNode Function GetCheckChildrenOnEvaluation ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetCheckChildrenOnEvaluation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCheckChildrenOnEvaluation constinit property declarations **********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventGetCheckChildrenOnEvaluation_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCheckChildrenOnEvaluation constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCheckChildrenOnEvaluation Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgNode_eventGetCheckChildrenOnEvaluation_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCheckChildrenOnEvaluation Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetCheckChildrenOnEvaluation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetCheckChildrenOnEvaluation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetCheckChildrenOnEvaluation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetCheckChildrenOnEvaluation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCheckChildrenOnEvaluation();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetCheckChildrenOnEvaluation *****************************

// ********** Begin Class UDlgNode Function GetGUID ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetGUID_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetGUID_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// Getters/Setters:\n//\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Getters/Setters:" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGUID constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGUID constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGUID Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetGUID Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetGUID();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetGUID **************************************************

// ********** Begin Class UDlgNode Function GetNodeChildAt *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeChildAt_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeChildAt_Parms
	{
		int32 EdgeIndex;
		FDlgEdge ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeChildAt constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeChildAt constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeChildAt Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EdgeIndex = { "EdgeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeChildAt_Parms, EdgeIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeChildAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeChildAt Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeChildAt", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeChildAt_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeChildAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeChildAt(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeChildAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EdgeIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDlgEdge*)Z_Param__Result=P_THIS->GetNodeChildAt(Z_Param_EdgeIndex);
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeChildAt *******************************************

// ********** Begin Class UDlgNode Function GetNodeChildren ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeChildren_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeChildren_Parms
	{
		TArray<FDlgEdge> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "/// Gets this nodes children (edges) as a const/mutable array\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets this nodes children (edges) as a const/mutable array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeChildren constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeChildren constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeChildren Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(0, nullptr) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeChildren Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeChildren", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeChildren_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeChildren(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeChildren)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDlgEdge>*)Z_Param__Result=P_THIS->GetNodeChildren();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeChildren ******************************************

// ********** Begin Class UDlgNode Function GetNodeData ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeData_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeData_Parms
	{
		UDlgNodeData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeData constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeData Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeData_Parms, ReturnValue), Z_Construct_UClass_UDlgNodeData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDlgNodeData**)Z_Param__Result=P_THIS->GetNodeData();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeData **********************************************

// ********** Begin Class UDlgNode Function GetNodeEnterConditions *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeEnterConditions_Parms
	{
		TArray<FDlgCondition> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeEnterConditions constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeEnterConditions constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeEnterConditions Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(0, nullptr) }; // 324b9de7b9dece928af37052ca5e878bb8c4c32a
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeEnterConditions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 324b9de7b9dece928af37052ca5e878bb8c4c32a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeEnterConditions Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeEnterConditions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeEnterConditions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeEnterConditions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeEnterConditions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDlgCondition>*)Z_Param__Result=P_THIS->GetNodeEnterConditions();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeEnterConditions ***********************************

// ********** Begin Class UDlgNode Function GetNodeEnterEvents *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeEnterEvents_Parms
	{
		TArray<FDlgEvent> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeEnterEvents constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeEnterEvents constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeEnterEvents Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgEvent, METADATA_PARAMS(0, nullptr) }; // 8241697f217ced5b084ac6c16fd26a12a767292c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeEnterEvents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 8241697f217ced5b084ac6c16fd26a12a767292c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeEnterEvents Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeEnterEvents", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeEnterEvents_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeEnterEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeEnterEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDlgEvent>*)Z_Param__Result=P_THIS->GetNodeEnterEvents();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeEnterEvents ***************************************

// ********** Begin Class UDlgNode Function GetNodeGenericData *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeGenericData_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeGenericData_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the generic data asset of this Node.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the generic data asset of this Node." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeGenericData constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeGenericData constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeGenericData Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeGenericData_Parms, ReturnValue), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeGenericData Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeGenericData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeGenericData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeGenericData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeGenericData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeGenericData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetNodeGenericData();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeGenericData ***************************************

// ********** Begin Class UDlgNode Function GetNodeParticipantName *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeParticipantName_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeParticipantName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// For the ParticipantName\n//\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "For the ParticipantName" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeParticipantName constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeParticipantName constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeParticipantName Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeParticipantName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeParticipantName Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeParticipantName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeParticipantName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeParticipantName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeParticipantName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeParticipantName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetNodeParticipantName();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeParticipantName ***********************************

// ********** Begin Class UDlgNode Function GetNodeText ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeText_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the Text of this Node. This can be the final formatted string.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the Text of this Node. This can be the final formatted string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeText constinit property declarations ***************************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeText constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeText Property Definitions **************************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeText_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeText Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetNodeText();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeText **********************************************

// ********** Begin Class UDlgNode Function GetNodeUnformattedText *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeUnformattedText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "/**\n\x09 * Gets the Raw unformatted Text of this Node. Usually the same as GetNodeText but in case the node supports formatted string this\n\x09 * is the raw form with all the arguments intact. To get the text arguments call GetTextArguments.\n\x09 */" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the Raw unformatted Text of this Node. Usually the same as GetNodeText but in case the node supports formatted string this\nis the raw form with all the arguments intact. To get the text arguments call GetTextArguments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeUnformattedText constinit property declarations ****************
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeUnformattedText constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeUnformattedText Property Definitions ***************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeUnformattedText_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeUnformattedText Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeUnformattedText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeUnformattedText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeUnformattedText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeUnformattedText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetNodeUnformattedText();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeUnformattedText ***********************************

// ********** Begin Class UDlgNode Function GetNodeVoiceDialogueWave *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeVoiceDialogueWave_Parms
	{
		UDialogueWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the voice of this Node as a DialogueWave. Only the first Dialogue context in the wave should be used.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the voice of this Node as a DialogueWave. Only the first Dialogue context in the wave should be used." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeVoiceDialogueWave constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeVoiceDialogueWave constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeVoiceDialogueWave Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeVoiceDialogueWave_Parms, ReturnValue), Z_Construct_UClass_UDialogueWave, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeVoiceDialogueWave Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeVoiceDialogueWave", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeVoiceDialogueWave_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeVoiceDialogueWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeVoiceDialogueWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogueWave**)Z_Param__Result=P_THIS->GetNodeVoiceDialogueWave();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeVoiceDialogueWave *********************************

// ********** Begin Class UDlgNode Function GetNodeVoiceSoundBase **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeVoiceSoundBase_Parms
	{
		USoundBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the voice of this Node as a SoundWave.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the voice of this Node as a SoundWave." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeVoiceSoundBase constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeVoiceSoundBase constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeVoiceSoundBase Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeVoiceSoundBase_Parms, ReturnValue), Z_Construct_UClass_USoundBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeVoiceSoundBase Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeVoiceSoundBase", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeVoiceSoundBase_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeVoiceSoundBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeVoiceSoundBase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundBase**)Z_Param__Result=P_THIS->GetNodeVoiceSoundBase();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeVoiceSoundBase ************************************

// ********** Begin Class UDlgNode Function GetNodeVoiceSoundWave **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNodeVoiceSoundWave_Parms
	{
		USoundWave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the voice of this Node as a SoundWave.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the voice of this Node as a SoundWave." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeVoiceSoundWave constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeVoiceSoundWave constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeVoiceSoundWave Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNodeVoiceSoundWave_Parms, ReturnValue), Z_Construct_UClass_USoundWave, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeVoiceSoundWave Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNodeVoiceSoundWave", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNodeVoiceSoundWave_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNodeVoiceSoundWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNodeVoiceSoundWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundWave**)Z_Param__Result=P_THIS->GetNodeVoiceSoundWave();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNodeVoiceSoundWave ************************************

// ********** Begin Class UDlgNode Function GetNumNodeChildren *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetNumNodeChildren_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetNumNodeChildren_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumNodeChildren constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumNodeChildren constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumNodeChildren Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetNumNodeChildren_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNumNodeChildren Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetNumNodeChildren", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetNumNodeChildren_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetNumNodeChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetNumNodeChildren(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetNumNodeChildren)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumNodeChildren();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetNumNodeChildren ***************************************

// ********** Begin Class UDlgNode Function GetSpeakerState ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetSpeakerState_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetSpeakerState_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the speaker state ordered to this node (can be used e.g. for icon selection)\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the speaker state ordered to this node (can be used e.g. for icon selection)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpeakerState constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpeakerState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpeakerState Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetSpeakerState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSpeakerState Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetSpeakerState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetSpeakerState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetSpeakerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetSpeakerState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetSpeakerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSpeakerState();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetSpeakerState ******************************************

// ********** Begin Class UDlgNode Function GetTextArguments ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_GetTextArguments_Statics
struct UHT_STATICS
{
	struct DlgNode_eventGetTextArguments_Parms
	{
		TArray<FDlgTextArgument> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the text arguments for this Node (if any). Used for FText::Format\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Gets the text arguments for this Node (if any). Used for FText::Format" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTextArguments constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTextArguments constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTextArguments Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgTextArgument, METADATA_PARAMS(0, nullptr) }; // 342b029f7e780e0d97520b4ac862042aa0725f4e
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_eventGetTextArguments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 342b029f7e780e0d97520b4ac862042aa0725f4e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTextArguments Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "GetTextArguments", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventGetTextArguments_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventGetTextArguments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_GetTextArguments(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execGetTextArguments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDlgTextArgument>*)Z_Param__Result=P_THIS->GetTextArguments();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function GetTextArguments *****************************************

// ********** Begin Class UDlgNode Function HasAnyEnterConditions **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions_Statics
struct UHT_STATICS
{
	struct DlgNode_eventHasAnyEnterConditions_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// For the EnterConditions\n//\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "For the EnterConditions" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAnyEnterConditions constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventHasAnyEnterConditions_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAnyEnterConditions constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAnyEnterConditions Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgNode_eventHasAnyEnterConditions_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasAnyEnterConditions Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "HasAnyEnterConditions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventHasAnyEnterConditions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventHasAnyEnterConditions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execHasAnyEnterConditions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAnyEnterConditions();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function HasAnyEnterConditions ************************************

// ********** Begin Class UDlgNode Function HasAnyEnterEvents **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents_Statics
struct UHT_STATICS
{
	struct DlgNode_eventHasAnyEnterEvents_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "//\n// For the EnterEvents\n//\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "For the EnterEvents" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAnyEnterEvents constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventHasAnyEnterEvents_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAnyEnterEvents constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAnyEnterEvents Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgNode_eventHasAnyEnterEvents_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasAnyEnterEvents Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "HasAnyEnterEvents", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventHasAnyEnterEvents_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventHasAnyEnterEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execHasAnyEnterEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAnyEnterEvents();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function HasAnyEnterEvents ****************************************

// ********** Begin Class UDlgNode Function HasGUID ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_HasGUID_Statics
struct UHT_STATICS
{
	struct DlgNode_eventHasGUID_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasGUID constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_eventHasGUID_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasGUID constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasGUID Property Definitions ******************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgNode_eventHasGUID_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasGUID Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode, nullptr, "HasGUID", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_eventHasGUID_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_eventHasGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_HasGUID(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode::execHasGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasGUID();
	P_NATIVE_END;
}
// ********** End Class UDlgNode Function HasGUID **************************************************

// ********** Begin Class UDlgNode *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgNode_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n *  Abstract base class for Dialogue nodes\n *  Depending on the implementation in the child class the dialogue node can contain one or more lines of one or more participants,\n *  or simply some logic to go on in the UDlgNode graph\n */" },
		{ "IncludePath", "Nodes/DlgNode.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Abstract base class for Dialogue nodes\nDepending on the implementation in the child class the dialogue node can contain one or more lines of one or more participants,\nor simply some logic to go on in the UDlgNode graph" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[] = {
		{ "Comment", "// Node's Graph representation, used to get position.\n" },
		{ "DlgNoExport", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Node's Graph representation, used to get position." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Name of a participant (speaker) associated with this node.\n" },
		{ "DisplayName", "Participant Name" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Name of a participant (speaker) associated with this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckChildrenOnEvaluation_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "/**\n\x09 *  If it is set the node is only satisfied if at least one of its children is\n\x09 *  Should not be used if entering this node can modify the condition results of its children.\n\x09 */" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "If it is set the node is only satisfied if at least one of its children is\nShould not be used if entering this node can modify the condition results of its children." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterConditions_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Conditions necessary to enter this node\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Conditions necessary to enter this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterRestriction_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Additional restriction on node enter\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Additional restriction on node enter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterEvents_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Events fired when the node is reached in the dialogue\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Events fired when the node is reached in the dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// The Unique identifier for each Node. This is much safer than a Node Index.\n// Compile/Save Asset to generate this\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "The Unique identifier for each Node. This is much safer than a Node Index.\nCompile/Save Asset to generate this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Edges that point to Children of this Node\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode.h" },
		{ "ToolTip", "Edges that point to Children of this Node" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgNode constinit property declarations *********************************
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerName;
	static void NewProp_bCheckChildrenOnEvaluation_SetBit(void* Obj)
	{
		((UDlgNode*)Obj)->bCheckChildrenOnEvaluation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckChildrenOnEvaluation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnterConditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnterConditions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnterRestriction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnterRestriction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnterEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnterEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgNode constinit property declarations ***********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCheckChildrenOnEvaluation"), .Pointer = &UDlgNode::execGetCheckChildrenOnEvaluation },
		{ .NameUTF8 = UTF8TEXT("GetGUID"), .Pointer = &UDlgNode::execGetGUID },
		{ .NameUTF8 = UTF8TEXT("GetNodeChildAt"), .Pointer = &UDlgNode::execGetNodeChildAt },
		{ .NameUTF8 = UTF8TEXT("GetNodeChildren"), .Pointer = &UDlgNode::execGetNodeChildren },
		{ .NameUTF8 = UTF8TEXT("GetNodeData"), .Pointer = &UDlgNode::execGetNodeData },
		{ .NameUTF8 = UTF8TEXT("GetNodeEnterConditions"), .Pointer = &UDlgNode::execGetNodeEnterConditions },
		{ .NameUTF8 = UTF8TEXT("GetNodeEnterEvents"), .Pointer = &UDlgNode::execGetNodeEnterEvents },
		{ .NameUTF8 = UTF8TEXT("GetNodeGenericData"), .Pointer = &UDlgNode::execGetNodeGenericData },
		{ .NameUTF8 = UTF8TEXT("GetNodeParticipantName"), .Pointer = &UDlgNode::execGetNodeParticipantName },
		{ .NameUTF8 = UTF8TEXT("GetNodeText"), .Pointer = &UDlgNode::execGetNodeText },
		{ .NameUTF8 = UTF8TEXT("GetNodeUnformattedText"), .Pointer = &UDlgNode::execGetNodeUnformattedText },
		{ .NameUTF8 = UTF8TEXT("GetNodeVoiceDialogueWave"), .Pointer = &UDlgNode::execGetNodeVoiceDialogueWave },
		{ .NameUTF8 = UTF8TEXT("GetNodeVoiceSoundBase"), .Pointer = &UDlgNode::execGetNodeVoiceSoundBase },
		{ .NameUTF8 = UTF8TEXT("GetNodeVoiceSoundWave"), .Pointer = &UDlgNode::execGetNodeVoiceSoundWave },
		{ .NameUTF8 = UTF8TEXT("GetNumNodeChildren"), .Pointer = &UDlgNode::execGetNumNodeChildren },
		{ .NameUTF8 = UTF8TEXT("GetSpeakerState"), .Pointer = &UDlgNode::execGetSpeakerState },
		{ .NameUTF8 = UTF8TEXT("GetTextArguments"), .Pointer = &UDlgNode::execGetTextArguments },
		{ .NameUTF8 = UTF8TEXT("HasAnyEnterConditions"), .Pointer = &UDlgNode::execHasAnyEnterConditions },
		{ .NameUTF8 = UTF8TEXT("HasAnyEnterEvents"), .Pointer = &UDlgNode::execHasAnyEnterEvents },
		{ .NameUTF8 = UTF8TEXT("HasGUID"), .Pointer = &UDlgNode::execHasGUID },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_GetCheckChildrenOnEvaluation, "GetCheckChildrenOnEvaluation" }, // 53f8ee994eb8d644a45433528cc4d237fe9c56b6
		{ &Z_Construct_UFunction_UDlgNode_GetGUID, "GetGUID" }, // 4a20ab139d3b44566deb0be2facff64c17801d56
		{ &Z_Construct_UFunction_UDlgNode_GetNodeChildAt, "GetNodeChildAt" }, // 3a28a4376b4e55f348440e1c229b45d41102b02b
		{ &Z_Construct_UFunction_UDlgNode_GetNodeChildren, "GetNodeChildren" }, // b249e39ad11cfa55b5071ea9dc2641ffefcb944c
		{ &Z_Construct_UFunction_UDlgNode_GetNodeData, "GetNodeData" }, // 78595a1582ef0b696d20817ae0bf4a139db8e4ae
		{ &Z_Construct_UFunction_UDlgNode_GetNodeEnterConditions, "GetNodeEnterConditions" }, // df4fab5c47e5a089738f7ba225512437b8fae621
		{ &Z_Construct_UFunction_UDlgNode_GetNodeEnterEvents, "GetNodeEnterEvents" }, // b0521793959a2cd31b79f9837e5ea6ad62b16e11
		{ &Z_Construct_UFunction_UDlgNode_GetNodeGenericData, "GetNodeGenericData" }, // 981c04ea457312edd983a8554fd8072499ae141b
		{ &Z_Construct_UFunction_UDlgNode_GetNodeParticipantName, "GetNodeParticipantName" }, // b87c3c6d701f7184c8cab1030fbe1407cfc2bdc8
		{ &Z_Construct_UFunction_UDlgNode_GetNodeText, "GetNodeText" }, // 0c576c951f951958727bf51cb6ac4983cb4874a5
		{ &Z_Construct_UFunction_UDlgNode_GetNodeUnformattedText, "GetNodeUnformattedText" }, // 5da852e29bd26b43217d92a2921eef6f04277fa4
		{ &Z_Construct_UFunction_UDlgNode_GetNodeVoiceDialogueWave, "GetNodeVoiceDialogueWave" }, // a97101c7723a5f95a317757c16958dc89a79accf
		{ &Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundBase, "GetNodeVoiceSoundBase" }, // e267dd25b8c3e1f3142c1aae56537766dee1e158
		{ &Z_Construct_UFunction_UDlgNode_GetNodeVoiceSoundWave, "GetNodeVoiceSoundWave" }, // 69ef9b681e28ec4660da02790dc300457d1c3850
		{ &Z_Construct_UFunction_UDlgNode_GetNumNodeChildren, "GetNumNodeChildren" }, // a0cd2058f7b940b2d2574e10b14ad001d3cc86e7
		{ &Z_Construct_UFunction_UDlgNode_GetSpeakerState, "GetSpeakerState" }, // 909dd496190b1d5529d64d2ab09181880aaf28ed
		{ &Z_Construct_UFunction_UDlgNode_GetTextArguments, "GetTextArguments" }, // 8cc0c19b4f621a9e77e752c6c3a3690870967861
		{ &Z_Construct_UFunction_UDlgNode_HasAnyEnterConditions, "HasAnyEnterConditions" }, // fa9c294bd9823cd0221c54f7baa555036eb901c3
		{ &Z_Construct_UFunction_UDlgNode_HasAnyEnterEvents, "HasAnyEnterEvents" }, // e8dcf7de36e9732d4933f07743576517d7c98585
		{ &Z_Construct_UFunction_UDlgNode_HasGUID, "HasGUID" }, // 6a2656f165800477db53bb36010db3b6acee7f60
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgNode Property Definitions ********************************************
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode, GraphNode), Z_Construct_UClass_UEdGraphNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNode_MetaData), NewProp_GraphNode_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode, OwnerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerName_MetaData), NewProp_OwnerName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCheckChildrenOnEvaluation = { "bCheckChildrenOnEvaluation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgNode), &UHT_STATICS::NewProp_bCheckChildrenOnEvaluation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckChildrenOnEvaluation_MetaData), NewProp_bCheckChildrenOnEvaluation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EnterConditions_Inner = { "EnterConditions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(0, nullptr) }; // 324b9de7b9dece928af37052ca5e878bb8c4c32a
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EnterConditions = { "EnterConditions", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode, EnterConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterConditions_MetaData), NewProp_EnterConditions_MetaData) }; // 324b9de7b9dece928af37052ca5e878bb8c4c32a
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_EnterRestriction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_EnterRestriction = { "EnterRestriction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode, EnterRestriction), Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterRestriction_MetaData), NewProp_EnterRestriction_MetaData) }; // 7a1491c5f472b858143cb7e5639288f9cbcca93d
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EnterEvents_Inner = { "EnterEvents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgEvent, METADATA_PARAMS(0, nullptr) }; // 8241697f217ced5b084ac6c16fd26a12a767292c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EnterEvents = { "EnterEvents", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode, EnterEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterEvents_MetaData), NewProp_EnterEvents_MetaData) }; // 8241697f217ced5b084ac6c16fd26a12a767292c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(0, nullptr) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x00200c8000020041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCheckChildrenOnEvaluation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnterConditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnterConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnterRestriction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnterRestriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnterEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnterEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Children,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgNode Property Definitions **********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgNode,
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
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDlgNode_StaticRegisterNativesUDlgNode()
{
	UClass* Class = UDlgNode::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgNode;
UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgNode;
		if (!Z_Registration_Info_UClass_UDlgNode.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgNode"),
				Z_Registration_Info_UClass_UDlgNode.InnerSingleton,
				UDlgNode_StaticRegisterNativesUDlgNode,
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
		return Z_Registration_Info_UClass_UDlgNode.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgNode.OuterSingleton;
}
#undef UHT_STATICS
UDlgNode::UDlgNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgNode);
UDlgNode::~UDlgNode() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgNode)
// ********** End Class UDlgNode *******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystem_EDlgEntryRestriction, TEXT("EDlgEntryRestriction"), &ZRIE_EDlgEntryRestriction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2048168389U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode, TEXT("UDlgNode"), &Z_Registration_Info_UClass_UDlgNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode), 2126728642U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h__Script_DlgSystem_360178366139d583f450c6c62d9f8e51ea088afe{
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
