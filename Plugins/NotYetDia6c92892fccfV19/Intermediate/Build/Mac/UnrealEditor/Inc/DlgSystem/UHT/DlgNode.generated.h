// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/DlgNode.h"

#ifdef DLGSYSTEM_DlgNode_generated_h
#error "DlgNode.generated.h already included, missing '#pragma once' in DlgNode.h"
#endif
#define DLGSYSTEM_DlgNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogueWave;
class UDlgNodeData;
class UObject;
class USoundBase;
class USoundWave;
struct FDlgCondition;
struct FDlgEdge;
struct FDlgEvent;
struct FDlgTextArgument;
struct FGuid;

// ********** Begin Class UDlgNode *****************************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNodeData); \
	DECLARE_FUNCTION(execGetNodeGenericData); \
	DECLARE_FUNCTION(execGetSpeakerState); \
	DECLARE_FUNCTION(execGetNodeVoiceDialogueWave); \
	DECLARE_FUNCTION(execGetNodeVoiceSoundBase); \
	DECLARE_FUNCTION(execGetNodeVoiceSoundWave); \
	DECLARE_FUNCTION(execGetNodeUnformattedText); \
	DECLARE_FUNCTION(execGetCheckChildrenOnEvaluation); \
	DECLARE_FUNCTION(execGetNodeText); \
	DECLARE_FUNCTION(execGetTextArguments); \
	DECLARE_FUNCTION(execGetNodeChildAt); \
	DECLARE_FUNCTION(execGetNumNodeChildren); \
	DECLARE_FUNCTION(execGetNodeChildren); \
	DECLARE_FUNCTION(execGetNodeEnterEvents); \
	DECLARE_FUNCTION(execHasAnyEnterEvents); \
	DECLARE_FUNCTION(execGetNodeEnterConditions); \
	DECLARE_FUNCTION(execHasAnyEnterConditions); \
	DECLARE_FUNCTION(execGetNodeParticipantName); \
	DECLARE_FUNCTION(execHasGUID); \
	DECLARE_FUNCTION(execGetGUID);


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h_52_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgNode, NO_API)


struct Z_Construct_UClass_UDlgNode_Statics;
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h_52_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDlgNode_Statics; \
	friend DLGSYSTEM_API UClass* ::Z_Construct_UClass_UDlgNode(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDlgNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), Z_Construct_UClass_UDlgNode) \
	DECLARE_SERIALIZER(UDlgNode) \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h_52_ARCHIVESERIALIZER


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDlgNode(UDlgNode&&) = delete; \
	UDlgNode(const UDlgNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgNode) \
	NO_API virtual ~UDlgNode();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h_49_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h_52_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDlgNode;

// ********** End Class UDlgNode *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_h

// ********** Begin Enum EDlgEntryRestriction ******************************************************
#define FOREACH_ENUM_EDLGENTRYRESTRICTION(op) \
	op(EDlgEntryRestriction::None) \
	op(EDlgEntryRestriction::OncePerContext) \
	op(EDlgEntryRestriction::Once) 

enum class EDlgEntryRestriction : uint8;
template<> struct TIsUEnumClass<EDlgEntryRestriction> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgEntryRestriction>();
// ********** End Enum EDlgEntryRestriction ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
