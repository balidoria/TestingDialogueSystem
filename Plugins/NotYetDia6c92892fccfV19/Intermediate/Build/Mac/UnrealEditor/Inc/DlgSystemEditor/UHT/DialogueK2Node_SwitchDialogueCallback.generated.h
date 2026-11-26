// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h"

#ifdef DLGSYSTEMEDITOR_DialogueK2Node_SwitchDialogueCallback_generated_h
#error "DialogueK2Node_SwitchDialogueCallback.generated.h already included, missing '#pragma once' in DialogueK2Node_SwitchDialogueCallback.h"
#endif
#define DLGSYSTEMEDITOR_DialogueK2Node_SwitchDialogueCallback_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallback ***********************************
struct Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics;
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_32_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics; \
	friend DLGSYSTEMEDITOR_API UClass* ::Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDialogueK2Node_SwitchDialogueCallback, UK2Node_Switch, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DlgSystemEditor"), Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback) \
	DECLARE_SERIALIZER(UDialogueK2Node_SwitchDialogueCallback)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDialogueK2Node_SwitchDialogueCallback(UDialogueK2Node_SwitchDialogueCallback&&) = delete; \
	UDialogueK2Node_SwitchDialogueCallback(const UDialogueK2Node_SwitchDialogueCallback&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueK2Node_SwitchDialogueCallback); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueK2Node_SwitchDialogueCallback); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueK2Node_SwitchDialogueCallback) \
	NO_API virtual ~UDialogueK2Node_SwitchDialogueCallback();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_29_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_32_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDialogueK2Node_SwitchDialogueCallback;

// ********** End Class UDialogueK2Node_SwitchDialogueCallback *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h

// ********** Begin Enum EDlgDialogueCallback ******************************************************
#define FOREACH_ENUM_EDLGDIALOGUECALLBACK(op) \
	op(EDlgDialogueCallback::Event) \
	op(EDlgDialogueCallback::Condition) \
	op(EDlgDialogueCallback::FloatValue) \
	op(EDlgDialogueCallback::IntValue) \
	op(EDlgDialogueCallback::BoolValue) \
	op(EDlgDialogueCallback::NameValue) 

enum class EDlgDialogueCallback : uint8;
template<> struct TIsUEnumClass<EDlgDialogueCallback> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEMEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgDialogueCallback>();
// ********** End Enum EDlgDialogueCallback ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
