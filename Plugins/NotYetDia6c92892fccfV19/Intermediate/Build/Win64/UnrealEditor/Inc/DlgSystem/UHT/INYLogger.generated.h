// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Logging/INYLogger.h"

#ifdef DLGSYSTEM_INYLogger_generated_h
#error "INYLogger.generated.h already included, missing '#pragma once' in INYLogger.h"
#endif
#define DLGSYSTEM_INYLogger_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Logging_INYLogger_h

// ********** Begin Enum ENYLoggerLogLevel *********************************************************
#define FOREACH_ENUM_ENYLOGGERLOGLEVEL(op) \
	op(ENYLoggerLogLevel::NoLogging) \
	op(ENYLoggerLogLevel::Error) \
	op(ENYLoggerLogLevel::Warning) \
	op(ENYLoggerLogLevel::Info) \
	op(ENYLoggerLogLevel::Debug) \
	op(ENYLoggerLogLevel::Trace) 

enum class ENYLoggerLogLevel : uint8;
template<> struct TIsUEnumClass<ENYLoggerLogLevel> { enum { Value = true }; };
template<> UE_NODEBUG DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ENYLoggerLogLevel>();
// ********** End Enum ENYLoggerLogLevel ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
