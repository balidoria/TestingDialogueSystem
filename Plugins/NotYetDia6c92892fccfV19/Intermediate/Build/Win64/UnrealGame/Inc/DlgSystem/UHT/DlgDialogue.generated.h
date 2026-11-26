// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DlgDialogue.h"

#ifdef DLGSYSTEM_DlgDialogue_generated_h
#error "DlgDialogue.generated.h already included, missing '#pragma once' in DlgDialogue.h"
#endif
#define DLGSYSTEM_DlgDialogue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDlgNode;
class UObject;
struct FDlgParticipantClass;
struct FDlgParticipantData;
struct FGuid;

// ********** Begin ScriptStruct FDlgParticipantClass **********************************************
struct Z_Construct_UScriptStruct_FDlgParticipantClass_Statics;
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantClass(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDlgParticipantClass_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FDlgParticipantClass(ETypeConstructPhase::Inner); }


struct FDlgParticipantClass;
// ********** End ScriptStruct FDlgParticipantClass ************************************************

// ********** Begin Class UDlgDialogue *************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMutableNodeFromGUID); \
	DECLARE_FUNCTION(execGetMutableNodeFromIndex); \
	DECLARE_FUNCTION(execGetNodeIndexForGUID); \
	DECLARE_FUNCTION(execGetNodeGUIDForIndex); \
	DECLARE_FUNCTION(execIsValidNodeGUID); \
	DECLARE_FUNCTION(execIsValidNodeIndex); \
	DECLARE_FUNCTION(execGetMutableStartNodes); \
	DECLARE_FUNCTION(execGetMutableStartNode); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execHasGUID); \
	DECLARE_FUNCTION(execGetGUID); \
	DECLARE_FUNCTION(execGetDialogueFName); \
	DECLARE_FUNCTION(execGetDialogueName); \
	DECLARE_FUNCTION(execGetDialogueVersion); \
	DECLARE_FUNCTION(execGetClassTextNames); \
	DECLARE_FUNCTION(execGetClassNameNames); \
	DECLARE_FUNCTION(execGetClassBoolNames); \
	DECLARE_FUNCTION(execGetClassFloatNames); \
	DECLARE_FUNCTION(execGetClassIntNames); \
	DECLARE_FUNCTION(execGetNameNames); \
	DECLARE_FUNCTION(execGetBoolNames); \
	DECLARE_FUNCTION(execGetFloatNames); \
	DECLARE_FUNCTION(execGetIntNames); \
	DECLARE_FUNCTION(execGetCustomEvents); \
	DECLARE_FUNCTION(execGetEvents); \
	DECLARE_FUNCTION(execGetConditions); \
	DECLARE_FUNCTION(execGetAllSpeakerStates); \
	DECLARE_FUNCTION(execGetAllParticipantNames); \
	DECLARE_FUNCTION(execGetParticipantClassFTextNames); \
	DECLARE_FUNCTION(execGetParticipantClassFNameNames); \
	DECLARE_FUNCTION(execGetParticipantClassBoolNames); \
	DECLARE_FUNCTION(execGetParticipantClassFloatNames); \
	DECLARE_FUNCTION(execGetParticipantClassIntNames); \
	DECLARE_FUNCTION(execGetParticipantFNameNames); \
	DECLARE_FUNCTION(execGetParticipantBoolNames); \
	DECLARE_FUNCTION(execGetParticipantFloatNames); \
	DECLARE_FUNCTION(execGetParticipantIntNames); \
	DECLARE_FUNCTION(execGetParticipantCustomTextArguments); \
	DECLARE_FUNCTION(execGetParticipantCustomConditions); \
	DECLARE_FUNCTION(execGetParticipantCustomEvents); \
	DECLARE_FUNCTION(execGetParticipantFunctionNames); \
	DECLARE_FUNCTION(execGetParticipantEventNames); \
	DECLARE_FUNCTION(execGetParticipantConditionNames); \
	DECLARE_FUNCTION(execGetSpeakerStates); \
	DECLARE_FUNCTION(execGetParticipantClass); \
	DECLARE_FUNCTION(execGetParticipantClasses); \
	DECLARE_FUNCTION(execGetParticipantNames); \
	DECLARE_FUNCTION(execGetParticipantsNum); \
	DECLARE_FUNCTION(execHasParticipant); \
	DECLARE_FUNCTION(execGetParticipantsData);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_79_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgDialogue, NO_API)


struct Z_Construct_UClass_UDlgDialogue_Statics;
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_79_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDlgDialogue_Statics; \
	friend DLGSYSTEM_API UClass* ::Z_Construct_UClass_UDlgDialogue(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDlgDialogue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystem"), Z_Construct_UClass_UDlgDialogue) \
	DECLARE_SERIALIZER(UDlgDialogue) \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_79_ARCHIVESERIALIZER \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<UDlgDialogue*>(this); }


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDlgDialogue(UDlgDialogue&&) = delete; \
	UDlgDialogue(const UDlgDialogue&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgDialogue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgDialogue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgDialogue) \
	NO_API virtual ~UDlgDialogue();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_76_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_79_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDlgDialogue;

// ********** End Class UDlgDialogue ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgDialogue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
