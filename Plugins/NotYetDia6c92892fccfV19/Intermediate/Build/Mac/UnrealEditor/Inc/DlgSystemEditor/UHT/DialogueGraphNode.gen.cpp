// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Editor/Nodes/DialogueGraphNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode() {}

// ********** Begin Cross Module References ********************************************************
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDialogueGraphNode *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueGraphNode_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Editor/Nodes/DialogueGraphNode.h" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueNode_MetaData[] = {
		{ "Category", "DialogueGraphNode" },
		{ "Comment", "/** The Dialogue Node this graph node references.  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Dialogue Node this graph node references." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[] = {
		{ "Category", "DialogueGraphNode" },
		{ "Comment", "/** The Dialogue Node index in the Dialogue (array) this represents. This is not relevant for the StartNode. */" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode.h" },
		{ "ToolTip", "The Dialogue Node index in the Dialogue (array) this represents. This is not relevant for the StartNode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeDepth_MetaData[] = {
		{ "Comment", "/** Indicates the distance from the start node. This is only set after the graph is compiled. */" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode.h" },
		{ "ToolTip", "Indicates the distance from the start node. This is only set after the graph is compiled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBorderHighlight_MetaData[] = {
		{ "Comment", "/** Used to highlight the node if the currently selected node is a proxy targeting it */" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode.h" },
		{ "ToolTip", "Used to highlight the node if the currently selected node is a proxy targeting it" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueGraphNode constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueNode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeDepth;
	static void NewProp_bUseBorderHighlight_SetBit(void* Obj)
	{
		((UDialogueGraphNode*)Obj)->bUseBorderHighlight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBorderHighlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDialogueGraphNode constinit property declarations *************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDialogueGraphNode Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DialogueNode = { "DialogueNode", nullptr, (EPropertyFlags)0x0022080000080009, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphNode, DialogueNode), Z_Construct_UClass_UDlgNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueNode_MetaData), NewProp_DialogueNode_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphNode, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIndex_MetaData), NewProp_NodeIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeDepth = { "NodeDepth", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphNode, NodeDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeDepth_MetaData), NewProp_NodeDepth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseBorderHighlight = { "bUseBorderHighlight", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueGraphNode), &UHT_STATICS::NewProp_bUseBorderHighlight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBorderHighlight_MetaData), NewProp_bUseBorderHighlight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseBorderHighlight,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDialogueGraphNode Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueGraphNode_Base,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueGraphNode,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueGraphNode;
UClass* Z_Construct_UClass_UDialogueGraphNode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueGraphNode;
		if (!Z_Registration_Info_UClass_UDialogueGraphNode.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueGraphNode"),
				Z_Registration_Info_UClass_UDialogueGraphNode.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueGraphNode.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueGraphNode.OuterSingleton;
}
#undef UHT_STATICS
UDialogueGraphNode::UDialogueGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueGraphNode);
UDialogueGraphNode::~UDialogueGraphNode() {}
// ********** End Class UDialogueGraphNode *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_h__Script_DlgSystemEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode, TEXT("UDialogueGraphNode"), &Z_Registration_Info_UClass_UDialogueGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode), 3737077873U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_h__Script_DlgSystemEditor_2d6b55de45d532cd6663641ef74aa522e176a2e0{
	TEXT("/Script/DlgSystemEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
