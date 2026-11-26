// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgTextArgumentCustom.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgTextArgumentCustom() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgObject(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustom(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgContext(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustom(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDlgTextArgumentCustom Function GetText **********************************
struct DlgTextArgumentCustom_eventGetText_Parms
{
	const UDlgContext* Context;
	const UObject* Participant;
	FString DisplayStringParam;
	FText ReturnValue;
};
static FName NAME_UDlgTextArgumentCustom_GetText = FName(TEXT("GetText"));
FText UDlgTextArgumentCustom::GetText(const UDlgContext* Context, const UObject* Participant, const FString& DisplayStringParam)
{
	UFunction* Func = FindFunctionChecked(NAME_UDlgTextArgumentCustom_GetText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DlgTextArgumentCustom_eventGetText_Parms Parms;
		Parms.Context=Context;
		Parms.Participant=Participant;
		Parms.DisplayStringParam=DisplayStringParam;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetText_Implementation(Context, Participant, DisplayStringParam);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgTextArgumentCustom_GetText_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DlgTextArgumentCustom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participant_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayStringParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetText constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Participant;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayStringParam;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetText constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetText Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, Context), Z_Construct_UClass_UDlgContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, Participant), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participant_MetaData), NewProp_Participant_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DisplayStringParam = { "DisplayStringParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, DisplayStringParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayStringParam_MetaData), NewProp_DisplayStringParam_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(DlgTextArgumentCustom_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Participant,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DisplayStringParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetText Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgTextArgumentCustom, nullptr, "GetText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DlgTextArgumentCustom_eventGetText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DlgTextArgumentCustom_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgTextArgumentCustom_GetText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgTextArgumentCustom::execGetText)
{
	P_GET_OBJECT(UDlgContext,Z_Param_Context);
	P_GET_OBJECT(UObject,Z_Param_Participant);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayStringParam);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetText_Implementation(Z_Param_Context,Z_Param_Participant,Z_Param_DisplayStringParam);
	P_NATIVE_END;
}
// ********** End Class UDlgTextArgumentCustom Function GetText ************************************

// ********** Begin Class UDlgTextArgumentCustom ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgTextArgumentCustom_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Abstract base class for a custom text argument\n// Extend this class to define additional data you want to store\n//\n// 1. Override GetText\n// 2. Return the new Text for the specified text argument\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgTextArgumentCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgTextArgumentCustom.h" },
		{ "ToolTip", "Abstract base class for a custom text argument\nExtend this class to define additional data you want to store\n\n1. Override GetText\n2. Return the new Text for the specified text argument" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgTextArgumentCustom constinit property declarations *******************
// ********** End Class UDlgTextArgumentCustom constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetText"), .Pointer = &UDlgTextArgumentCustom::execGetText },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgTextArgumentCustom_GetText, "GetText" }, // 45f4b74a45a69adf5ba3cd0513e17c2d76436c5b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTextArgumentCustom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgTextArgumentCustom,
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
static void UDlgTextArgumentCustom_StaticRegisterNativesUDlgTextArgumentCustom()
{
	UClass* Class = UDlgTextArgumentCustom::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgTextArgumentCustom;
UClass* Z_Construct_UClass_UDlgTextArgumentCustom(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgTextArgumentCustom;
		if (!Z_Registration_Info_UClass_UDlgTextArgumentCustom.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgTextArgumentCustom"),
				Z_Registration_Info_UClass_UDlgTextArgumentCustom.InnerSingleton,
				UDlgTextArgumentCustom_StaticRegisterNativesUDlgTextArgumentCustom,
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
		return Z_Registration_Info_UClass_UDlgTextArgumentCustom.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgTextArgumentCustom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTextArgumentCustom.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgTextArgumentCustom.OuterSingleton;
}
#undef UHT_STATICS
UDlgTextArgumentCustom::UDlgTextArgumentCustom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgTextArgumentCustom);
UDlgTextArgumentCustom::~UDlgTextArgumentCustom() {}
// ********** End Class UDlgTextArgumentCustom *****************************************************

// ********** Begin Class UDlgTextArgumentCustomHideCategories *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgTextArgumentCustomHideCategories_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This is the same as UDlgTextArgumentCustom but it does NOT show the categories\n" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "DlgTextArgumentCustom.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgTextArgumentCustom.h" },
		{ "ToolTip", "This is the same as UDlgTextArgumentCustom but it does NOT show the categories" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgTextArgumentCustomHideCategories constinit property declarations *****
// ********** End Class UDlgTextArgumentCustomHideCategories constinit property declarations *******
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTextArgumentCustomHideCategories>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgTextArgumentCustom,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgTextArgumentCustomHideCategories,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories;
UClass* Z_Construct_UClass_UDlgTextArgumentCustomHideCategories(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgTextArgumentCustomHideCategories;
		if (!Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgTextArgumentCustomHideCategories"),
				Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories.OuterSingleton;
}
#undef UHT_STATICS
UDlgTextArgumentCustomHideCategories::UDlgTextArgumentCustomHideCategories(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgTextArgumentCustomHideCategories);
UDlgTextArgumentCustomHideCategories::~UDlgTextArgumentCustomHideCategories() {}
// ********** End Class UDlgTextArgumentCustomHideCategories ***************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgTextArgumentCustom_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgTextArgumentCustom, TEXT("UDlgTextArgumentCustom"), &Z_Registration_Info_UClass_UDlgTextArgumentCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTextArgumentCustom), 3193656709U) },
		{ Z_Construct_UClass_UDlgTextArgumentCustomHideCategories, TEXT("UDlgTextArgumentCustomHideCategories"), &Z_Registration_Info_UClass_UDlgTextArgumentCustomHideCategories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTextArgumentCustomHideCategories), 3524238578U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgTextArgumentCustom_h__Script_DlgSystem_bfc1627e6992bf1986de9a38c49d7fb2ff13616f{
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
