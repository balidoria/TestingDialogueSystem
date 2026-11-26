// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgConditionCustom.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgConditionCustom() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustom(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustom(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgDialogue(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDlgConditionCustom Function GetEditorDisplayString **********************
struct DlgConditionCustom_eventGetEditorDisplayString_Parms
{
	UDlgDialogue* OwnerDialogue;
	FName ParticipantName;
	FString ReturnValue;
};
static FName NAME_UDlgConditionCustom_GetEditorDisplayString = FName(TEXT("GetEditorDisplayString"));
FString UDlgConditionCustom::GetEditorDisplayString(UDlgDialogue* OwnerDialogue, FName ParticipantName)
{
	UFunction* Func = FindFunctionChecked(NAME_UDlgConditionCustom_GetEditorDisplayString);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DlgConditionCustom_eventGetEditorDisplayString_Parms Parms;
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
#define UHT_STATICS Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Display text for editor graph node\n" },
		{ "ModuleRelativePath", "DlgConditionCustom.h" },
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwnerDialogue = { "OwnerDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgConditionCustom_eventGetEditorDisplayString_Parms, OwnerDialogue), Z_Construct_UClass_UDlgDialogue, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(DlgConditionCustom_eventGetEditorDisplayString_Parms, ParticipantName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(DlgConditionCustom_eventGetEditorDisplayString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwnerDialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEditorDisplayString Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgConditionCustom, nullptr, "GetEditorDisplayString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgConditionCustom_eventGetEditorDisplayString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgConditionCustom_eventGetEditorDisplayString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgConditionCustom::execGetEditorDisplayString)
{
	P_GET_OBJECT(UDlgDialogue,Z_Param_OwnerDialogue);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParticipantName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetEditorDisplayString_Implementation(Z_Param_OwnerDialogue,Z_Param_ParticipantName);
	P_NATIVE_END;
}
// ********** End Class UDlgConditionCustom Function GetEditorDisplayString ************************

// ********** Begin Class UDlgConditionCustom Function IsConditionMet ******************************
struct DlgConditionCustom_eventIsConditionMet_Parms
{
	const UDlgContext* Context;
	const UObject* Participant;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DlgConditionCustom_eventIsConditionMet_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UDlgConditionCustom_IsConditionMet = FName(TEXT("IsConditionMet"));
bool UDlgConditionCustom::IsConditionMet(const UDlgContext* Context, const UObject* Participant)
{
	UFunction* Func = FindFunctionChecked(NAME_UDlgConditionCustom_IsConditionMet);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DlgConditionCustom_eventIsConditionMet_Parms Parms;
		Parms.Context=Context;
		Parms.Participant=Participant;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return IsConditionMet_Implementation(Context, Participant);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Checks if the condition is met\n" },
		{ "ModuleRelativePath", "DlgConditionCustom.h" },
		{ "ToolTip", "Checks if the condition is met" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsConditionMet constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgConditionCustom_eventIsConditionMet_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsConditionMet constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsConditionMet Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgConditionCustom_eventIsConditionMet_Parms, Context), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgConditionCustom_eventIsConditionMet_Parms, Participant), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participant_MetaData), NewProp_Participant_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgConditionCustom_eventIsConditionMet_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsConditionMet Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgConditionCustom, nullptr, "IsConditionMet", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgConditionCustom_eventIsConditionMet_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgConditionCustom_eventIsConditionMet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgConditionCustom::execIsConditionMet)
{
	P_GET_OBJECT(UDlgContext,Z_Param_Context);
	P_GET_OBJECT(UObject,Z_Param_Participant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConditionMet_Implementation(Z_Param_Context,Z_Param_Participant);
	P_NATIVE_END;
}
// ********** End Class UDlgConditionCustom Function IsConditionMet ********************************

// ********** Begin Class UDlgConditionCustom ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgConditionCustom_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for a custom condition\n// Extend this class to define additional data you want to store\n//\n// 1. Override IsConditionMet\n// 2. Return true if you want the condition to succeed or false otherwise\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgConditionCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgConditionCustom.h" },
		{ "ToolTip", "Abstract base class for a custom condition\nExtend this class to define additional data you want to store\n\n1. Override IsConditionMet\n2. Return true if you want the condition to succeed or false otherwise" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgConditionCustom constinit property declarations **********************
// ********** End Class UDlgConditionCustom constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetEditorDisplayString"), .Pointer = &UDlgConditionCustom::execGetEditorDisplayString },
		{ .NameUTF8 = UTF8TEXT("IsConditionMet"), .Pointer = &UDlgConditionCustom::execIsConditionMet },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgConditionCustom_GetEditorDisplayString, "GetEditorDisplayString" }, // 7005223de784c71e545bbd6e05c85923316e1667
		{ &Z_Construct_UFunction_UDlgConditionCustom_IsConditionMet, "IsConditionMet" }, // 5640959f3264e00a5783579018977aae8df1fa02
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgConditionCustom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgConditionCustom,
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
static void UDlgConditionCustom_StaticRegisterNativesUDlgConditionCustom()
{
	UClass* Class = UDlgConditionCustom::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgConditionCustom;
UClass* Z_Construct_UClass_UDlgConditionCustom(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgConditionCustom;
		if (!Z_Registration_Info_UClass_UDlgConditionCustom.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgConditionCustom"),
				Z_Registration_Info_UClass_UDlgConditionCustom.InnerSingleton,
				UDlgConditionCustom_StaticRegisterNativesUDlgConditionCustom,
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
		return Z_Registration_Info_UClass_UDlgConditionCustom.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgConditionCustom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgConditionCustom.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgConditionCustom.OuterSingleton;
}
#undef UHT_STATICS
UDlgConditionCustom::UDlgConditionCustom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgConditionCustom);
UDlgConditionCustom::~UDlgConditionCustom() {}
// ********** End Class UDlgConditionCustom ********************************************************

// ********** Begin Class UDlgConditionCustomHideCategories ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgConditionCustomHideCategories_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgConditionCustom but it does NOT show the categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgConditionCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgConditionCustom.h" },
		{ "ToolTip", "This is the same as UDlgConditionCustom but it does NOT show the categories" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgConditionCustomHideCategories constinit property declarations ********
// ********** End Class UDlgConditionCustomHideCategories constinit property declarations **********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgConditionCustomHideCategories>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgConditionCustom,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgConditionCustomHideCategories,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgConditionCustomHideCategories;
UClass* Z_Construct_UClass_UDlgConditionCustomHideCategories(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgConditionCustomHideCategories;
		if (!Z_Registration_Info_UClass_UDlgConditionCustomHideCategories.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgConditionCustomHideCategories"),
				Z_Registration_Info_UClass_UDlgConditionCustomHideCategories.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgConditionCustomHideCategories.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgConditionCustomHideCategories.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgConditionCustomHideCategories.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgConditionCustomHideCategories.OuterSingleton;
}
#undef UHT_STATICS
UDlgConditionCustomHideCategories::UDlgConditionCustomHideCategories(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgConditionCustomHideCategories);
UDlgConditionCustomHideCategories::~UDlgConditionCustomHideCategories() {}
// ********** End Class UDlgConditionCustomHideCategories ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgConditionCustom_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgConditionCustom, TEXT("UDlgConditionCustom"), &Z_Registration_Info_UClass_UDlgConditionCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgConditionCustom), 55422089U) },
		{ Z_Construct_UClass_UDlgConditionCustomHideCategories, TEXT("UDlgConditionCustomHideCategories"), &Z_Registration_Info_UClass_UDlgConditionCustomHideCategories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgConditionCustomHideCategories), 3838322402U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgConditionCustom_h__Script_DlgSystem_e8e17a8846af40b150d5900b7416ac24a5331a7b{
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
