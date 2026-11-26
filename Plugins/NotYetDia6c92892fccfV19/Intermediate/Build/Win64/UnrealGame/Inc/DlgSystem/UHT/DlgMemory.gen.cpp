// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgMemory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgMemory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgHistory(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgMemory(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSavedData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FDlgNodeSavedData *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgNodeSavedData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgNodeSavedData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct to store any data a node might want to read/write\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Struct to store any data a node might want to read/write" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GUIDList_MetaData[] = {
		{ "Comment", "// used by random selector node to avoid repetition\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "used by random selector node to avoid repetition" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgNodeSavedData constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GUIDList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GUIDList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgNodeSavedData constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeSavedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgNodeSavedData Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GUIDList_Inner = { "GUIDList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GUIDList = { "GUIDList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgNodeSavedData, GUIDList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GUIDList_MetaData), NewProp_GUIDList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GUIDList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GUIDList,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgNodeSavedData Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgNodeSavedData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgNodeSavedData>(),
	alignof(FDlgNodeSavedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgNodeSavedData;
UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSavedData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgNodeSavedData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgNodeSavedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeSavedData, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgNodeSavedData"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgNodeSavedData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgNodeSavedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgNodeSavedData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgNodeSavedData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgNodeSavedData ***************************************************

// ********** Begin ScriptStruct FDlgHistory *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgHistory_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgHistory>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgHistory); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DlgMemory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisitedNodeIndices_MetaData[] = {
		{ "Category", "Dialogue|History" },
		{ "Comment", "// Sed of already visited Node indices\n// NOTE: if you serialize this but then later change the dialogue node positions this will have the wrong indices\n// NOTE: You should use VisitedNodeGUIDs\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Sed of already visited Node indices\nNOTE: if you serialize this but then later change the dialogue node positions this will have the wrong indices\nNOTE: You should use VisitedNodeGUIDs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisitedNodeGUIDs_MetaData[] = {
		{ "Category", "Dialogue|History" },
		{ "Comment", "// Set of already visited node GUIDs\n// This was added to fix Issue 30 (https://gitlab.com/NotYetGames/DlgSystem/-/issues/30)\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Set of already visited node GUIDs\nThis was added to fix Issue 30 (https:gitlab.com/NotYetGames/DlgSystem/-/issues/30)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[] = {
		{ "Comment", "// Key: Dialogue node identifier GUID\n// Value: data used by the node\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Key: Dialogue node identifier GUID\nValue: data used by the node" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgHistory constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisitedNodeIndices_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_VisitedNodeIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisitedNodeGUIDs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_VisitedNodeGUIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NodeData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgHistory constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgHistory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgHistory Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_VisitedNodeIndices_ElementProp = { "VisitedNodeIndices", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_VisitedNodeIndices = { "VisitedNodeIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgHistory, VisitedNodeIndices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisitedNodeIndices_MetaData), NewProp_VisitedNodeIndices_MetaData) };
static_assert(TModels_V<CGetTypeHashable, FGuid>, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_VisitedNodeGUIDs_ElementProp = { "VisitedNodeGUIDs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_VisitedNodeGUIDs = { "VisitedNodeGUIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgHistory, VisitedNodeGUIDs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisitedNodeGUIDs_MetaData), NewProp_VisitedNodeGUIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeData_ValueProp = { "NodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgNodeSavedData, METADATA_PARAMS(0, nullptr) }; // 5425597f0a88b02bb1965634ef55ef3f7a641c57
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NodeData_Key_KeyProp = { "NodeData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgHistory, NodeData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeData_MetaData), NewProp_NodeData_MetaData) }; // 5425597f0a88b02bb1965634ef55ef3f7a641c57
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisitedNodeIndices_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisitedNodeIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisitedNodeGUIDs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisitedNodeGUIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgHistory Property Definitions ************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgHistory",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgHistory>(),
	alignof(FDlgHistory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgHistory;
UScriptStruct* Z_Construct_UScriptStruct_FDlgHistory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgHistory.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgHistory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgHistory, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgHistory"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgHistory.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgHistory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgHistory.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgHistory.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgHistory *********************************************************

// ********** Begin ScriptStruct FDlgMemory ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgMemory_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgMemory>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgMemory); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Singleton to store Dialogue history\n// TODO: investigate if this is multiplayer friendly, it does not seem so as there exists only a single global dialogue memory\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Singleton to store Dialogue history\nTODO: investigate if this is multiplayer friendly, it does not seem so as there exists only a single global dialogue memory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HistoryMap_MetaData[] = {
		{ "Comment", "// Key: Dialogue unique identifier GUID\n// Value: set of already visited nodes\n" },
		{ "ModuleRelativePath", "DlgMemory.h" },
		{ "ToolTip", "Key: Dialogue unique identifier GUID\nValue: set of already visited nodes" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgMemory constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_HistoryMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HistoryMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HistoryMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgMemory constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgMemory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgMemory Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HistoryMap_ValueProp = { "HistoryMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgHistory, METADATA_PARAMS(0, nullptr) }; // 0f5ae929b52f0f8a898ab6a5897610cc4fe94c21
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HistoryMap_Key_KeyProp = { "HistoryMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_HistoryMap = { "HistoryMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgMemory, HistoryMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HistoryMap_MetaData), NewProp_HistoryMap_MetaData) }; // 0f5ae929b52f0f8a898ab6a5897610cc4fe94c21
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HistoryMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HistoryMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HistoryMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgMemory Property Definitions *************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgMemory",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgMemory>(),
	alignof(FDlgMemory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgMemory;
UScriptStruct* Z_Construct_UScriptStruct_FDlgMemory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgMemory.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgMemory, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgMemory"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgMemory.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgMemory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgMemory.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgMemory.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgMemory **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgMemory_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgNodeSavedData, Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewStructOps, TEXT("DlgNodeSavedData"),&Z_Registration_Info_UScriptStruct_FDlgNodeSavedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgNodeSavedData), 1411733887U) },
		{ Z_Construct_UScriptStruct_FDlgHistory, Z_Construct_UScriptStruct_FDlgHistory_Statics::NewStructOps, TEXT("DlgHistory"),&Z_Registration_Info_UScriptStruct_FDlgHistory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgHistory), 257616169U) },
		{ Z_Construct_UScriptStruct_FDlgMemory, Z_Construct_UScriptStruct_FDlgMemory_Statics::NewStructOps, TEXT("DlgMemory"),&Z_Registration_Info_UScriptStruct_FDlgMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgMemory), 98815333U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgMemory_h__Script_DlgSystem_a0d5b7a2986d64825f7c241e4bd01e3290924ad8{
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
