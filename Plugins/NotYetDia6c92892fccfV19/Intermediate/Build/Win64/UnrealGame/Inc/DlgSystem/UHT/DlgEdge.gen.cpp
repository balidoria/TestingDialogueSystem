// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgEdge.h"
#include "DlgSystem/DlgCondition.h"
#include "DlgSystem/DlgTextArgument.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgEdge() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FDlgEdge **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgEdge_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgEdge>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgEdge); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The representation of a child in a node. Defined by a TargetIndex which points to the index array in the Dialogue.Nodes\n */" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "The representation of a child in a node. Defined by a TargetIndex which points to the index array in the Dialogue.Nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "ClampMin", "-1" },
		{ "Comment", "// Index of the node in the Nodes TArray of the dialogue this edge is leading to\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "Index of the node in the Nodes TArray of the dialogue this edge is leading to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "Comment", "// Required but not sufficient conditions - target node's enter conditions are checked too\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "Required but not sufficient conditions - target node's enter conditions are checked too" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerState_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "Comment", "// Player emotion/state attached to this player choice\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "Player emotion/state attached to this player choice" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "Comment", "// Set this to false in order to skip this edge in the AllChildren array (which lists both satisfied and not satisfied player choices\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "Set this to false in order to skip this edge in the AllChildren array (which lists both satisfied and not satisfied player choices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeData_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgEdge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "Comment", "// Text associated with the child, can be used for user choices\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text associated with the child, can be used for user choices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextArguments_MetaData[] = {
		{ "Category", "DialogueEdge" },
		{ "Comment", "// If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime.\n" },
		{ "ModuleRelativePath", "DlgEdge.h" },
		{ "ToolTip", "If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgEdge constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Conditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerState;
	static void NewProp_bIncludeInAllOptionListIfUnsatisfied_SetBit(void* Obj)
	{
		((FDlgEdge*)Obj)->bIncludeInAllOptionListIfUnsatisfied = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInAllOptionListIfUnsatisfied;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeData;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextArguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextArguments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgEdge constinit property declarations ****************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgEdge Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdge, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgCondition, METADATA_PARAMS(0, nullptr) }; // 324b9de7b9dece928af37052ca5e878bb8c4c32a
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdge, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_MetaData), NewProp_Conditions_MetaData) }; // 324b9de7b9dece928af37052ca5e878bb8c4c32a
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SpeakerState = { "SpeakerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdge, SpeakerState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerState_MetaData), NewProp_SpeakerState_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeInAllOptionListIfUnsatisfied = { "bIncludeInAllOptionListIfUnsatisfied", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgEdge), &UHT_STATICS::NewProp_bIncludeInAllOptionListIfUnsatisfied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData), NewProp_bIncludeInAllOptionListIfUnsatisfied_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeData = { "EdgeData", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdge, EdgeData), Z_Construct_UClass_UDlgNodeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeData_MetaData), NewProp_EdgeData_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdge, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextArguments_Inner = { "TextArguments", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgTextArgument, METADATA_PARAMS(0, nullptr) }; // 342b029f7e780e0d97520b4ac862042aa0725f4e
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TextArguments = { "TextArguments", nullptr, (EPropertyFlags)0x0020088000000055, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdge, TextArguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextArguments_MetaData), NewProp_TextArguments_MetaData) }; // 342b029f7e780e0d97520b4ac862042aa0725f4e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Conditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Conditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeakerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeInAllOptionListIfUnsatisfied,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextArguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextArguments,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgEdge Property Definitions ***************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgEdge",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgEdge>(),
	alignof(FDlgEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgEdge;
UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgEdge.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdge, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgEdge"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgEdge.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgEdge.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgEdge.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgEdge ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgEdge_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgEdge, Z_Construct_UScriptStruct_FDlgEdge_Statics::NewStructOps, TEXT("DlgEdge"),&Z_Registration_Info_UScriptStruct_FDlgEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgEdge), 3543216502U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgEdge_h__Script_DlgSystem_a8cd474f2c145350362ba46c9b0b8ae18072ce39{
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
