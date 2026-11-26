// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Editor/Graph/SchemaActions/DlgNewNode_GraphSchemaAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgNewNode_GraphSchemaAction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNewNode_GraphSchemaAction(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FDlgNewNode_GraphSchemaAction *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgNewNode_GraphSchemaAction_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgNewNode_GraphSchemaAction>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgNewNode_GraphSchemaAction); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Editor/Graph/SchemaActions/DlgNewNode_GraphSchemaAction.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgNewNode_GraphSchemaAction constinit property declarations *****
// ********** End ScriptStruct FDlgNewNode_GraphSchemaAction constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNewNode_GraphSchemaAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FDlgNewNode_GraphSchemaAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDlgNewNode_GraphSchemaAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"DlgNewNode_GraphSchemaAction",
	nullptr,
	0,
	DataSizeOf<FDlgNewNode_GraphSchemaAction>(),
	alignof(FDlgNewNode_GraphSchemaAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgNewNode_GraphSchemaAction;
UScriptStruct* Z_Construct_UScriptStruct_FDlgNewNode_GraphSchemaAction(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgNewNode_GraphSchemaAction.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgNewNode_GraphSchemaAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNewNode_GraphSchemaAction, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase::Outer), TEXT("DlgNewNode_GraphSchemaAction"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgNewNode_GraphSchemaAction.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgNewNode_GraphSchemaAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgNewNode_GraphSchemaAction.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgNewNode_GraphSchemaAction.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgNewNode_GraphSchemaAction ***************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_Editor_Graph_SchemaActions_DlgNewNode_GraphSchemaAction_h__Script_DlgSystemEditor_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgNewNode_GraphSchemaAction, Z_Construct_UScriptStruct_FDlgNewNode_GraphSchemaAction_Statics::NewStructOps, TEXT("DlgNewNode_GraphSchemaAction"),&Z_Registration_Info_UScriptStruct_FDlgNewNode_GraphSchemaAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgNewNode_GraphSchemaAction), 1477169875U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_Editor_Graph_SchemaActions_DlgNewNode_GraphSchemaAction_h__Script_DlgSystemEditor_cb6df69f4db1f61cb309b5d5f34615263bd72002{
	TEXT("/Script/DlgSystemEditor"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
