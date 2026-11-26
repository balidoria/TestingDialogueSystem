// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Editor/Nodes/DialogueGraphNode_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDialogueGraphNode_Base() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphNode_Base(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDialogueGraphNode_Base **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueGraphNode_Base_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Represents the base class representation of the dialogue graph nodes.\n * Each dialogue graph node has only one input/output pin. And each pin can be linked to multiple nodes.\n */" },
		{ "IncludePath", "Editor/Nodes/DialogueGraphNode_Base.h" },
		{ "ModuleRelativePath", "Editor/Nodes/DialogueGraphNode_Base.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Represents the base class representation of the dialogue graph nodes.\nEach dialogue graph node has only one input/output pin. And each pin can be linked to multiple nodes." },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueGraphNode_Base constinit property declarations ******************
// ********** End Class UDialogueGraphNode_Base constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphNode_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEdGraphNode,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueGraphNode_Base,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueGraphNode_Base;
UClass* Z_Construct_UClass_UDialogueGraphNode_Base(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueGraphNode_Base;
		if (!Z_Registration_Info_UClass_UDialogueGraphNode_Base.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueGraphNode_Base"),
				Z_Registration_Info_UClass_UDialogueGraphNode_Base.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueGraphNode_Base.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueGraphNode_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphNode_Base.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueGraphNode_Base.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueGraphNode_Base);
UDialogueGraphNode_Base::~UDialogueGraphNode_Base() {}
// ********** End Class UDialogueGraphNode_Base ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Base_h__Script_DlgSystemEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphNode_Base, TEXT("UDialogueGraphNode_Base"), &Z_Registration_Info_UClass_UDialogueGraphNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphNode_Base), 2424325992U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_Editor_Nodes_DialogueGraphNode_Base_h__Script_DlgSystemEditor_b4015cefcb6eb0786319491bc2b02546d431cf60{
	TEXT("/Script/DlgSystemEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
