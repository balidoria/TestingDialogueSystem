// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgEventCustom.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgEventCustom() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustom(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustomHideCategories(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustom(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgEventCustomHideCategories(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDlgEventCustom Function EnterEvent **************************************
struct DlgEventCustom_eventEnterEvent_Parms
{
	UDlgContext* Context;
	UObject* Participant;
};
static FName NAME_UDlgEventCustom_EnterEvent = FName(TEXT("EnterEvent"));
void UDlgEventCustom::EnterEvent(UDlgContext* Context, UObject* Participant)
{
	UFunction* Func = FindFunctionChecked(NAME_UDlgEventCustom_EnterEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DlgEventCustom_eventEnterEvent_Parms Parms;
		Parms.Context=Context;
		Parms.Participant=Participant;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		EnterEvent_Implementation(Context, Participant);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgEventCustom_EnterEvent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Called when the event is triggered.\n" },
		{ "DisplayName", "Enter" },
		{ "ModuleRelativePath", "DlgEventCustom.h" },
		{ "ToolTip", "Called when the event is triggered." },
	};
#endif // WITH_METADATA

// ********** Begin Function EnterEvent constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnterEvent constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnterEvent Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgEventCustom_eventEnterEvent_Parms, Context), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgEventCustom_eventEnterEvent_Parms, Participant), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnterEvent Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgEventCustom, nullptr, "EnterEvent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgEventCustom_eventEnterEvent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgEventCustom_eventEnterEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgEventCustom_EnterEvent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgEventCustom::execEnterEvent)
{
	P_GET_OBJECT(UDlgContext,Z_Param_Context);
	P_GET_OBJECT(UObject,Z_Param_Participant);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterEvent_Implementation(Z_Param_Context,Z_Param_Participant);
	P_NATIVE_END;
}
// ********** End Class UDlgEventCustom Function EnterEvent ****************************************

// ********** Begin Class UDlgEventCustom Function GetEditorDisplayString **************************
struct DlgEventCustom_eventGetEditorDisplayString_Parms
{
	UDlgDialogue* OwnerDialogue;
	FName ParticipantName;
	FString ReturnValue;
};
static FName NAME_UDlgEventCustom_GetEditorDisplayString = FName(TEXT("GetEditorDisplayString"));
FString UDlgEventCustom::GetEditorDisplayString(UDlgDialogue* OwnerDialogue, FName ParticipantName)
{
	UFunction* Func = FindFunctionChecked(NAME_UDlgEventCustom_GetEditorDisplayString);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DlgEventCustom_eventGetEditorDisplayString_Parms Parms;
		Parms.OwnerDialogue=OwnerDialogue;
		Parms.ParticipantName=ParticipantName;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetEditorDisplayString_Implementation(OwnerDialogue, ParticipantName);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Display text for editor graph node\n" },
		{ "ModuleRelativePath", "DlgEventCustom.h" },
		{ "ToolTip", "Display text for editor graph node" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEditorDisplayString constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerDialogue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEditorDisplayString constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEditorDisplayString Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerDialogue = { "OwnerDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgEventCustom_eventGetEditorDisplayString_Parms, OwnerDialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgEventCustom_eventGetEditorDisplayString_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(DlgEventCustom_eventGetEditorDisplayString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerDialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEditorDisplayString Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgEventCustom, nullptr, "GetEditorDisplayString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgEventCustom_eventGetEditorDisplayString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgEventCustom_eventGetEditorDisplayString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgEventCustom::execGetEditorDisplayString)
{
	P_GET_OBJECT(UDlgDialogue,Z_Param_OwnerDialogue);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetEditorDisplayString_Implementation(Z_Param_OwnerDialogue,Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgEventCustom Function GetEditorDisplayString ****************************

// ********** Begin Class UDlgEventCustom **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgEventCustom_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for a custom event\n// Extend this class to define additional data you want to store\n//\n// 1. Override EnterEvent\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgEventCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgEventCustom.h" },
		{ "ToolTip", "Abstract base class for a custom event\nExtend this class to define additional data you want to store\n\n1. Override EnterEvent" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgEventCustom constinit property declarations **************************
// ********** End Class UDlgEventCustom constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnterEvent"), .Pointer = &UDlgEventCustom::execEnterEvent },
		{ .NameUTF8 = UTF8TEXT("GetEditorDisplayString"), .Pointer = &UDlgEventCustom::execGetEditorDisplayString },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgEventCustom_EnterEvent, "EnterEvent" }, // 00b2e62c0f023571999b18ae82d8c0cb63ddfb42
		{ &Z_Construct_UFunction_UDlgEventCustom_GetEditorDisplayString, "GetEditorDisplayString" }, // 64214c3999fe8a6090a948cd3e3e02a802fb17e9
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgEventCustom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgEventCustom,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDlgEventCustom_StaticRegisterNativesUDlgEventCustom()
{
	UClass* Class = UDlgEventCustom::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgEventCustom;
UClass* Z_Construct_UClass_UDlgEventCustom(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgEventCustom;
		if (!Z_Registration_Info_UClass_UDlgEventCustom.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgEventCustom"),
				Z_Registration_Info_UClass_UDlgEventCustom.InnerSingleton,
				UDlgEventCustom_StaticRegisterNativesUDlgEventCustom,
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
		return Z_Registration_Info_UClass_UDlgEventCustom.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgEventCustom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgEventCustom.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgEventCustom.OuterSingleton;
}
#undef UHT_STATICS
UDlgEventCustom::UDlgEventCustom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgEventCustom);
UDlgEventCustom::~UDlgEventCustom() {}
// ********** End Class UDlgEventCustom ************************************************************

// ********** Begin Class UDlgEventCustomHideCategories ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgEventCustomHideCategories_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgEventCustom but it does NOT show the categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgEventCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgEventCustom.h" },
		{ "ToolTip", "This is the same as UDlgEventCustom but it does NOT show the categories" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgEventCustomHideCategories constinit property declarations ************
// ********** End Class UDlgEventCustomHideCategories constinit property declarations **************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgEventCustomHideCategories>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgEventCustom,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgEventCustomHideCategories,
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
	0x001030A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgEventCustomHideCategories;
UClass* Z_Construct_UClass_UDlgEventCustomHideCategories(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgEventCustomHideCategories;
		if (!Z_Registration_Info_UClass_UDlgEventCustomHideCategories.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgEventCustomHideCategories"),
				Z_Registration_Info_UClass_UDlgEventCustomHideCategories.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgEventCustomHideCategories.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgEventCustomHideCategories.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgEventCustomHideCategories.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgEventCustomHideCategories.OuterSingleton;
}
#undef UHT_STATICS
UDlgEventCustomHideCategories::UDlgEventCustomHideCategories(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgEventCustomHideCategories);
UDlgEventCustomHideCategories::~UDlgEventCustomHideCategories() {}
// ********** End Class UDlgEventCustomHideCategories **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgEventCustom_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgEventCustom, TEXT("UDlgEventCustom"), &Z_Registration_Info_UClass_UDlgEventCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgEventCustom), 3706916569U) },
		{ Z_Construct_UClass_UDlgEventCustomHideCategories, TEXT("UDlgEventCustomHideCategories"), &Z_Registration_Info_UClass_UDlgEventCustomHideCategories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgEventCustomHideCategories), 2977502264U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgEventCustom_h__Script_DlgSystem_93880b1de72b40abc12a039ed0098bfdc2f0cbe7{
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
