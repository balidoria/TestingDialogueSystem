// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_Selector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgNode_Selector() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Selector(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Selector(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EDlgNodeSelectorType ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgNodeSelectorType>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "First.Comment", "// As soon as it is entered it selects its first satisfied child.\n" },
		{ "First.DisplayName", "First" },
		{ "First.Name", "EDlgNodeSelectorType::First" },
		{ "First.ToolTip", "As soon as it is entered it selects its first satisfied child." },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "Random.Comment", "// As soon as it is entered it selects a satisfied child randomly.\n" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "EDlgNodeSelectorType::Random" },
		{ "Random.ToolTip", "As soon as it is entered it selects a satisfied child randomly." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgNodeSelectorType::First", (int64)EDlgNodeSelectorType::First },
		{ "EDlgNodeSelectorType::Random", (int64)EDlgNodeSelectorType::Random },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgNodeSelectorType",
	"EDlgNodeSelectorType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgNodeSelectorType;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgNodeSelectorType.OuterSingleton)
		{
			ZRIE_EDlgNodeSelectorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgNodeSelectorType"));
		}
		return ZRIE_EDlgNodeSelectorType.OuterSingleton;
	}
	if (!ZRIE_EDlgNodeSelectorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgNodeSelectorType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgNodeSelectorType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgNodeSelectorType ********************************************************

// ********** Begin Class UDlgNode_Selector Function GetSelectorType *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics
struct UHT_STATICS
{
	struct DlgNode_Selector_eventGetSelectorType_Parms
	{
		EDlgNodeSelectorType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the Selector Type\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Gets the Selector Type" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSelectorType constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSelectorType constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSelectorType Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DlgNode_Selector_eventGetSelectorType_Parms, ReturnValue), Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType, METADATA_PARAMS(0, nullptr) }; // 718c9a7ae02a819c5e0e667c8f9fdbbb61041266
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSelectorType Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode_Selector, nullptr, "GetSelectorType", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_Selector_eventGetSelectorType_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_Selector_eventGetSelectorType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode_Selector::execGetSelectorType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDlgNodeSelectorType*)Z_Param__Result=P_THIS->GetSelectorType();
	P_NATIVE_END;
}
// ********** End Class UDlgNode_Selector Function GetSelectorType *********************************

// ********** Begin Class UDlgNode_Selector ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgNode_Selector_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Node without text. Selector of child depends on the type.\n * It should have at least one (satisfied child), HandleNodeEnter returns false and the Dialogue is terminated otherwise.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Selector.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Node without text. Selector of child depends on the type.\nIt should have at least one (satisfied child), HandleNodeEnter returns false and the Dialogue is terminated otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorType_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Defines the type of selector this node represents\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Defines the type of selector this node represents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Modifies the way EDlgNodeSelectorType::Random works.\n// Ensures that an option is not picked twice before any other option is,\n// unless it is not possible because of the node setup/conditions\n" },
		{ "EditCondition", "SelectorType == EDlgNodeSelectorType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Modifies the way EDlgNodeSelectorType::Random works.\nEnsures that an option is not picked twice before any other option is,\nunless it is not possible because of the node setup/conditions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Only after each satisfied option is picked once can an option be picked again\n// Still allows repetition if bAvoidPickingSameOptionTwiceInARow is not set to true,\n// e.g. for options {A, B, C} A-B-C-C-A-B-B... is a valid series of choices\n" },
		{ "EditCondition", "SelectorType == EDlgNodeSelectorType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Only after each satisfied option is picked once can an option be picked again\nStill allows repetition if bAvoidPickingSameOptionTwiceInARow is not set to true,\ne.g. for options {A, B, C} A-B-C-C-A-B-B... is a valid series of choices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicDisplayText_MetaData[] = {
		{ "ModuleRelativePath", "Nodes/DlgNode_Selector.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgNode_Selector constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectorType;
	static void NewProp_bAvoidPickingSameOptionTwiceInARow_SetBit(void* Obj)
	{
		((UDlgNode_Selector*)Obj)->bAvoidPickingSameOptionTwiceInARow = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidPickingSameOptionTwiceInARow;
	static void NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_SetBit(void* Obj)
	{
		((UDlgNode_Selector*)Obj)->bCycleThroughSatisfiedOptionsWithoutRepetition = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DynamicDisplayText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgNode_Selector constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSelectorType"), .Pointer = &UDlgNode_Selector::execGetSelectorType },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType, "GetSelectorType" }, // 41e2d4fda21f2d6dec19378096c58a86edba60f8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Selector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgNode_Selector Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SelectorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SelectorType = { "SelectorType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_Selector, SelectorType), Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorType_MetaData), NewProp_SelectorType_MetaData) }; // 718c9a7ae02a819c5e0e667c8f9fdbbb61041266
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAvoidPickingSameOptionTwiceInARow = { "bAvoidPickingSameOptionTwiceInARow", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgNode_Selector), &UHT_STATICS::NewProp_bAvoidPickingSameOptionTwiceInARow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData), NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition = { "bCycleThroughSatisfiedOptionsWithoutRepetition", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgNode_Selector), &UHT_STATICS::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData), NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_DynamicDisplayText = { "DynamicDisplayText", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_Selector, DynamicDisplayText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicDisplayText_MetaData), NewProp_DynamicDisplayText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAvoidPickingSameOptionTwiceInARow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynamicDisplayText,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgNode_Selector Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgNode,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgNode_Selector,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDlgNode_Selector_StaticRegisterNativesUDlgNode_Selector()
{
	UClass* Class = UDlgNode_Selector::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgNode_Selector;
UClass* Z_Construct_UClass_UDlgNode_Selector(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgNode_Selector;
		if (!Z_Registration_Info_UClass_UDlgNode_Selector.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgNode_Selector"),
				Z_Registration_Info_UClass_UDlgNode_Selector.InnerSingleton,
				UDlgNode_Selector_StaticRegisterNativesUDlgNode_Selector,
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
		return Z_Registration_Info_UClass_UDlgNode_Selector.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgNode_Selector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_Selector.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgNode_Selector.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgNode_Selector);
UDlgNode_Selector::~UDlgNode_Selector() {}
// ********** End Class UDlgNode_Selector **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_Selector_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType, TEXT("EDlgNodeSelectorType"), &ZRIE_EDlgNodeSelectorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1905039994U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_Selector, TEXT("UDlgNode_Selector"), &Z_Registration_Info_UClass_UDlgNode_Selector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_Selector), 1481855383U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_Selector_h__Script_DlgSystem_9c2da81cd9bbf1bd3f9a1eef6f95a9e39085f9c5{
	TEXT("/Script/DlgSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
