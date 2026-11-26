// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Logging/INYLogger.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeINYLogger() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ENYLoggerLogLevel *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ENYLoggerLogLevel>()
{
	return Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Debug.Comment", "// Verbose\n" },
		{ "Debug.Name", "ENYLoggerLogLevel::Debug" },
		{ "Debug.ToolTip", "Verbose" },
		{ "Error.Comment", "// Kills the program\n// TODO use\n// Fatal,\n" },
		{ "Error.Name", "ENYLoggerLogLevel::Error" },
		{ "Error.ToolTip", "Kills the program\nTODO use\nFatal," },
		{ "Info.Comment", "// Log\n" },
		{ "Info.Name", "ENYLoggerLogLevel::Info" },
		{ "Info.ToolTip", "Log" },
		{ "ModuleRelativePath", "Logging/INYLogger.h" },
		{ "NoLogging.Name", "ENYLoggerLogLevel::NoLogging" },
		{ "Trace.Comment", "// VeryVerbose\n// Used for\n" },
		{ "Trace.Name", "ENYLoggerLogLevel::Trace" },
		{ "Trace.ToolTip", "VeryVerbose\nUsed for" },
		{ "Warning.Name", "ENYLoggerLogLevel::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENYLoggerLogLevel::NoLogging", (int64)ENYLoggerLogLevel::NoLogging },
		{ "ENYLoggerLogLevel::Error", (int64)ENYLoggerLogLevel::Error },
		{ "ENYLoggerLogLevel::Warning", (int64)ENYLoggerLogLevel::Warning },
		{ "ENYLoggerLogLevel::Info", (int64)ENYLoggerLogLevel::Info },
		{ "ENYLoggerLogLevel::Debug", (int64)ENYLoggerLogLevel::Debug },
		{ "ENYLoggerLogLevel::Trace", (int64)ENYLoggerLogLevel::Trace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"ENYLoggerLogLevel",
	"ENYLoggerLogLevel",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ENYLoggerLogLevel;
UEnum* Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ENYLoggerLogLevel.OuterSingleton)
		{
			ZRIE_ENYLoggerLogLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("ENYLoggerLogLevel"));
		}
		return ZRIE_ENYLoggerLogLevel.OuterSingleton;
	}
	if (!ZRIE_ENYLoggerLogLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ENYLoggerLogLevel.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ENYLoggerLogLevel.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ENYLoggerLogLevel ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Logging_INYLogger_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystem_ENYLoggerLogLevel, TEXT("ENYLoggerLogLevel"), &ZRIE_ENYLoggerLogLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1032223007U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Logging_INYLogger_h__Script_DlgSystem_5a49bdf912f463c394e539106a3839eae5bec6eb{
	TEXT("/Script/DlgSystem"),
	nullptr, 0,
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
