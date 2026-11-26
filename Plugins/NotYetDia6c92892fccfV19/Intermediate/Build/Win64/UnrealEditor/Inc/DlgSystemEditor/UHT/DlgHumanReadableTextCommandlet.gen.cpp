// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Commandlets/DlgHumanReadableTextCommandlet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgHumanReadableTextCommandlet() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCommandlet(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FDlgNodeContext_FormatHumanReadable *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgNodeContext_FormatHumanReadable>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgNodeContext_FormatHumanReadable); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgNodeContext_FormatHumanReadable constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentNodeIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentNodeIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChildNodeIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildNodeIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgNodeContext_FormatHumanReadable constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeContext_FormatHumanReadable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgNodeContext_FormatHumanReadable Property Definitions **********
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ParentNodeIndices_Inner = { "ParentNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ParentNodeIndices = { "ParentNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeContext_FormatHumanReadable, ParentNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNodeIndices_MetaData), NewProp_ParentNodeIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ChildNodeIndices_Inner = { "ChildNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ChildNodeIndices = { "ChildNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeContext_FormatHumanReadable, ChildNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildNodeIndices_MetaData), NewProp_ChildNodeIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentNodeIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentNodeIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChildNodeIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChildNodeIndices,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgNodeContext_FormatHumanReadable Property Definitions ************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
	nullptr,
	&NewStructOps,
	"DlgNodeContext_FormatHumanReadable",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgNodeContext_FormatHumanReadable>(),
	alignof(FDlgNodeContext_FormatHumanReadable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgNodeContext_FormatHumanReadable;
UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgNodeContext_FormatHumanReadable.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgNodeContext_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase::Outer), TEXT("DlgNodeContext_FormatHumanReadable"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgNodeContext_FormatHumanReadable.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgNodeContext_FormatHumanReadable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgNodeContext_FormatHumanReadable.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgNodeContext_FormatHumanReadable.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgNodeContext_FormatHumanReadable *********************************

// ********** Begin ScriptStruct FDlgEdgeOrphan_FormatHumanReadable ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgEdgeOrphan_FormatHumanReadable>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgEdgeOrphan_FormatHumanReadable); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Variant of the FDlgEdge that also tells us from what node to what node\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the FDlgEdge that also tells us from what node to what node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceNodeIndex_MetaData[] = {
		{ "Comment", "// Metadata\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgEdgeOrphan_FormatHumanReadable constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceNodeIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNodeIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgEdgeOrphan_FormatHumanReadable constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdgeOrphan_FormatHumanReadable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgEdgeOrphan_FormatHumanReadable Property Definitions ***********
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SourceNodeIndex = { "SourceNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdgeOrphan_FormatHumanReadable, SourceNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceNodeIndex_MetaData), NewProp_SourceNodeIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TargetNodeIndex = { "TargetNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdgeOrphan_FormatHumanReadable, TargetNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNodeIndex_MetaData), NewProp_TargetNodeIndex_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdgeOrphan_FormatHumanReadable, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceNodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetNodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgEdgeOrphan_FormatHumanReadable Property Definitions *************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
	nullptr,
	&NewStructOps,
	"DlgEdgeOrphan_FormatHumanReadable",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgEdgeOrphan_FormatHumanReadable>(),
	alignof(FDlgEdgeOrphan_FormatHumanReadable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable;
UScriptStruct* Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase::Outer), TEXT("DlgEdgeOrphan_FormatHumanReadable"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgEdgeOrphan_FormatHumanReadable **********************************

// ********** Begin ScriptStruct FDlgEdge_FormatHumanReadable **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgEdge_FormatHumanReadable>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgEdge_FormatHumanReadable); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Variant of the FDlgEdge that is human readable\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the FDlgEdge that is human readable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodeIndex_MetaData[] = {
		{ "Comment", "// Metadata\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgEdge_FormatHumanReadable constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNodeIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgEdge_FormatHumanReadable constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgEdge_FormatHumanReadable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgEdge_FormatHumanReadable Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TargetNodeIndex = { "TargetNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdge_FormatHumanReadable, TargetNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNodeIndex_MetaData), NewProp_TargetNodeIndex_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgEdge_FormatHumanReadable, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetNodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgEdge_FormatHumanReadable Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
	nullptr,
	&NewStructOps,
	"DlgEdge_FormatHumanReadable",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgEdge_FormatHumanReadable>(),
	alignof(FDlgEdge_FormatHumanReadable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgEdge_FormatHumanReadable;
UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgEdge_FormatHumanReadable.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgEdge_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase::Outer), TEXT("DlgEdge_FormatHumanReadable"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgEdge_FormatHumanReadable.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgEdge_FormatHumanReadable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgEdge_FormatHumanReadable.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgEdge_FormatHumanReadable.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgEdge_FormatHumanReadable ****************************************

// ********** Begin ScriptStruct FDlgSpeechSequenceEntry_FormatHumanReadable ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgSpeechSequenceEntry_FormatHumanReadable>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgSpeechSequenceEntry_FormatHumanReadable); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Variant of the FDlgSpeechSequenceEntry that is human readable\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the FDlgSpeechSequenceEntry that is human readable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "Comment", "// ParticipantName\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "ParticipantName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeText_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgSpeechSequenceEntry_FormatHumanReadable constinit property declarations 
	static const UECodeGen_Private::FNamePropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FTextPropertyParams NewProp_EdgeText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgSpeechSequenceEntry_FormatHumanReadable constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgSpeechSequenceEntry_FormatHumanReadable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgSpeechSequenceEntry_FormatHumanReadable Property Definitions **
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry_FormatHumanReadable, Speaker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry_FormatHumanReadable, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_EdgeText = { "EdgeText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry_FormatHumanReadable, EdgeText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeText_MetaData), NewProp_EdgeText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeText,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgSpeechSequenceEntry_FormatHumanReadable Property Definitions ****
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
	nullptr,
	&NewStructOps,
	"DlgSpeechSequenceEntry_FormatHumanReadable",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgSpeechSequenceEntry_FormatHumanReadable>(),
	alignof(FDlgSpeechSequenceEntry_FormatHumanReadable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable;
UScriptStruct* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase::Outer), TEXT("DlgSpeechSequenceEntry_FormatHumanReadable"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgSpeechSequenceEntry_FormatHumanReadable *************************

// ********** Begin ScriptStruct FDlgNodeSpeechSequence_FormatHumanReadable ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgNodeSpeechSequence_FormatHumanReadable>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgNodeSpeechSequence_FormatHumanReadable); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Variant of the UDlgNode_SpeechSequence that is human readable\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the UDlgNode_SpeechSequence that is human readable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[] = {
		{ "Comment", "// Metadata\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgNodeSpeechSequence_FormatHumanReadable constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgNodeSpeechSequence_FormatHumanReadable constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeSpeechSequence_FormatHumanReadable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgNodeSpeechSequence_FormatHumanReadable Property Definitions ***
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIndex_MetaData), NewProp_NodeIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, Speaker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Sequence_Inner = { "Sequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable, METADATA_PARAMS(0, nullptr) }; // 3a14c8a516858823cbe78caf54b176139a631233
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, Sequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) }; // 3a14c8a516858823cbe78caf54b176139a631233
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable, METADATA_PARAMS(0, nullptr) }; // 282d443cc2127364a728665e84f51810c3f7e7ee
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeSpeechSequence_FormatHumanReadable, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Edges_MetaData), NewProp_Edges_MetaData) }; // 282d443cc2127364a728665e84f51810c3f7e7ee
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Sequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Edges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Edges,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgNodeSpeechSequence_FormatHumanReadable Property Definitions *****
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
	nullptr,
	&NewStructOps,
	"DlgNodeSpeechSequence_FormatHumanReadable",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgNodeSpeechSequence_FormatHumanReadable>(),
	alignof(FDlgNodeSpeechSequence_FormatHumanReadable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable;
UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase::Outer), TEXT("DlgNodeSpeechSequence_FormatHumanReadable"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgNodeSpeechSequence_FormatHumanReadable **************************

// ********** Begin ScriptStruct FDlgNodeSpeech_FormatHumanReadable ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgNodeSpeech_FormatHumanReadable>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgNodeSpeech_FormatHumanReadable); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Variant of the UDlgNode_Speech that is human readable\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the UDlgNode_Speech that is human readable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[] = {
		{ "Comment", "// Metadata, NodeIndex\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Metadata, NodeIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgNodeSpeech_FormatHumanReadable constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgNodeSpeech_FormatHumanReadable constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeSpeech_FormatHumanReadable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgNodeSpeech_FormatHumanReadable Property Definitions ***********
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIndex_MetaData), NewProp_NodeIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, Speaker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable, METADATA_PARAMS(0, nullptr) }; // 282d443cc2127364a728665e84f51810c3f7e7ee
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeSpeech_FormatHumanReadable, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Edges_MetaData), NewProp_Edges_MetaData) }; // 282d443cc2127364a728665e84f51810c3f7e7ee
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Edges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Edges,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgNodeSpeech_FormatHumanReadable Property Definitions *************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
	nullptr,
	&NewStructOps,
	"DlgNodeSpeech_FormatHumanReadable",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgNodeSpeech_FormatHumanReadable>(),
	alignof(FDlgNodeSpeech_FormatHumanReadable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable;
UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase::Outer), TEXT("DlgNodeSpeech_FormatHumanReadable"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgNodeSpeech_FormatHumanReadable **********************************

// ********** Begin ScriptStruct FDlgDialogue_FormatHumanReadable **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgDialogue_FormatHumanReadable>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgDialogue_FormatHumanReadable); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Variant of the UDlgDialogue that is human readable\n" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ToolTip", "Variant of the UDlgDialogue that is human readable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueName_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueGUID_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeechNodes_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeechSequenceNodes_MetaData[] = {
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgDialogue_FormatHumanReadable constinit property declarations **
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeechNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechSequenceNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeechSequenceNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgDialogue_FormatHumanReadable constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgDialogue_FormatHumanReadable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgDialogue_FormatHumanReadable Property Definitions *************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DialogueName = { "DialogueName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, DialogueName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueName_MetaData), NewProp_DialogueName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DialogueGUID = { "DialogueGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, DialogueGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueGUID_MetaData), NewProp_DialogueGUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpeechNodes_Inner = { "SpeechNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable, METADATA_PARAMS(0, nullptr) }; // 13db76046c4753e7b38e878aedd6f903f380b3ee
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpeechNodes = { "SpeechNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, SpeechNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeechNodes_MetaData), NewProp_SpeechNodes_MetaData) }; // 13db76046c4753e7b38e878aedd6f903f380b3ee
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpeechSequenceNodes_Inner = { "SpeechSequenceNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable, METADATA_PARAMS(0, nullptr) }; // e64b891e99ef5749439e3e7181966acdc81610c9
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpeechSequenceNodes = { "SpeechSequenceNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgDialogue_FormatHumanReadable, SpeechSequenceNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeechSequenceNodes_MetaData), NewProp_SpeechSequenceNodes_MetaData) }; // e64b891e99ef5749439e3e7181966acdc81610c9
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeechNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeechNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeechSequenceNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeechSequenceNodes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgDialogue_FormatHumanReadable Property Definitions ***************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
	nullptr,
	&NewStructOps,
	"DlgDialogue_FormatHumanReadable",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgDialogue_FormatHumanReadable>(),
	alignof(FDlgDialogue_FormatHumanReadable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgDialogue_FormatHumanReadable;
UScriptStruct* Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgDialogue_FormatHumanReadable.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgDialogue_FormatHumanReadable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase::Outer), TEXT("DlgDialogue_FormatHumanReadable"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgDialogue_FormatHumanReadable.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgDialogue_FormatHumanReadable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgDialogue_FormatHumanReadable.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgDialogue_FormatHumanReadable.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgDialogue_FormatHumanReadable ************************************

// ********** Begin Class UDlgHumanReadableTextCommandlet ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgHumanReadableTextCommandlet_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
		{ "ModuleRelativePath", "Commandlets/DlgHumanReadableTextCommandlet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgHumanReadableTextCommandlet constinit property declarations **********
// ********** End Class UDlgHumanReadableTextCommandlet constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgHumanReadableTextCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UCommandlet,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgHumanReadableTextCommandlet,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet;
UClass* Z_Construct_UClass_UDlgHumanReadableTextCommandlet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgHumanReadableTextCommandlet;
		if (!Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgHumanReadableTextCommandlet"),
				Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgHumanReadableTextCommandlet);
UDlgHumanReadableTextCommandlet::~UDlgHumanReadableTextCommandlet() {}
// ********** End Class UDlgHumanReadableTextCommandlet ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_Commandlets_DlgHumanReadableTextCommandlet_h__Script_DlgSystemEditor_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable, Z_Construct_UScriptStruct_FDlgNodeContext_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgNodeContext_FormatHumanReadable"),&Z_Registration_Info_UScriptStruct_FDlgNodeContext_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgNodeContext_FormatHumanReadable), 1590722702U) },
		{ Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable, Z_Construct_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgEdgeOrphan_FormatHumanReadable"),&Z_Registration_Info_UScriptStruct_FDlgEdgeOrphan_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgEdgeOrphan_FormatHumanReadable), 2703027870U) },
		{ Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable, Z_Construct_UScriptStruct_FDlgEdge_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgEdge_FormatHumanReadable"),&Z_Registration_Info_UScriptStruct_FDlgEdge_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgEdge_FormatHumanReadable), 674055228U) },
		{ Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgSpeechSequenceEntry_FormatHumanReadable"),&Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgSpeechSequenceEntry_FormatHumanReadable), 974440613U) },
		{ Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable, Z_Construct_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgNodeSpeechSequence_FormatHumanReadable"),&Z_Registration_Info_UScriptStruct_FDlgNodeSpeechSequence_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgNodeSpeechSequence_FormatHumanReadable), 3863709982U) },
		{ Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable, Z_Construct_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgNodeSpeech_FormatHumanReadable"),&Z_Registration_Info_UScriptStruct_FDlgNodeSpeech_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgNodeSpeech_FormatHumanReadable), 333149700U) },
		{ Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable, Z_Construct_UScriptStruct_FDlgDialogue_FormatHumanReadable_Statics::NewStructOps, TEXT("DlgDialogue_FormatHumanReadable"),&Z_Registration_Info_UScriptStruct_FDlgDialogue_FormatHumanReadable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgDialogue_FormatHumanReadable), 2953440847U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgHumanReadableTextCommandlet, TEXT("UDlgHumanReadableTextCommandlet"), &Z_Registration_Info_UClass_UDlgHumanReadableTextCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgHumanReadableTextCommandlet), 3818353080U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_Commandlets_DlgHumanReadableTextCommandlet_h__Script_DlgSystemEditor_7de3c9c07296a99a45faf999da7f40a87a928adb{
	TEXT("/Script/DlgSystemEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
