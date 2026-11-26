// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DlgManager.h"

#ifdef DLGSYSTEM_DlgManager_generated_h
#error "DlgManager.generated.h already included, missing '#pragma once' in DlgManager.h"
#endif
#define DLGSYSTEM_DlgManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDlgContext;
class UDlgDialogue;
class UObject;
class UWorld;
struct FDlgHistory;
struct FDlgObjectsArray;
struct FGuid;

// ********** Begin ScriptStruct FDlgObjectsArray **************************************************
struct Z_Construct_UScriptStruct_FDlgObjectsArray_Statics;
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgObjectsArray(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDlgObjectsArray_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FDlgObjectsArray(ETypeConstructPhase::Inner); }


struct FDlgObjectsArray;
// ********** End ScriptStruct FDlgObjectsArray ****************************************************

// ********** Begin Class UDlgManager **************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearDialoguePersistentWorldContextObject); \
	DECLARE_FUNCTION(execSetDialoguePersistentWorldContextObject); \
	DECLARE_FUNCTION(execGetDialogueWorld); \
	DECLARE_FUNCTION(execUnregisterDialogueConsoleCommands); \
	DECLARE_FUNCTION(execRegisterDialogueConsoleCommands); \
	DECLARE_FUNCTION(execGetAllDialoguesEventNames); \
	DECLARE_FUNCTION(execGetAllDialoguesConditionNames); \
	DECLARE_FUNCTION(execGetAllDialoguesNameNames); \
	DECLARE_FUNCTION(execGetAllDialoguesBoolNames); \
	DECLARE_FUNCTION(execGetAllDialoguesFloatNames); \
	DECLARE_FUNCTION(execGetAllDialoguesIntNames); \
	DECLARE_FUNCTION(execGetAllDialoguesSpeakerStates); \
	DECLARE_FUNCTION(execGetAllDialoguesParticipantNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantEventNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantConditionNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantFNameNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantBoolNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantFloatNames); \
	DECLARE_FUNCTION(execGetDialoguesParticipantIntNames); \
	DECLARE_FUNCTION(execGetDialoguesSpeakerStates); \
	DECLARE_FUNCTION(execGetDialoguesParticipantNames); \
	DECLARE_FUNCTION(execIsObjectANodeData); \
	DECLARE_FUNCTION(execIsObjectACustomTextArgument); \
	DECLARE_FUNCTION(execIsObjectACustomCondition); \
	DECLARE_FUNCTION(execIsObjectACustomEvent); \
	DECLARE_FUNCTION(execDoesObjectImplementDialogueParticipantInterface); \
	DECLARE_FUNCTION(execGetDialogueHistory); \
	DECLARE_FUNCTION(execClearDialogueHistory); \
	DECLARE_FUNCTION(execSetDialogueHistory); \
	DECLARE_FUNCTION(execGetObjectsMapWithDialogueParticipantInterface); \
	DECLARE_FUNCTION(execGetObjectsWithDialogueParticipantInterface); \
	DECLARE_FUNCTION(execStartDialogue4); \
	DECLARE_FUNCTION(execStartDialogue3); \
	DECLARE_FUNCTION(execStartDialogue2); \
	DECLARE_FUNCTION(execStartMonologue); \
	DECLARE_FUNCTION(execResumeDialogueFromNodeGUID); \
	DECLARE_FUNCTION(execResumeDialogueFromNodeIndex); \
	DECLARE_FUNCTION(execCanStartDialogue); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execStartDialogueWithDefaultParticipants);


struct Z_Construct_UClass_UDlgManager_Statics;
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgManager(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDlgManager_Statics; \
	friend DLGSYSTEM_API UClass* ::Z_Construct_UClass_UDlgManager(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDlgManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), Z_Construct_UClass_UDlgManager) \
	DECLARE_SERIALIZER(UDlgManager)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDlgManager(UDlgManager&&) = delete; \
	UDlgManager(const UDlgManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgManager) \
	NO_API virtual ~UDlgManager();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h_29_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h_32_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDlgManager;

// ********** End Class UDlgManager ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
