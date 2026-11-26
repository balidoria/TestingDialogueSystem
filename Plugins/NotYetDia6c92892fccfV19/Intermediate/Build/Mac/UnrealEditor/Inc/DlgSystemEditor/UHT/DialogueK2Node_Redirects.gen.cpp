// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/BlueprintNodes/DialogueK2Node_Redirects.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_Redirects() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_Select(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_Select(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_Select(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDlgK2Node_Select ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgK2Node_Select_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Selects\n" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ToolTip", "Selects" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgK2Node_Select constinit property declarations ************************
// ********** End Class UDlgK2Node_Select constinit property declarations **************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_Select>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_Select,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgK2Node_Select,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgK2Node_Select;
UClass* Z_Construct_UClass_UDlgK2Node_Select(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgK2Node_Select;
		if (!Z_Registration_Info_UClass_UDlgK2Node_Select.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgK2Node_Select"),
				Z_Registration_Info_UClass_UDlgK2Node_Select.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgK2Node_Select.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgK2Node_Select.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_Select.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgK2Node_Select.OuterSingleton;
}
#undef UHT_STATICS
UDlgK2Node_Select::UDlgK2Node_Select(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgK2Node_Select);
UDlgK2Node_Select::~UDlgK2Node_Select() {}
// ********** End Class UDlgK2Node_Select **********************************************************

// ********** Begin Class UDlgK2Node_SelectFloat ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgK2Node_SelectFloat_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgK2Node_SelectFloat constinit property declarations *******************
// ********** End Class UDlgK2Node_SelectFloat constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SelectFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SelectFloat,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgK2Node_SelectFloat,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgK2Node_SelectFloat;
UClass* Z_Construct_UClass_UDlgK2Node_SelectFloat(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgK2Node_SelectFloat;
		if (!Z_Registration_Info_UClass_UDlgK2Node_SelectFloat.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgK2Node_SelectFloat"),
				Z_Registration_Info_UClass_UDlgK2Node_SelectFloat.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgK2Node_SelectFloat.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgK2Node_SelectFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SelectFloat.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgK2Node_SelectFloat.OuterSingleton;
}
#undef UHT_STATICS
UDlgK2Node_SelectFloat::UDlgK2Node_SelectFloat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgK2Node_SelectFloat);
UDlgK2Node_SelectFloat::~UDlgK2Node_SelectFloat() {}
// ********** End Class UDlgK2Node_SelectFloat *****************************************************

// ********** Begin Class UDlgK2Node_SwitchDialogueCallback ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Switches\n" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ToolTip", "Switches" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgK2Node_SwitchDialogueCallback constinit property declarations ********
// ********** End Class UDlgK2Node_SwitchDialogueCallback constinit property declarations **********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallback,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback;
UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgK2Node_SwitchDialogueCallback;
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgK2Node_SwitchDialogueCallback"),
				Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback.OuterSingleton;
}
#undef UHT_STATICS
UDlgK2Node_SwitchDialogueCallback::UDlgK2Node_SwitchDialogueCallback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgK2Node_SwitchDialogueCallback);
UDlgK2Node_SwitchDialogueCallback::~UDlgK2Node_SwitchDialogueCallback() {}
// ********** End Class UDlgK2Node_SwitchDialogueCallback ******************************************

// ********** Begin Class UDlgK2Node_SwitchDialogueCallbackEvent ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgK2Node_SwitchDialogueCallbackEvent constinit property declarations ***
// ********** End Class UDlgK2Node_SwitchDialogueCallbackEvent constinit property declarations *****
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackEvent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent;
UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgK2Node_SwitchDialogueCallbackEvent;
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgK2Node_SwitchDialogueCallbackEvent"),
				Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent.OuterSingleton;
}
#undef UHT_STATICS
UDlgK2Node_SwitchDialogueCallbackEvent::UDlgK2Node_SwitchDialogueCallbackEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgK2Node_SwitchDialogueCallbackEvent);
UDlgK2Node_SwitchDialogueCallbackEvent::~UDlgK2Node_SwitchDialogueCallbackEvent() {}
// ********** End Class UDlgK2Node_SwitchDialogueCallbackEvent *************************************

// ********** Begin Class UDlgK2Node_SwitchDialogueCallbackCondition *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgK2Node_SwitchDialogueCallbackCondition constinit property declarations 
// ********** End Class UDlgK2Node_SwitchDialogueCallbackCondition constinit property declarations *
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackCondition,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition;
UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgK2Node_SwitchDialogueCallbackCondition;
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgK2Node_SwitchDialogueCallbackCondition"),
				Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition.OuterSingleton;
}
#undef UHT_STATICS
UDlgK2Node_SwitchDialogueCallbackCondition::UDlgK2Node_SwitchDialogueCallbackCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgK2Node_SwitchDialogueCallbackCondition);
UDlgK2Node_SwitchDialogueCallbackCondition::~UDlgK2Node_SwitchDialogueCallbackCondition() {}
// ********** End Class UDlgK2Node_SwitchDialogueCallbackCondition *********************************

// ********** Begin Class UDlgK2Node_SwitchDialogueCallbackFloatValue ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgK2Node_SwitchDialogueCallbackFloatValue constinit property declarations 
// ********** End Class UDlgK2Node_SwitchDialogueCallbackFloatValue constinit property declarations 
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackFloatValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackFloatValue,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue;
UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgK2Node_SwitchDialogueCallbackFloatValue;
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgK2Node_SwitchDialogueCallbackFloatValue"),
				Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue.OuterSingleton;
}
#undef UHT_STATICS
UDlgK2Node_SwitchDialogueCallbackFloatValue::UDlgK2Node_SwitchDialogueCallbackFloatValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgK2Node_SwitchDialogueCallbackFloatValue);
UDlgK2Node_SwitchDialogueCallbackFloatValue::~UDlgK2Node_SwitchDialogueCallbackFloatValue() {}
// ********** End Class UDlgK2Node_SwitchDialogueCallbackFloatValue ********************************

// ********** Begin Class UDlgK2Node_SwitchDialogueCallbackIntValue ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgK2Node_SwitchDialogueCallbackIntValue constinit property declarations 
// ********** End Class UDlgK2Node_SwitchDialogueCallbackIntValue constinit property declarations **
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackIntValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackIntValue,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue;
UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgK2Node_SwitchDialogueCallbackIntValue;
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgK2Node_SwitchDialogueCallbackIntValue"),
				Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue.OuterSingleton;
}
#undef UHT_STATICS
UDlgK2Node_SwitchDialogueCallbackIntValue::UDlgK2Node_SwitchDialogueCallbackIntValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgK2Node_SwitchDialogueCallbackIntValue);
UDlgK2Node_SwitchDialogueCallbackIntValue::~UDlgK2Node_SwitchDialogueCallbackIntValue() {}
// ********** End Class UDlgK2Node_SwitchDialogueCallbackIntValue **********************************

// ********** Begin Class UDlgK2Node_SwitchDialogueCallbackBoolValue *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Redirects.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgK2Node_SwitchDialogueCallbackBoolValue constinit property declarations 
// ********** End Class UDlgK2Node_SwitchDialogueCallbackBoolValue constinit property declarations *
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgK2Node_SwitchDialogueCallbackBoolValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_SwitchDialogueCallbackBoolValue,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue;
UClass* Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgK2Node_SwitchDialogueCallbackBoolValue;
		if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgK2Node_SwitchDialogueCallbackBoolValue"),
				Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue.OuterSingleton;
}
#undef UHT_STATICS
UDlgK2Node_SwitchDialogueCallbackBoolValue::UDlgK2Node_SwitchDialogueCallbackBoolValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgK2Node_SwitchDialogueCallbackBoolValue);
UDlgK2Node_SwitchDialogueCallbackBoolValue::~UDlgK2Node_SwitchDialogueCallbackBoolValue() {}
// ********** End Class UDlgK2Node_SwitchDialogueCallbackBoolValue *********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Redirects_h__Script_DlgSystemEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgK2Node_Select, TEXT("UDlgK2Node_Select"), &Z_Registration_Info_UClass_UDlgK2Node_Select, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_Select), 333623899U) },
		{ Z_Construct_UClass_UDlgK2Node_SelectFloat, TEXT("UDlgK2Node_SelectFloat"), &Z_Registration_Info_UClass_UDlgK2Node_SelectFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SelectFloat), 1977940258U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallback, TEXT("UDlgK2Node_SwitchDialogueCallback"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallback), 3956567682U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackEvent, TEXT("UDlgK2Node_SwitchDialogueCallbackEvent"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallbackEvent), 1019397733U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackCondition, TEXT("UDlgK2Node_SwitchDialogueCallbackCondition"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallbackCondition), 4330613U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue, TEXT("UDlgK2Node_SwitchDialogueCallbackFloatValue"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackFloatValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallbackFloatValue), 2160361304U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue, TEXT("UDlgK2Node_SwitchDialogueCallbackIntValue"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackIntValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallbackIntValue), 1640364875U) },
		{ Z_Construct_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue, TEXT("UDlgK2Node_SwitchDialogueCallbackBoolValue"), &Z_Registration_Info_UClass_UDlgK2Node_SwitchDialogueCallbackBoolValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgK2Node_SwitchDialogueCallbackBoolValue), 1418004809U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Redirects_h__Script_DlgSystemEditor_18a13e24f8ccf5690e53cc96b75d84a5e4e0f7f9{
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
