// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_Proxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgNode_Proxy() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Proxy(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Proxy(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDlgNode_Proxy ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgNode_Proxy_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Node without text. Execution auto-steps through it to the referenced node.\n * Can be used to reduce dialogue graph spaghetti.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Proxy.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Proxy.h" },
		{ "ToolTip", "Node without text. Execution auto-steps through it to the referenced node.\nCan be used to reduce dialogue graph spaghetti." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Index of the node the Proxy represents (in UDlgDialogue::Nodes)\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Proxy.h" },
		{ "ToolTip", "Index of the node the Proxy represents (in UDlgDialogue::Nodes)" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgNode_Proxy constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgNode_Proxy constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Proxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgNode_Proxy Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_Proxy, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIndex_MetaData), NewProp_NodeIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgNode_Proxy Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgNode,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgNode_Proxy,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgNode_Proxy;
UClass* Z_Construct_UClass_UDlgNode_Proxy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgNode_Proxy;
		if (!Z_Registration_Info_UClass_UDlgNode_Proxy.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgNode_Proxy"),
				Z_Registration_Info_UClass_UDlgNode_Proxy.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UDlgNode_Proxy.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgNode_Proxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_Proxy.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgNode_Proxy.OuterSingleton;
}
#undef UHT_STATICS
UDlgNode_Proxy::UDlgNode_Proxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgNode_Proxy);
UDlgNode_Proxy::~UDlgNode_Proxy() {}
// ********** End Class UDlgNode_Proxy *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_Proxy_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_Proxy, TEXT("UDlgNode_Proxy"), &Z_Registration_Info_UClass_UDlgNode_Proxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_Proxy), 2736963043U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_Proxy_h__Script_DlgSystem_78bd1e4d6d8256377dfea6cb4dc481dfef4b71a7{
	TEXT("/Script/DlgSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
