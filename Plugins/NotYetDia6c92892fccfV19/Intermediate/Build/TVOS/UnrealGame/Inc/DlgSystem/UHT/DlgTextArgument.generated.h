// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DlgTextArgument.h"

#ifdef DLGSYSTEM_DlgTextArgument_generated_h
#error "DlgTextArgument.generated.h already included, missing '#pragma once' in DlgTextArgument.h"
#endif
#define DLGSYSTEM_DlgTextArgument_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDlgTextArgument **************************************************
struct Z_Construct_UScriptStruct_FDlgTextArgument_Statics;
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument(ETypeConstructPhase);

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgTextArgument_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDlgTextArgument_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FDlgTextArgument(ETypeConstructPhase::Inner); }


struct FDlgTextArgument;
// ********** End ScriptStruct FDlgTextArgument ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgTextArgument_h

// ********** Begin Enum EDlgTextArgumentType ******************************************************
#define FOREACH_ENUM_EDLGTEXTARGUMENTTYPE(op) \
	op(EDlgTextArgumentType::DisplayName) \
	op(EDlgTextArgumentType::Gender) \
	op(EDlgTextArgumentType::DialogueInt) \
	op(EDlgTextArgumentType::DialogueFloat) \
	op(EDlgTextArgumentType::ClassInt) \
	op(EDlgTextArgumentType::ClassFloat) \
	op(EDlgTextArgumentType::ClassText) \
	op(EDlgTextArgumentType::Custom) 

enum class EDlgTextArgumentType : uint8;
template<> struct TIsUEnumClass<EDlgTextArgumentType> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgTextArgumentType>();
// ********** End Enum EDlgTextArgumentType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
