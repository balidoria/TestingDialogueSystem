// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_SwitchDialogueCallbackVariants() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackEvent ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n *   Subclasses for quicker access in blueprint\n *\x09 They just set and hide the type enum property of the parent\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Subclasses for quicker access in blueprint\n   They just set and hide the type enum property of the parent" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackEvent constinit property declarations 
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackEvent constinit property declarations 
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent;
UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_SwitchDialogueCallbackEvent;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_SwitchDialogueCallbackEvent"),
				Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_SwitchDialogueCallbackEvent);
UDialogueK2Node_SwitchDialogueCallbackEvent::~UDialogueK2Node_SwitchDialogueCallbackEvent() {}
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackEvent ********************************

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackCondition **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackCondition constinit property declarations 
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackCondition constinit property declarations 
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition;
UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_SwitchDialogueCallbackCondition;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_SwitchDialogueCallbackCondition"),
				Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_SwitchDialogueCallbackCondition);
UDialogueK2Node_SwitchDialogueCallbackCondition::~UDialogueK2Node_SwitchDialogueCallbackCondition() {}
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackCondition ****************************

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackFloatValue *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackFloatValue constinit property declarations 
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackFloatValue constinit property declarations 
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackFloatValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue;
UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_SwitchDialogueCallbackFloatValue;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_SwitchDialogueCallbackFloatValue"),
				Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_SwitchDialogueCallbackFloatValue);
UDialogueK2Node_SwitchDialogueCallbackFloatValue::~UDialogueK2Node_SwitchDialogueCallbackFloatValue() {}
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackFloatValue ***************************

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackIntValue ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackIntValue constinit property declarations 
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackIntValue constinit property declarations 
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackIntValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue;
UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_SwitchDialogueCallbackIntValue;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_SwitchDialogueCallbackIntValue"),
				Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_SwitchDialogueCallbackIntValue);
UDialogueK2Node_SwitchDialogueCallbackIntValue::~UDialogueK2Node_SwitchDialogueCallbackIntValue() {}
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackIntValue *****************************

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackBoolValue **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackBoolValue constinit property declarations 
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackBoolValue constinit property declarations 
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackBoolValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue;
UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_SwitchDialogueCallbackBoolValue;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_SwitchDialogueCallbackBoolValue"),
				Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_SwitchDialogueCallbackBoolValue);
UDialogueK2Node_SwitchDialogueCallbackBoolValue::~UDialogueK2Node_SwitchDialogueCallbackBoolValue() {}
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackBoolValue ****************************

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackNameValue **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_SwitchDialogueCallbackVariants.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_SwitchDialogueCallbackNameValue constinit property declarations 
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackNameValue constinit property declarations 
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SwitchDialogueCallbackNameValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue;
UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_SwitchDialogueCallbackNameValue;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_SwitchDialogueCallbackNameValue"),
				Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_SwitchDialogueCallbackNameValue);
UDialogueK2Node_SwitchDialogueCallbackNameValue::~UDialogueK2Node_SwitchDialogueCallbackNameValue() {}
// ********** End Class UDialogueK2Node_SwitchDialogueCallbackNameValue ****************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallbackVariants_h__Script_DlgSystemEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent, TEXT("UDialogueK2Node_SwitchDialogueCallbackEvent"), &Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SwitchDialogueCallbackEvent), 1404251235U) },
		{ Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition, TEXT("UDialogueK2Node_SwitchDialogueCallbackCondition"), &Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SwitchDialogueCallbackCondition), 1349145294U) },
		{ Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue, TEXT("UDialogueK2Node_SwitchDialogueCallbackFloatValue"), &Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SwitchDialogueCallbackFloatValue), 2061943129U) },
		{ Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue, TEXT("UDialogueK2Node_SwitchDialogueCallbackIntValue"), &Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SwitchDialogueCallbackIntValue), 4053705679U) },
		{ Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue, TEXT("UDialogueK2Node_SwitchDialogueCallbackBoolValue"), &Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SwitchDialogueCallbackBoolValue), 2402041518U) },
		{ Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue, TEXT("UDialogueK2Node_SwitchDialogueCallbackNameValue"), &Z_Registration_Info_UClass_UDialogueK2Node_SwitchDialogueCallbackNameValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SwitchDialogueCallbackNameValue), 986374649U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_SwitchDialogueCallbackVariants_h__Script_DlgSystemEditor_f397ae9b9d5ff0ebd5068563867c8c72056f2b75{
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
