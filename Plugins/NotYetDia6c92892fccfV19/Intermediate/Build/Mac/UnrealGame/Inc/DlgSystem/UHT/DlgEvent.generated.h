// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DlgEvent.h"

#ifdef DLGSYSTEM_DlgEvent_generated_h
#error "DlgEvent.generated.h already included, missing '#pragma once' in DlgEvent.h"
#endif
#define DLGSYSTEM_DlgEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDlgEvent *********************************************************
struct Z_Construct_UScriptStruct_FDlgEvent_Statics;
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgEvent(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgEvent_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDlgEvent_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FDlgEvent(ETypeConstructPhase::Inner); }


struct FDlgEvent;
// ********** End ScriptStruct FDlgEvent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgEvent_h

// ********** Begin Enum EDlgEventType *************************************************************
#define FOREACH_ENUM_EDLGEVENTTYPE(op) \
	op(EDlgEventType::Event) \
	op(EDlgEventType::ModifyInt) \
	op(EDlgEventType::ModifyFloat) \
	op(EDlgEventType::ModifyBool) \
	op(EDlgEventType::ModifyName) \
	op(EDlgEventType::ModifyClassIntVariable) \
	op(EDlgEventType::ModifyClassFloatVariable) \
	op(EDlgEventType::ModifyClassBoolVariable) \
	op(EDlgEventType::ModifyClassNameVariable) \
	op(EDlgEventType::Custom) \
	op(EDlgEventType::UnrealFunction) 

enum class EDlgEventType : uint8;
template<> struct TIsUEnumClass<EDlgEventType> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgEventType>();
// ********** End Enum EDlgEventType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
