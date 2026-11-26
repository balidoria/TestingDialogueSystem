// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Editor/Nodes/DialogueGraphNode_Edge.h"
#include "DlgSystem/DlgEdge.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode_Edge() {}

// ********** Begin Cross Module References ********************************************************
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEdge(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Edge(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Edge(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDialogueGraphNode_Edge **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueGraphNode_Edge_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Represents the graph node for edges, corresponds to the runtime FDlgEdge.\n * Allows us to have selectable edges.\n * This class has an additional constraint over the base class UDialogueGraphNode_Base such that the input and output pin\n * have only one connection (aka Pin.LinkedTo.Num() == 1 at all times) otherwise this does not make sense to simulate an Edge.\n */" },
		{ "IncludePath", "Editor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ToolTip", "Represents the graph node for edges, corresponds to the runtime FDlgEdge.\nAllows us to have selectable edges.\nThis class has an additional constraint over the base class UDialogueGraphNode_Base such that the input and output pin\nhave only one connection (aka Pin.LinkedTo.Num() == 1 at all times) otherwise this does not make sense to simulate an Edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueEdge_MetaData[] = {
		{ "Category", "DialogueGraphNode" },
		{ "Comment", "/** The copy Dialogue Edge corresponding to this graph node. This belongs to the the Node of the Input Pin (GetParentNode) */" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The copy Dialogue Edge corresponding to this graph node. This belongs to the the Node of the Input Pin (GetParentNode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrimaryEdge_MetaData[] = {
		{ "Comment", "/**\n\x09 * Is this a primary edge? Aka does this edge lead to a unique path to the ChildNode.\n\x09 * This is only set after the graph is compiled.\n\x09 */" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode_Edge.h" },
		{ "ToolTip", "Is this a primary edge? Aka does this edge lead to a unique path to the ChildNode.\nThis is only set after the graph is compiled." },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueGraphNode_Edge constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueEdge;
	static void NewProp_bIsPrimaryEdge_SetBit(void* Obj)
	{
		((UDialogueGraphNode_Edge*)Obj)->bIsPrimaryEdge = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrimaryEdge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDialogueGraphNode_Edge constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode_Edge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDialogueGraphNode_Edge Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DialogueEdge = { "DialogueEdge", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphNode_Edge, DialogueEdge), Z_Construct_UScriptStruct_FDlgEdge, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueEdge_MetaData), NewProp_DialogueEdge_MetaData) }; // d33131768289989f48b19a9eff0a6e103a044639
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsPrimaryEdge = { "bIsPrimaryEdge", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueGraphNode_Edge), &UHT_STATICS::NewProp_bIsPrimaryEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPrimaryEdge_MetaData), NewProp_bIsPrimaryEdge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsPrimaryEdge,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDialogueGraphNode_Edge Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueGraphNode_Base,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueGraphNode_Edge,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueGraphNode_Edge;
UClass* Z_Construct_UClass_UDialogueGraphNode_Edge(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueGraphNode_Edge;
		if (!Z_Registration_Info_UClass_UDialogueGraphNode_Edge.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueGraphNode_Edge"),
				Z_Registration_Info_UClass_UDialogueGraphNode_Edge.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueGraphNode_Edge.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueGraphNode_Edge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode_Edge.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueGraphNode_Edge.OuterSingleton;
}
#undef UHT_STATICS
UDialogueGraphNode_Edge::UDialogueGraphNode_Edge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueGraphNode_Edge);
UDialogueGraphNode_Edge::~UDialogueGraphNode_Edge() {}
// ********** End Class UDialogueGraphNode_Edge ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Edge_h__Script_DlgSystemEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode_Edge, TEXT("UDialogueGraphNode_Edge"), &Z_Registration_Info_UClass_UDialogueGraphNode_Edge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode_Edge), 3069803709U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Edge_h__Script_DlgSystemEditor_297c5ed07b2b8b24bd0620ad91ca8e0dd4fdb11c{
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
