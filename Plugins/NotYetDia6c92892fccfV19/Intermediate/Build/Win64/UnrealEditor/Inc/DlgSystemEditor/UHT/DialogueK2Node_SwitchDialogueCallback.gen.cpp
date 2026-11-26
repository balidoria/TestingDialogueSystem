// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_SwitchDialogueCallback() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EDlgDialogueCallback ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback_Statics
template<> DLGSYSTEMEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgDialogueCallback>()
{
	return Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BoolValue.DisplayName", "Condition asking for a bool value" },
		{ "BoolValue.Name", "EDlgDialogueCallback::BoolValue" },
		{ "Condition.Comment", "/** Function call to check a condition */" },
		{ "Condition.DisplayName", "Dialogue Condition" },
		{ "Condition.Name", "EDlgDialogueCallback::Condition" },
		{ "Condition.ToolTip", "Function call to check a condition" },
		{ "Event.Comment", "/** Normal dialogue event during the conversation */" },
		{ "Event.DisplayName", "Dialogue Event" },
		{ "Event.Name", "EDlgDialogueCallback::Event" },
		{ "Event.ToolTip", "Normal dialogue event during the conversation" },
		{ "FloatValue.DisplayName", "Condition asking for a float value" },
		{ "FloatValue.Name", "EDlgDialogueCallback::FloatValue" },
		{ "IntValue.DisplayName", "Condition asking for an int value" },
		{ "IntValue.Name", "EDlgDialogueCallback::IntValue" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
		{ "NameValue.DisplayName", "Condition asking for a name value" },
		{ "NameValue.Name", "EDlgDialogueCallback::NameValue" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgDialogueCallback::Event", (int64)EDlgDialogueCallback::Event },
		{ "EDlgDialogueCallback::Condition", (int64)EDlgDialogueCallback::Condition },
		{ "EDlgDialogueCallback::FloatValue", (int64)EDlgDialogueCallback::FloatValue },
		{ "EDlgDialogueCallback::IntValue", (int64)EDlgDialogueCallback::IntValue },
		{ "EDlgDialogueCallback::BoolValue", (int64)EDlgDialogueCallback::BoolValue },
		{ "EDlgDialogueCallback::NameValue", (int64)EDlgDialogueCallback::NameValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
	nullptr,
	"EDlgDialogueCallback",
	"EDlgDialogueCallback",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgDialogueCallback;
UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgDialogueCallback.OuterSingleton)
		{
			ZRIE_EDlgDialogueCallback.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase::Outer), TEXT("EDlgDialogueCallback"));
		}
		return ZRIE_EDlgDialogueCallback.OuterSingleton;
	}
	if (!ZRIE_EDlgDialogueCallback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgDialogueCallback.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgDialogueCallback.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgDialogueCallback ********************************************************

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallback ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialoguePinNames_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackType_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallback.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallback constinit property declarations ***
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialoguePinNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialoguePinNames;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CallbackType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CallbackType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDialogueK2Node_SwitchDialogueCallback constinit property declarations *****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallback Property Definitions **************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DialoguePinNames_Inner = { "DialoguePinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_DialoguePinNames = { "DialoguePinNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueK2Node_SwitchDialogueCallback, DialoguePinNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialoguePinNames_MetaData), NewProp_DialoguePinNames_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CallbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CallbackType = { "CallbackType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueK2Node_SwitchDialogueCallback, CallbackType), Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackType_MetaData), NewProp_CallbackType_MetaData) }; // 09f9f9807370ea4f033d51743f982d103ae9ff87
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialoguePinNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialoguePinNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDialogueK2Node_SwitchDialogueCallback Property Definitions ****************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UK2Node_Switch,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback;
UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_SwitchDialogueCallback;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_SwitchDialogueCallback"),
				Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_SwitchDialogueCallback);
UDialogueK2Node_SwitchDialogueCallback::~UDialogueK2Node_SwitchDialogueCallback() {}
// ********** End Class UDialogueK2Node_SwitchDialogueCallback *************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h__Script_DlgSystemEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystemEditor_EDlgDialogueCallback, TEXT("EDlgDialogueCallback"), &ZRIE_EDlgDialogueCallback, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 167377280U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback, TEXT("UDialogueK2Node_SwitchDialogueCallback"), &Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SwitchDialogueCallback), 3235008059U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallback_h__Script_DlgSystemEditor_4faf135226ed1a256aab88d26fc1f52e8a322fb6{
	TEXT("/Script/DlgSystemEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
