// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_SpeechSequence.h"
#include "DlgSystem/DlgEdge.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgNode_SpeechSequence() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_SpeechSequence(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_SpeechSequence(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FDlgSpeechSequenceEntry *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgSpeechSequenceEntry>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgSpeechSequenceEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// The Participant Name (speaker) associated with this speech entry.\n" },
		{ "DisplayName", "Participant Name" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "The Participant Name (speaker) associated with this speech entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Text that will appear when this node participant name speaks to someone else.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that will appear when this node participant name speaks to someone else." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeText_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Text that will appear when you want to continue down this edge to the next conversation. Usually \"Next\".\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that will appear when you want to continue down this edge to the next conversation. Usually \"Next\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerState_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// State of the speaker attached to the entry. Passed to the GetParticipantIcon function.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "State of the speaker attached to the entry. Passed to the GetParticipantIcon function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Node data that you can customize yourself with your own data types\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Node data that you can customize yourself with your own data types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceSoundWave_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Voice attached to this node. The Sound Wave variant.\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Voice attached to this node. The Sound Wave variant.\nNOTE: You should probably use the NodeData" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceDialogueWave_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Voice attached to this node. The Dialogue Wave variant. Only the first wave from the dialogue context array should be used.\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Voice attached to this node. The Dialogue Wave variant. Only the first wave from the dialogue context array should be used.\nNOTE: You should probably use the NodeData" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenericData_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Any generic object you would like\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Any generic object you would like\nNOTE: You should probably use the NodeData" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgSpeechSequenceEntry constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FTextPropertyParams NewProp_EdgeText;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceSoundWave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceDialogueWave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenericData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgSpeechSequenceEntry constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgSpeechSequenceEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgSpeechSequenceEntry Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry, Speaker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_EdgeText = { "EdgeText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry, EdgeText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeText_MetaData), NewProp_EdgeText_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SpeakerState = { "SpeakerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry, SpeakerState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerState_MetaData), NewProp_SpeakerState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry, NodeData), Z_Construct_UClass_UDlgNodeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeData_MetaData), NewProp_NodeData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_VoiceSoundWave = { "VoiceSoundWave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry, VoiceSoundWave), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceSoundWave_MetaData), NewProp_VoiceSoundWave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_VoiceDialogueWave = { "VoiceDialogueWave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry, VoiceDialogueWave), Z_Construct_UClass_UDialogueWave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceDialogueWave_MetaData), NewProp_VoiceDialogueWave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GenericData = { "GenericData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgSpeechSequenceEntry, GenericData), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenericData_MetaData), NewProp_GenericData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeakerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VoiceSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VoiceDialogueWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GenericData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgSpeechSequenceEntry Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgSpeechSequenceEntry",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgSpeechSequenceEntry>(),
	alignof(FDlgSpeechSequenceEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry;
UScriptStruct* Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgSpeechSequenceEntry"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgSpeechSequenceEntry *********************************************

// ********** Begin Class UDlgNode_SpeechSequence Function GetNodeSpeechSequence *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence_Statics
struct UHT_STATICS
{
	struct DlgNode_SpeechSequence_eventGetNodeSpeechSequence_Parms
	{
		TArray<FDlgSpeechSequenceEntry> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the SpeechSequence as a const array\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Gets the SpeechSequence as a const array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeSpeechSequence constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeSpeechSequence constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeSpeechSequence Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry, METADATA_PARAMS(0, nullptr) }; // ebf7e345d8bf4903df1380e3eee10435944f3b1e
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_SpeechSequence_eventGetNodeSpeechSequence_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // ebf7e345d8bf4903df1380e3eee10435944f3b1e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeSpeechSequence Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode_SpeechSequence, nullptr, "GetNodeSpeechSequence", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_SpeechSequence_eventGetNodeSpeechSequence_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_SpeechSequence_eventGetNodeSpeechSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode_SpeechSequence::execGetNodeSpeechSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDlgSpeechSequenceEntry>*)Z_Param__Result=P_THIS->GetNodeSpeechSequence();
	P_NATIVE_END;
}
// ********** End Class UDlgNode_SpeechSequence Function GetNodeSpeechSequence *********************

// ********** Begin Class UDlgNode_SpeechSequence Function HasSpeechSequences **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences_Statics
struct UHT_STATICS
{
	struct DlgNode_SpeechSequence_eventHasSpeechSequences_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Tells us if the speech sequence has any speeches (aka not empty)\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Tells us if the speech sequence has any speeches (aka not empty)" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasSpeechSequences constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_SpeechSequence_eventHasSpeechSequences_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasSpeechSequences constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasSpeechSequences Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgNode_SpeechSequence_eventHasSpeechSequences_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasSpeechSequences Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode_SpeechSequence, nullptr, "HasSpeechSequences", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_SpeechSequence_eventHasSpeechSequences_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_SpeechSequence_eventHasSpeechSequences_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode_SpeechSequence::execHasSpeechSequences)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSpeechSequences();
	P_NATIVE_END;
}
// ********** End Class UDlgNode_SpeechSequence Function HasSpeechSequences ************************

// ********** Begin Class UDlgNode_SpeechSequence **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgNode_SpeechSequence_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Sequence of speeches - each can have a different speaker independently from the node owner.\n * The node stays active and proceeds one step in the SpeechSequence (internal) array until everyone said everything.\n */" },
		{ "IncludePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Sequence of speeches - each can have a different speaker independently from the node owner.\nThe node stays active and proceeds one step in the SpeechSequence (internal) array until everyone said everything." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeechSequence_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Array of important stuff to say\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Array of important stuff to say" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerEdges_MetaData[] = {
		{ "Comment", "// Inner edge, filled automatically based on SpeechSequence\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_SpeechSequence.h" },
		{ "ToolTip", "Inner edge, filled automatically based on SpeechSequence" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgNode_SpeechSequence constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechSequence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeechSequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InnerEdges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgNode_SpeechSequence constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNodeSpeechSequence"), .Pointer = &UDlgNode_SpeechSequence::execGetNodeSpeechSequence },
		{ .NameUTF8 = UTF8TEXT("HasSpeechSequences"), .Pointer = &UDlgNode_SpeechSequence::execHasSpeechSequences },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_SpeechSequence_GetNodeSpeechSequence, "GetNodeSpeechSequence" }, // 9f06aad1067e05669125226775789995a7706e51
		{ &Z_Construct_UFunction_UDlgNode_SpeechSequence_HasSpeechSequences, "HasSpeechSequences" }, // 7e417b84964b50747fc5b4e66eb1872b6353cf62
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_SpeechSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgNode_SpeechSequence Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SpeechSequence_Inner = { "SpeechSequence", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry, METADATA_PARAMS(0, nullptr) }; // ebf7e345d8bf4903df1380e3eee10435944f3b1e
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpeechSequence = { "SpeechSequence", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_SpeechSequence, SpeechSequence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeechSequence_MetaData), NewProp_SpeechSequence_MetaData) }; // ebf7e345d8bf4903df1380e3eee10435944f3b1e
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InnerEdges_Inner = { "InnerEdges", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(0, nullptr) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InnerEdges = { "InnerEdges", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_SpeechSequence, InnerEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerEdges_MetaData), NewProp_InnerEdges_MetaData) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeechSequence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeechSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InnerEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InnerEdges,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgNode_SpeechSequence Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgNode,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgNode_SpeechSequence,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDlgNode_SpeechSequence_StaticRegisterNativesUDlgNode_SpeechSequence()
{
	UClass* Class = UDlgNode_SpeechSequence::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgNode_SpeechSequence;
UClass* Z_Construct_UClass_UDlgNode_SpeechSequence(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgNode_SpeechSequence;
		if (!Z_Registration_Info_UClass_UDlgNode_SpeechSequence.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgNode_SpeechSequence"),
				Z_Registration_Info_UClass_UDlgNode_SpeechSequence.InnerSingleton,
				UDlgNode_SpeechSequence_StaticRegisterNativesUDlgNode_SpeechSequence,
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
		return Z_Registration_Info_UClass_UDlgNode_SpeechSequence.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgNode_SpeechSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_SpeechSequence.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgNode_SpeechSequence.OuterSingleton;
}
#undef UHT_STATICS
UDlgNode_SpeechSequence::UDlgNode_SpeechSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgNode_SpeechSequence);
UDlgNode_SpeechSequence::~UDlgNode_SpeechSequence() {}
// ********** End Class UDlgNode_SpeechSequence ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_SpeechSequence_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry, Z_Construct_UScriptStruct_FDlgSpeechSequenceEntry_Statics::NewStructOps, TEXT("DlgSpeechSequenceEntry"),&Z_Registration_Info_UScriptStruct_FDlgSpeechSequenceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgSpeechSequenceEntry), 3958891333U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_SpeechSequence, TEXT("UDlgNode_SpeechSequence"), &Z_Registration_Info_UClass_UDlgNode_SpeechSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_SpeechSequence), 3971827472U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_SpeechSequence_h__Script_DlgSystem_10dad19ad64a4f049c26ab2b84c374a66d0b7dfb{
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
