// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Tests/DlgIOTesterTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgIOTesterTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgIOTesterOptions(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestArrayComplex(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestArrayPrimitive(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestMapComplex(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestMapPrimitive(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitivesBase(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestSetComplex(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestSetPrimitive(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestStructComplex(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTestStructPrimitives(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgTestEnum(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitivesBase(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FDlgIOTesterOptions ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgIOTesterOptions>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgIOTesterOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsPureEnumContainer_MetaData[] = {
		{ "Comment", "// can Have TArray<Enum>, TSet<Enum>\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "can Have TArray<Enum>, TSet<Enum>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsNonPrimitiveInSet_MetaData[] = {
		{ "Comment", "// Can have TSet<FStructType>\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Can have TSet<FStructType>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsColorPrimitives_MetaData[] = {
		{ "Comment", "// Can we write FLinearColor and FColor\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Can we write FLinearColor and FColor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsDatePrimitive_MetaData[] = {
		{ "Comment", "// Can we write FDateTime\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Can we write FDateTime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsUObjectValueInMap_MetaData[] = {
		{ "Comment", "// Can we Have TMap<Key, UObject*> ?\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Can we Have TMap<Key, UObject*> ?" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgIOTesterOptions constinit property declarations ***************
	static void NewProp_bSupportsPureEnumContainer_SetBit(void* Obj)
	{
		((FDlgIOTesterOptions*)Obj)->bSupportsPureEnumContainer = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsPureEnumContainer;
	static void NewProp_bSupportsNonPrimitiveInSet_SetBit(void* Obj)
	{
		((FDlgIOTesterOptions*)Obj)->bSupportsNonPrimitiveInSet = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsNonPrimitiveInSet;
	static void NewProp_bSupportsColorPrimitives_SetBit(void* Obj)
	{
		((FDlgIOTesterOptions*)Obj)->bSupportsColorPrimitives = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsColorPrimitives;
	static void NewProp_bSupportsDatePrimitive_SetBit(void* Obj)
	{
		((FDlgIOTesterOptions*)Obj)->bSupportsDatePrimitive = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsDatePrimitive;
	static void NewProp_bSupportsUObjectValueInMap_SetBit(void* Obj)
	{
		((FDlgIOTesterOptions*)Obj)->bSupportsUObjectValueInMap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsUObjectValueInMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgIOTesterOptions constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgIOTesterOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgIOTesterOptions Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSupportsPureEnumContainer = { "bSupportsPureEnumContainer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgIOTesterOptions), &UHT_STATICS::NewProp_bSupportsPureEnumContainer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsPureEnumContainer_MetaData), NewProp_bSupportsPureEnumContainer_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSupportsNonPrimitiveInSet = { "bSupportsNonPrimitiveInSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgIOTesterOptions), &UHT_STATICS::NewProp_bSupportsNonPrimitiveInSet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsNonPrimitiveInSet_MetaData), NewProp_bSupportsNonPrimitiveInSet_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSupportsColorPrimitives = { "bSupportsColorPrimitives", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgIOTesterOptions), &UHT_STATICS::NewProp_bSupportsColorPrimitives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsColorPrimitives_MetaData), NewProp_bSupportsColorPrimitives_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSupportsDatePrimitive = { "bSupportsDatePrimitive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgIOTesterOptions), &UHT_STATICS::NewProp_bSupportsDatePrimitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsDatePrimitive_MetaData), NewProp_bSupportsDatePrimitive_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSupportsUObjectValueInMap = { "bSupportsUObjectValueInMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgIOTesterOptions), &UHT_STATICS::NewProp_bSupportsUObjectValueInMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsUObjectValueInMap_MetaData), NewProp_bSupportsUObjectValueInMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSupportsPureEnumContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSupportsNonPrimitiveInSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSupportsColorPrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSupportsDatePrimitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSupportsUObjectValueInMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgIOTesterOptions Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgIOTesterOptions",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgIOTesterOptions>(),
	alignof(FDlgIOTesterOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgIOTesterOptions;
UScriptStruct* Z_Construct_UScriptStruct_FDlgIOTesterOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgIOTesterOptions.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgIOTesterOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgIOTesterOptions, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgIOTesterOptions"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgIOTesterOptions.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgIOTesterOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgIOTesterOptions.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgIOTesterOptions.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgIOTesterOptions *************************************************

// ********** Begin Enum EDlgTestEnum **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgTestEnum_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgTestEnum>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgTestEnum(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "First.Name", "EDlgTestEnum::First" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "NumOf.Name", "EDlgTestEnum::NumOf" },
		{ "Second.Name", "EDlgTestEnum::Second" },
		{ "Third.Name", "EDlgTestEnum::Third" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgTestEnum::First", (int64)EDlgTestEnum::First },
		{ "EDlgTestEnum::Second", (int64)EDlgTestEnum::Second },
		{ "EDlgTestEnum::Third", (int64)EDlgTestEnum::Third },
		{ "EDlgTestEnum::NumOf", (int64)EDlgTestEnum::NumOf },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgTestEnum",
	"EDlgTestEnum",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgTestEnum;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgTestEnum(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgTestEnum.OuterSingleton)
		{
			ZRIE_EDlgTestEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgTestEnum, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgTestEnum"));
		}
		return ZRIE_EDlgTestEnum.OuterSingleton;
	}
	if (!ZRIE_EDlgTestEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgTestEnum.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgTestEnum.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgTestEnum ****************************************************************

// ********** Begin Class UDlgTestObjectPrimitivesBase *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgTestObjectPrimitivesBase_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Tests/DlgIOTesterTypes.h" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgTestObjectPrimitivesBase constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgTestObjectPrimitivesBase constinit property declarations ***************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTestObjectPrimitivesBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgTestObjectPrimitivesBase Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgTestObjectPrimitivesBase, Integer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Integer_MetaData), NewProp_Integer_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgTestObjectPrimitivesBase, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Integer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgTestObjectPrimitivesBase Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgTestObjectPrimitivesBase,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase;
UClass* Z_Construct_UClass_UDlgTestObjectPrimitivesBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgTestObjectPrimitivesBase;
		if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgTestObjectPrimitivesBase"),
				Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgTestObjectPrimitivesBase);
UDlgTestObjectPrimitivesBase::~UDlgTestObjectPrimitivesBase() {}
// ********** End Class UDlgTestObjectPrimitivesBase ***********************************************

// ********** Begin Class UDlgTestObjectPrimitives_DefaultToInstanced ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Tests/DlgIOTesterTypes.h" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedChild_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgTestObjectPrimitives_DefaultToInstanced constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstancedChild;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgTestObjectPrimitives_DefaultToInstanced constinit property declarations 
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTestObjectPrimitives_DefaultToInstanced>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgTestObjectPrimitives_DefaultToInstanced Property Definitions *********
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InstancedChild = { "InstancedChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgTestObjectPrimitives_DefaultToInstanced, InstancedChild), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedChild_MetaData), NewProp_InstancedChild_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstancedChild,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgTestObjectPrimitives_DefaultToInstanced Property Definitions ***********
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgTestObjectPrimitivesBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced,
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
	0x002000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced;
UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgTestObjectPrimitives_DefaultToInstanced;
		if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgTestObjectPrimitives_DefaultToInstanced"),
				Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgTestObjectPrimitives_DefaultToInstanced);
UDlgTestObjectPrimitives_DefaultToInstanced::~UDlgTestObjectPrimitives_DefaultToInstanced() {}
// ********** End Class UDlgTestObjectPrimitives_DefaultToInstanced ********************************

// ********** Begin Class UDlgTestObjectPrimitives_ChildA ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Tests/DlgIOTesterTypes.h" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgTestObjectPrimitives_ChildA constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerChildA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgTestObjectPrimitives_ChildA constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTestObjectPrimitives_ChildA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgTestObjectPrimitives_ChildA Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_IntegerChildA = { "IntegerChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgTestObjectPrimitives_ChildA, IntegerChildA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerChildA_MetaData), NewProp_IntegerChildA_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntegerChildA,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgTestObjectPrimitives_ChildA Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgTestObjectPrimitivesBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA;
UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgTestObjectPrimitives_ChildA;
		if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgTestObjectPrimitives_ChildA"),
				Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgTestObjectPrimitives_ChildA);
UDlgTestObjectPrimitives_ChildA::~UDlgTestObjectPrimitives_ChildA() {}
// ********** End Class UDlgTestObjectPrimitives_ChildA ********************************************

// ********** Begin Class UDlgTestObjectPrimitives_ChildB ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Tests/DlgIOTesterTypes.h" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringChildB_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgTestObjectPrimitives_ChildB constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringChildB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgTestObjectPrimitives_ChildB constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTestObjectPrimitives_ChildB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgTestObjectPrimitives_ChildB Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StringChildB = { "StringChildB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgTestObjectPrimitives_ChildB, StringChildB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringChildB_MetaData), NewProp_StringChildB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringChildB,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgTestObjectPrimitives_ChildB Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgTestObjectPrimitivesBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB;
UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgTestObjectPrimitives_ChildB;
		if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgTestObjectPrimitives_ChildB"),
				Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgTestObjectPrimitives_ChildB);
UDlgTestObjectPrimitives_ChildB::~UDlgTestObjectPrimitives_ChildB() {}
// ********** End Class UDlgTestObjectPrimitives_ChildB ********************************************

// ********** Begin Class UDlgTestObjectPrimitives_GrandChildA_Of_ChildA ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Tests/DlgIOTesterTypes.h" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerGrandChildA_Of_ChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgTestObjectPrimitives_GrandChildA_Of_ChildA constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerGrandChildA_Of_ChildA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgTestObjectPrimitives_GrandChildA_Of_ChildA constinit property declarations 
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgTestObjectPrimitives_GrandChildA_Of_ChildA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgTestObjectPrimitives_GrandChildA_Of_ChildA Property Definitions ******
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_IntegerGrandChildA_Of_ChildA = { "IntegerGrandChildA_Of_ChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgTestObjectPrimitives_GrandChildA_Of_ChildA, IntegerGrandChildA_Of_ChildA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerGrandChildA_Of_ChildA_MetaData), NewProp_IntegerGrandChildA_Of_ChildA_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntegerGrandChildA_Of_ChildA,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgTestObjectPrimitives_GrandChildA_Of_ChildA Property Definitions ********
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA;
UClass* Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgTestObjectPrimitives_GrandChildA_Of_ChildA;
		if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgTestObjectPrimitives_GrandChildA_Of_ChildA"),
				Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgTestObjectPrimitives_GrandChildA_Of_ChildA);
UDlgTestObjectPrimitives_GrandChildA_Of_ChildA::~UDlgTestObjectPrimitives_GrandChildA_Of_ChildA() {}
// ********** End Class UDlgTestObjectPrimitives_GrandChildA_Of_ChildA *****************************

// ********** Begin ScriptStruct FDlgTestStructPrimitives ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgTestStructPrimitives>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgTestStructPrimitives); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Struct of primitives\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Struct of primitives" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Integer32_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Integer64_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoolean_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyString_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearColor_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntPoint_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector3_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector2_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector4_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyObjectInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyObjectInitializedReference_MetaData[] = {
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstTexture2D_MetaData[] = {
		{ "Comment", "// Check if anything crashes\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Check if anything crashes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture2DReference_MetaData[] = {
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesBase_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDefaultToInstanced_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSwitch_MetaData[] = {
		{ "Comment", "// Can be nullptr or not\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Can be nullptr or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesPolymorphismChildA_MetaData[] = {
		{ "Comment", "// Object is defined as base but actually assigned to Child A\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Object is defined as base but actually assigned to Child A" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesPolymorphismChildB_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesGrandChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesPolymorphismChildGrandChildA_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgTestStructPrimitives constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Integer32;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Integer64;
	static void NewProp_bBoolean_SetBit(void* Obj)
	{
		((FDlgTestStructPrimitives*)Obj)->bBoolean = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolean;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Enum_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Enum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EmptyString;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GUID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyObjectInitialized;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyObjectInitializedReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstTexture2D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture2DReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectDefaultToInstanced;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesChildA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectSwitch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesPolymorphismChildA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesPolymorphismChildB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesGrandChildA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesPolymorphismChildGrandChildA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgTestStructPrimitives constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestStructPrimitives>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgTestStructPrimitives Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Integer32 = { "Integer32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Integer32), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Integer32_MetaData), NewProp_Integer32_MetaData) };
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_Integer64 = { "Integer64", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Integer64), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Integer64_MetaData), NewProp_Integer64_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBoolean = { "bBoolean", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgTestStructPrimitives), &UHT_STATICS::NewProp_bBoolean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoolean_MetaData), NewProp_bBoolean_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Enum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Enum), Z_Construct_UEnum_DlgSystem_EDlgTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) }; // d3642d740301710708654e6c9791ac67e6f606da
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_EmptyString = { "EmptyString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, EmptyString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyString_MetaData), NewProp_EmptyString_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LinearColor = { "LinearColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, LinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearColor_MetaData), NewProp_LinearColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DateTime_MetaData), NewProp_DateTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_IntPoint = { "IntPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, IntPoint), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntPoint_MetaData), NewProp_IntPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Vector3 = { "Vector3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Vector3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector3_MetaData), NewProp_Vector3_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Vector2 = { "Vector2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Vector2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector2_MetaData), NewProp_Vector2_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Vector4 = { "Vector4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Vector4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector4_MetaData), NewProp_Vector4_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotator_MetaData), NewProp_Rotator_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Matrix_MetaData), NewProp_Matrix_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GUID_MetaData), NewProp_GUID_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EmptyObjectInitialized = { "EmptyObjectInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, EmptyObjectInitialized), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyObjectInitialized_MetaData), NewProp_EmptyObjectInitialized_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EmptyObjectInitializedReference = { "EmptyObjectInitializedReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, EmptyObjectInitializedReference), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyObjectInitializedReference_MetaData), NewProp_EmptyObjectInitializedReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ConstTexture2D = { "ConstTexture2D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, ConstTexture2D), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstTexture2D_MetaData), NewProp_ConstTexture2D_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Texture2DReference = { "Texture2DReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, Texture2DReference), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture2DReference_MetaData), NewProp_Texture2DReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectPrimitivesBase = { "ObjectPrimitivesBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesBase), Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPrimitivesBase_MetaData), NewProp_ObjectPrimitivesBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectDefaultToInstanced = { "ObjectDefaultToInstanced", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectDefaultToInstanced), Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectDefaultToInstanced_MetaData), NewProp_ObjectDefaultToInstanced_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectPrimitivesChildA = { "ObjectPrimitivesChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesChildA), Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPrimitivesChildA_MetaData), NewProp_ObjectPrimitivesChildA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectSwitch = { "ObjectSwitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectSwitch), Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectSwitch_MetaData), NewProp_ObjectSwitch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectPrimitivesPolymorphismChildA = { "ObjectPrimitivesPolymorphismChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesPolymorphismChildA), Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPrimitivesPolymorphismChildA_MetaData), NewProp_ObjectPrimitivesPolymorphismChildA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectPrimitivesPolymorphismChildB = { "ObjectPrimitivesPolymorphismChildB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesPolymorphismChildB), Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPrimitivesPolymorphismChildB_MetaData), NewProp_ObjectPrimitivesPolymorphismChildB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectPrimitivesGrandChildA = { "ObjectPrimitivesGrandChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesGrandChildA), Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPrimitivesGrandChildA_MetaData), NewProp_ObjectPrimitivesGrandChildA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA = { "ObjectPrimitivesPolymorphismBaseGrandChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesPolymorphismBaseGrandChildA), Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA_MetaData), NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectPrimitivesPolymorphismChildGrandChildA = { "ObjectPrimitivesPolymorphismChildGrandChildA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructPrimitives, ObjectPrimitivesPolymorphismChildGrandChildA), Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPrimitivesPolymorphismChildGrandChildA_MetaData), NewProp_ObjectPrimitivesPolymorphismChildGrandChildA_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Integer32,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Integer64,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBoolean,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Enum_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Enum,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptyString,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LinearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DateTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Vector3,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Vector2,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Vector4,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Matrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptyObjectInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptyObjectInitializedReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConstTexture2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Texture2DReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectPrimitivesBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectDefaultToInstanced,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectPrimitivesChildA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectSwitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectPrimitivesPolymorphismChildA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectPrimitivesPolymorphismChildB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectPrimitivesGrandChildA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectPrimitivesPolymorphismBaseGrandChildA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectPrimitivesPolymorphismChildGrandChildA,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgTestStructPrimitives Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgTestStructPrimitives",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgTestStructPrimitives>(),
	alignof(FDlgTestStructPrimitives),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgTestStructPrimitives;
UScriptStruct* Z_Construct_UScriptStruct_FDlgTestStructPrimitives(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgTestStructPrimitives.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgTestStructPrimitives.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestStructPrimitives, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgTestStructPrimitives"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgTestStructPrimitives.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgTestStructPrimitives.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgTestStructPrimitives.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgTestStructPrimitives.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgTestStructPrimitives ********************************************

// ********** Begin ScriptStruct FDlgTestStructComplex *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgTestStructComplex>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgTestStructComplex); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Struct of Complex types\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Struct of Complex types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructArrayPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfObjects_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfObjectsAsReference_MetaData[] = {
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgTestStructComplex constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructArrayPrimitives_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StructArrayPrimitives;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrayOfObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrayOfObjectsAsReference_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfObjectsAsReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgTestStructComplex constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestStructComplex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgTestStructComplex Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StructArrayPrimitives_Inner = { "StructArrayPrimitives", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(0, nullptr) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StructArrayPrimitives = { "StructArrayPrimitives", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructComplex, StructArrayPrimitives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructArrayPrimitives_MetaData), NewProp_StructArrayPrimitives_MetaData) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ArrayOfObjects_Inner = { "ArrayOfObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ArrayOfObjects = { "ArrayOfObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructComplex, ArrayOfObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayOfObjects_MetaData), NewProp_ArrayOfObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ArrayOfObjectsAsReference_Inner = { "ArrayOfObjectsAsReference", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ArrayOfObjectsAsReference = { "ArrayOfObjectsAsReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestStructComplex, ArrayOfObjectsAsReference), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayOfObjectsAsReference_MetaData), NewProp_ArrayOfObjectsAsReference_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructArrayPrimitives_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructArrayPrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrayOfObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrayOfObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrayOfObjectsAsReference_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrayOfObjectsAsReference,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgTestStructComplex Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgTestStructComplex",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgTestStructComplex>(),
	alignof(FDlgTestStructComplex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgTestStructComplex;
UScriptStruct* Z_Construct_UScriptStruct_FDlgTestStructComplex(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgTestStructComplex.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgTestStructComplex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestStructComplex, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgTestStructComplex"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgTestStructComplex.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgTestStructComplex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgTestStructComplex.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgTestStructComplex.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgTestStructComplex ***********************************************

// ********** Begin ScriptStruct FDlgTestArrayPrimitive ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgTestArrayPrimitive>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgTestArrayPrimitive); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Arrays simple\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Arrays simple" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Num1_Array_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int32Array_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int64Array_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArrayConstantNulls_MetaData[] = {
		{ "Comment", "// Filled with only nulls, check if the writers support it\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Filled with only nulls, check if the writers support it" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgTestArrayPrimitive constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmptyArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EmptyArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num1_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Num1_Array;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32Array;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Int64Array;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolArray;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumArray_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnumArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnumArray;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NameArray;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArrayConstantNulls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArrayConstantNulls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgTestArrayPrimitive constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestArrayPrimitive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgTestArrayPrimitive Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EmptyArray_Inner = { "EmptyArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EmptyArray = { "EmptyArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayPrimitive, EmptyArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyArray_MetaData), NewProp_EmptyArray_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Num1_Array_Inner = { "Num1_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Num1_Array = { "Num1_Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayPrimitive, Num1_Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Num1_Array_MetaData), NewProp_Num1_Array_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Int32Array_Inner = { "Int32Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Int32Array = { "Int32Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayPrimitive, Int32Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int32Array_MetaData), NewProp_Int32Array_MetaData) };
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_Int64Array_Inner = { "Int64Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Int64Array = { "Int64Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayPrimitive, Int64Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int64Array_MetaData), NewProp_Int64Array_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_BoolArray_Inner = { "BoolArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BoolArray = { "BoolArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayPrimitive, BoolArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolArray_MetaData), NewProp_BoolArray_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayPrimitive, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatArray_MetaData), NewProp_FloatArray_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_EnumArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_EnumArray_Inner = { "EnumArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DlgSystem_EDlgTestEnum, METADATA_PARAMS(0, nullptr) }; // d3642d740301710708654e6c9791ac67e6f606da
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EnumArray = { "EnumArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayPrimitive, EnumArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumArray_MetaData), NewProp_EnumArray_MetaData) }; // d3642d740301710708654e6c9791ac67e6f606da
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameArray_Inner = { "NameArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_NameArray = { "NameArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayPrimitive, NameArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameArray_MetaData), NewProp_NameArray_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayPrimitive, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringArray_MetaData), NewProp_StringArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectArrayConstantNulls_Inner = { "ObjectArrayConstantNulls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ObjectArrayConstantNulls = { "ObjectArrayConstantNulls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayPrimitive, ObjectArrayConstantNulls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectArrayConstantNulls_MetaData), NewProp_ObjectArrayConstantNulls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptyArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptyArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Num1_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Num1_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int64Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int64Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoolArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoolArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloatArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloatArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnumArray_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnumArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnumArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectArrayConstantNulls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectArrayConstantNulls,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgTestArrayPrimitive Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgTestArrayPrimitive",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgTestArrayPrimitive>(),
	alignof(FDlgTestArrayPrimitive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgTestArrayPrimitive;
UScriptStruct* Z_Construct_UScriptStruct_FDlgTestArrayPrimitive(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgTestArrayPrimitive.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgTestArrayPrimitive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestArrayPrimitive, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgTestArrayPrimitive"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgTestArrayPrimitive.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgTestArrayPrimitive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgTestArrayPrimitive.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgTestArrayPrimitive.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgTestArrayPrimitive **********************************************

// ********** Begin ScriptStruct FDlgTestArrayComplex **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgTestArrayComplex>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgTestArrayComplex); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Array complex\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Array complex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructArrayPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructArrayOfArrayPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArrayFrequentsNulls_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArrayPrimitivesBase_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArrayPrimitivesAll_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgTestArrayComplex constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructArrayPrimitives_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StructArrayPrimitives;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructArrayOfArrayPrimitives_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StructArrayOfArrayPrimitives;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArrayFrequentsNulls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArrayFrequentsNulls;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArrayPrimitivesBase_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArrayPrimitivesBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArrayPrimitivesAll_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArrayPrimitivesAll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgTestArrayComplex constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestArrayComplex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgTestArrayComplex Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StructArrayPrimitives_Inner = { "StructArrayPrimitives", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(0, nullptr) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StructArrayPrimitives = { "StructArrayPrimitives", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayComplex, StructArrayPrimitives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructArrayPrimitives_MetaData), NewProp_StructArrayPrimitives_MetaData) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StructArrayOfArrayPrimitives_Inner = { "StructArrayOfArrayPrimitives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgTestArrayPrimitive, METADATA_PARAMS(0, nullptr) }; // 12d869471a172ed1953dbc5ee8ed8b686930bea1
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StructArrayOfArrayPrimitives = { "StructArrayOfArrayPrimitives", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayComplex, StructArrayOfArrayPrimitives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructArrayOfArrayPrimitives_MetaData), NewProp_StructArrayOfArrayPrimitives_MetaData) }; // 12d869471a172ed1953dbc5ee8ed8b686930bea1
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectArrayFrequentsNulls_Inner = { "ObjectArrayFrequentsNulls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ObjectArrayFrequentsNulls = { "ObjectArrayFrequentsNulls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayComplex, ObjectArrayFrequentsNulls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectArrayFrequentsNulls_MetaData), NewProp_ObjectArrayFrequentsNulls_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectArrayPrimitivesBase_Inner = { "ObjectArrayPrimitivesBase", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ObjectArrayPrimitivesBase = { "ObjectArrayPrimitivesBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayComplex, ObjectArrayPrimitivesBase), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectArrayPrimitivesBase_MetaData), NewProp_ObjectArrayPrimitivesBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectArrayPrimitivesAll_Inner = { "ObjectArrayPrimitivesAll", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ObjectArrayPrimitivesAll = { "ObjectArrayPrimitivesAll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestArrayComplex, ObjectArrayPrimitivesAll), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectArrayPrimitivesAll_MetaData), NewProp_ObjectArrayPrimitivesAll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructArrayPrimitives_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructArrayPrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructArrayOfArrayPrimitives_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructArrayOfArrayPrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectArrayFrequentsNulls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectArrayFrequentsNulls,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectArrayPrimitivesBase_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectArrayPrimitivesBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectArrayPrimitivesAll_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectArrayPrimitivesAll,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgTestArrayComplex Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgTestArrayComplex",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgTestArrayComplex>(),
	alignof(FDlgTestArrayComplex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgTestArrayComplex;
UScriptStruct* Z_Construct_UScriptStruct_FDlgTestArrayComplex(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgTestArrayComplex.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgTestArrayComplex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestArrayComplex, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgTestArrayComplex"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgTestArrayComplex.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgTestArrayComplex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgTestArrayComplex.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgTestArrayComplex.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgTestArrayComplex ************************************************

// ********** Begin ScriptStruct FDlgTestSetPrimitive **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgTestSetPrimitive>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgTestSetPrimitive); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Set primitive\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Set primitive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptySet_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Num1_Set_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int32Set_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int64Set_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumSet_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSet_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringSet_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgTestSetPrimitive constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmptySet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_EmptySet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num1_Set_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Num1_Set;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Set_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Int32Set;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Set_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Int64Set;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumSet_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnumSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_EnumSet;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_NameSet;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_StringSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgTestSetPrimitive constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestSetPrimitive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgTestSetPrimitive Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EmptySet_ElementProp = { "EmptySet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_EmptySet = { "EmptySet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestSetPrimitive, EmptySet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptySet_MetaData), NewProp_EmptySet_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Num1_Set_ElementProp = { "Num1_Set", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_Num1_Set = { "Num1_Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestSetPrimitive, Num1_Set), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Num1_Set_MetaData), NewProp_Num1_Set_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Int32Set_ElementProp = { "Int32Set", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_Int32Set = { "Int32Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestSetPrimitive, Int32Set), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int32Set_MetaData), NewProp_Int32Set_MetaData) };
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_Int64Set_ElementProp = { "Int64Set", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_Int64Set = { "Int64Set", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestSetPrimitive, Int64Set), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int64Set_MetaData), NewProp_Int64Set_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_EnumSet_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_EnumSet_ElementProp = { "EnumSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DlgSystem_EDlgTestEnum, METADATA_PARAMS(0, nullptr) }; // d3642d740301710708654e6c9791ac67e6f606da
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_EnumSet = { "EnumSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestSetPrimitive, EnumSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumSet_MetaData), NewProp_EnumSet_MetaData) }; // d3642d740301710708654e6c9791ac67e6f606da
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameSet_ElementProp = { "NameSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_NameSet = { "NameSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestSetPrimitive, NameSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSet_MetaData), NewProp_NameSet_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StringSet_ElementProp = { "StringSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_StringSet = { "StringSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestSetPrimitive, StringSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringSet_MetaData), NewProp_StringSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptySet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptySet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Num1_Set_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Num1_Set,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32Set_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32Set,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int64Set_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int64Set,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnumSet_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnumSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnumSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringSet,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgTestSetPrimitive Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgTestSetPrimitive",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgTestSetPrimitive>(),
	alignof(FDlgTestSetPrimitive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgTestSetPrimitive;
UScriptStruct* Z_Construct_UScriptStruct_FDlgTestSetPrimitive(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgTestSetPrimitive.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgTestSetPrimitive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestSetPrimitive, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgTestSetPrimitive"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgTestSetPrimitive.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgTestSetPrimitive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgTestSetPrimitive.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgTestSetPrimitive.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgTestSetPrimitive ************************************************

// ********** Begin ScriptStruct FDlgTestSetComplex ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgTestSetComplex>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgTestSetComplex); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Set complex\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Set complex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructSetPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgTestSetComplex constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructSetPrimitives_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_StructSetPrimitives;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgTestSetComplex constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestSetComplex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgTestSetComplex Property Definitions ***************************
static_assert(TModels_V<CGetTypeHashable, FDlgTestStructPrimitives>, "The structure 'FDlgTestStructPrimitives' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StructSetPrimitives_ElementProp = { "StructSetPrimitives", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(0, nullptr) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_StructSetPrimitives = { "StructSetPrimitives", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestSetComplex, StructSetPrimitives), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructSetPrimitives_MetaData), NewProp_StructSetPrimitives_MetaData) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructSetPrimitives_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructSetPrimitives,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgTestSetComplex Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgTestSetComplex",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgTestSetComplex>(),
	alignof(FDlgTestSetComplex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgTestSetComplex;
UScriptStruct* Z_Construct_UScriptStruct_FDlgTestSetComplex(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgTestSetComplex.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgTestSetComplex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestSetComplex, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgTestSetComplex"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgTestSetComplex.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgTestSetComplex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgTestSetComplex.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgTestSetComplex.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgTestSetComplex **************************************************

// ********** Begin ScriptStruct FDlgTestMapPrimitive **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgTestMapPrimitive>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgTestMapPrimitive); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Map primitive\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Map primitive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int32ToInt32Map_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int64ToInt64Map_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int32ToStringMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int32ToNameMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringToInt32Map_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringToStringMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameToInt32Map_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameToNameMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringToFloatMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int32ToFloatMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameToColorMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectFrequentsNullsMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectConstantNullMap_MetaData[] = {
		{ "Comment", "// Filled with only nulls, check if the writers support it\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Filled with only nulls, check if the writers support it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPrimitivesAllMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgTestMapPrimitive constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmptyMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EmptyMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EmptyMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToInt32Map_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToInt32Map_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Int32ToInt32Map;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64ToInt64Map_ValueProp;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64ToInt64Map_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Int64ToInt64Map;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Int32ToStringMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToStringMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Int32ToStringMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Int32ToNameMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToNameMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Int32ToNameMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StringToInt32Map_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringToInt32Map_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StringToInt32Map;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringToStringMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringToStringMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StringToStringMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NameToInt32Map_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToInt32Map_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameToInt32Map;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToNameMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToNameMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameToNameMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StringToFloatMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringToFloatMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StringToFloatMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Int32ToFloatMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToFloatMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Int32ToFloatMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NameToColorMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToColorMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameToColorMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectFrequentsNullsMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectFrequentsNullsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectFrequentsNullsMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectConstantNullMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectConstantNullMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectConstantNullMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPrimitivesAllMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPrimitivesAllMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectPrimitivesAllMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgTestMapPrimitive constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestMapPrimitive>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgTestMapPrimitive Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EmptyMap_ValueProp = { "EmptyMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EmptyMap_Key_KeyProp = { "EmptyMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_EmptyMap = { "EmptyMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, EmptyMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyMap_MetaData), NewProp_EmptyMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Int32ToInt32Map_ValueProp = { "Int32ToInt32Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Int32ToInt32Map_Key_KeyProp = { "Int32ToInt32Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Int32ToInt32Map = { "Int32ToInt32Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, Int32ToInt32Map), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int32ToInt32Map_MetaData), NewProp_Int32ToInt32Map_MetaData) };
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_Int64ToInt64Map_ValueProp = { "Int64ToInt64Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_Int64ToInt64Map_Key_KeyProp = { "Int64ToInt64Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Int64ToInt64Map = { "Int64ToInt64Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, Int64ToInt64Map), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int64ToInt64Map_MetaData), NewProp_Int64ToInt64Map_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Int32ToStringMap_ValueProp = { "Int32ToStringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Int32ToStringMap_Key_KeyProp = { "Int32ToStringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Int32ToStringMap = { "Int32ToStringMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, Int32ToStringMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int32ToStringMap_MetaData), NewProp_Int32ToStringMap_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Int32ToNameMap_ValueProp = { "Int32ToNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Int32ToNameMap_Key_KeyProp = { "Int32ToNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Int32ToNameMap = { "Int32ToNameMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, Int32ToNameMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int32ToNameMap_MetaData), NewProp_Int32ToNameMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StringToInt32Map_ValueProp = { "StringToInt32Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StringToInt32Map_Key_KeyProp = { "StringToInt32Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_StringToInt32Map = { "StringToInt32Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, StringToInt32Map), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringToInt32Map_MetaData), NewProp_StringToInt32Map_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StringToStringMap_ValueProp = { "StringToStringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StringToStringMap_Key_KeyProp = { "StringToStringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_StringToStringMap = { "StringToStringMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, StringToStringMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringToStringMap_MetaData), NewProp_StringToStringMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NameToInt32Map_ValueProp = { "NameToInt32Map", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameToInt32Map_Key_KeyProp = { "NameToInt32Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NameToInt32Map = { "NameToInt32Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, NameToInt32Map), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameToInt32Map_MetaData), NewProp_NameToInt32Map_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameToNameMap_ValueProp = { "NameToNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameToNameMap_Key_KeyProp = { "NameToNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NameToNameMap = { "NameToNameMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, NameToNameMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameToNameMap_MetaData), NewProp_NameToNameMap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StringToFloatMap_ValueProp = { "StringToFloatMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StringToFloatMap_Key_KeyProp = { "StringToFloatMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_StringToFloatMap = { "StringToFloatMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, StringToFloatMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringToFloatMap_MetaData), NewProp_StringToFloatMap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Int32ToFloatMap_ValueProp = { "Int32ToFloatMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Int32ToFloatMap_Key_KeyProp = { "Int32ToFloatMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Int32ToFloatMap = { "Int32ToFloatMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, Int32ToFloatMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int32ToFloatMap_MetaData), NewProp_Int32ToFloatMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NameToColorMap_ValueProp = { "NameToColorMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameToColorMap_Key_KeyProp = { "NameToColorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NameToColorMap = { "NameToColorMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, NameToColorMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameToColorMap_MetaData), NewProp_NameToColorMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectFrequentsNullsMap_ValueProp = { "ObjectFrequentsNullsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ObjectFrequentsNullsMap_Key_KeyProp = { "ObjectFrequentsNullsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ObjectFrequentsNullsMap = { "ObjectFrequentsNullsMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, ObjectFrequentsNullsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectFrequentsNullsMap_MetaData), NewProp_ObjectFrequentsNullsMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectConstantNullMap_ValueProp = { "ObjectConstantNullMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ObjectConstantNullMap_Key_KeyProp = { "ObjectConstantNullMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ObjectConstantNullMap = { "ObjectConstantNullMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, ObjectConstantNullMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectConstantNullMap_MetaData), NewProp_ObjectConstantNullMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ObjectPrimitivesAllMap_ValueProp = { "ObjectPrimitivesAllMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDlgTestObjectPrimitivesBase, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ObjectPrimitivesAllMap_Key_KeyProp = { "ObjectPrimitivesAllMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ObjectPrimitivesAllMap = { "ObjectPrimitivesAllMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapPrimitive, ObjectPrimitivesAllMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPrimitivesAllMap_MetaData), NewProp_ObjectPrimitivesAllMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptyMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptyMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EmptyMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToInt32Map_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToInt32Map_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToInt32Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int64ToInt64Map_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int64ToInt64Map_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int64ToInt64Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToStringMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToStringMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToStringMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToNameMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToNameMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToNameMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringToInt32Map_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringToInt32Map_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringToInt32Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringToStringMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringToStringMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringToStringMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToInt32Map_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToInt32Map_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToInt32Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToNameMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToNameMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToNameMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringToFloatMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringToFloatMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StringToFloatMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToFloatMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToFloatMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToFloatMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToColorMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToColorMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToColorMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectFrequentsNullsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectFrequentsNullsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectFrequentsNullsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectConstantNullMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectConstantNullMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectConstantNullMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectPrimitivesAllMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectPrimitivesAllMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ObjectPrimitivesAllMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgTestMapPrimitive Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgTestMapPrimitive",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgTestMapPrimitive>(),
	alignof(FDlgTestMapPrimitive),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgTestMapPrimitive;
UScriptStruct* Z_Construct_UScriptStruct_FDlgTestMapPrimitive(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgTestMapPrimitive.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgTestMapPrimitive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestMapPrimitive, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgTestMapPrimitive"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgTestMapPrimitive.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgTestMapPrimitive.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgTestMapPrimitive.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgTestMapPrimitive.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgTestMapPrimitive ************************************************

// ********** Begin ScriptStruct FDlgTestMapComplex ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgTestMapComplex>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgTestMapComplex); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Map complex\n" },
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
		{ "ToolTip", "Map complex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int32ToStructPrimitiveMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructPrimitiveMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructPrimitiveToIntMap_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructOfMapPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructOfArrayPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructOfSetPrimitives_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructOfArrayComplex_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameToStructOfSetComplex_MetaData[] = {
		{ "ModuleRelativePath", "Tests/DlgIOTesterTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgTestMapComplex constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Int32ToStructPrimitiveMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int32ToStructPrimitiveMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Int32ToStructPrimitiveMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructPrimitiveMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructPrimitiveMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructPrimitiveMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StructPrimitiveToIntMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructPrimitiveToIntMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StructPrimitiveToIntMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructOfMapPrimitives_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructOfMapPrimitives_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructOfMapPrimitives;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructOfArrayPrimitives_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructOfArrayPrimitives_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructOfArrayPrimitives;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructOfSetPrimitives_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructOfSetPrimitives_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructOfSetPrimitives;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructOfArrayComplex_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructOfArrayComplex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructOfArrayComplex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NameToStructOfSetComplex_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameToStructOfSetComplex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameToStructOfSetComplex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgTestMapComplex constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgTestMapComplex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgTestMapComplex Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Int32ToStructPrimitiveMap_ValueProp = { "Int32ToStructPrimitiveMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(0, nullptr) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Int32ToStructPrimitiveMap_Key_KeyProp = { "Int32ToStructPrimitiveMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Int32ToStructPrimitiveMap = { "Int32ToStructPrimitiveMap", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapComplex, Int32ToStructPrimitiveMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int32ToStructPrimitiveMap_MetaData), NewProp_Int32ToStructPrimitiveMap_MetaData) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NameToStructPrimitiveMap_ValueProp = { "NameToStructPrimitiveMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(0, nullptr) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameToStructPrimitiveMap_Key_KeyProp = { "NameToStructPrimitiveMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NameToStructPrimitiveMap = { "NameToStructPrimitiveMap", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructPrimitiveMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameToStructPrimitiveMap_MetaData), NewProp_NameToStructPrimitiveMap_MetaData) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StructPrimitiveToIntMap_ValueProp = { "StructPrimitiveToIntMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StructPrimitiveToIntMap_Key_KeyProp = { "StructPrimitiveToIntMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgTestStructPrimitives, METADATA_PARAMS(0, nullptr) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_StructPrimitiveToIntMap = { "StructPrimitiveToIntMap", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapComplex, StructPrimitiveToIntMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructPrimitiveToIntMap_MetaData), NewProp_StructPrimitiveToIntMap_MetaData) }; // 75bfa51686a96b897f009e9c8ece681904907a22
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NameToStructOfMapPrimitives_ValueProp = { "NameToStructOfMapPrimitives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgTestMapPrimitive, METADATA_PARAMS(0, nullptr) }; // 1e043c1676aa6389cf14529abe050fe48bbe8887
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameToStructOfMapPrimitives_Key_KeyProp = { "NameToStructOfMapPrimitives_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NameToStructOfMapPrimitives = { "NameToStructOfMapPrimitives", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructOfMapPrimitives), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameToStructOfMapPrimitives_MetaData), NewProp_NameToStructOfMapPrimitives_MetaData) }; // 1e043c1676aa6389cf14529abe050fe48bbe8887
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NameToStructOfArrayPrimitives_ValueProp = { "NameToStructOfArrayPrimitives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgTestArrayPrimitive, METADATA_PARAMS(0, nullptr) }; // 12d869471a172ed1953dbc5ee8ed8b686930bea1
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameToStructOfArrayPrimitives_Key_KeyProp = { "NameToStructOfArrayPrimitives_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NameToStructOfArrayPrimitives = { "NameToStructOfArrayPrimitives", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructOfArrayPrimitives), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameToStructOfArrayPrimitives_MetaData), NewProp_NameToStructOfArrayPrimitives_MetaData) }; // 12d869471a172ed1953dbc5ee8ed8b686930bea1
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NameToStructOfSetPrimitives_ValueProp = { "NameToStructOfSetPrimitives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgTestSetPrimitive, METADATA_PARAMS(0, nullptr) }; // 53c629e2c51e5ca6c51a340bdcfeca2794a32d37
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameToStructOfSetPrimitives_Key_KeyProp = { "NameToStructOfSetPrimitives_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NameToStructOfSetPrimitives = { "NameToStructOfSetPrimitives", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructOfSetPrimitives), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameToStructOfSetPrimitives_MetaData), NewProp_NameToStructOfSetPrimitives_MetaData) }; // 53c629e2c51e5ca6c51a340bdcfeca2794a32d37
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NameToStructOfArrayComplex_ValueProp = { "NameToStructOfArrayComplex", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgTestArrayComplex, METADATA_PARAMS(0, nullptr) }; // 89ae7531c782da6c38d7d9adffe511aec4a23faa
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameToStructOfArrayComplex_Key_KeyProp = { "NameToStructOfArrayComplex_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NameToStructOfArrayComplex = { "NameToStructOfArrayComplex", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructOfArrayComplex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameToStructOfArrayComplex_MetaData), NewProp_NameToStructOfArrayComplex_MetaData) }; // 89ae7531c782da6c38d7d9adffe511aec4a23faa
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NameToStructOfSetComplex_ValueProp = { "NameToStructOfSetComplex", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDlgTestSetComplex, METADATA_PARAMS(0, nullptr) }; // 55f66705048f0a4810802b42e371c0436eef6ac4
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameToStructOfSetComplex_Key_KeyProp = { "NameToStructOfSetComplex_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NameToStructOfSetComplex = { "NameToStructOfSetComplex", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgTestMapComplex, NameToStructOfSetComplex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameToStructOfSetComplex_MetaData), NewProp_NameToStructOfSetComplex_MetaData) }; // 55f66705048f0a4810802b42e371c0436eef6ac4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToStructPrimitiveMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToStructPrimitiveMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Int32ToStructPrimitiveMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructPrimitiveMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructPrimitiveMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructPrimitiveMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructPrimitiveToIntMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructPrimitiveToIntMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StructPrimitiveToIntMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfMapPrimitives_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfMapPrimitives_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfMapPrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfArrayPrimitives_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfArrayPrimitives_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfArrayPrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfSetPrimitives_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfSetPrimitives_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfSetPrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfArrayComplex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfArrayComplex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfArrayComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfSetComplex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfSetComplex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameToStructOfSetComplex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgTestMapComplex Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgTestMapComplex",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgTestMapComplex>(),
	alignof(FDlgTestMapComplex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgTestMapComplex;
UScriptStruct* Z_Construct_UScriptStruct_FDlgTestMapComplex(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgTestMapComplex.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgTestMapComplex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgTestMapComplex, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgTestMapComplex"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgTestMapComplex.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgTestMapComplex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgTestMapComplex.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgTestMapComplex.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgTestMapComplex **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Tests_DlgIOTesterTypes_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystem_EDlgTestEnum, TEXT("EDlgTestEnum"), &ZRIE_EDlgTestEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3546557812U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgIOTesterOptions, Z_Construct_UScriptStruct_FDlgIOTesterOptions_Statics::NewStructOps, TEXT("DlgIOTesterOptions"),&Z_Registration_Info_UScriptStruct_FDlgIOTesterOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgIOTesterOptions), 1896426656U) },
		{ Z_Construct_UScriptStruct_FDlgTestStructPrimitives, Z_Construct_UScriptStruct_FDlgTestStructPrimitives_Statics::NewStructOps, TEXT("DlgTestStructPrimitives"),&Z_Registration_Info_UScriptStruct_FDlgTestStructPrimitives, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestStructPrimitives), 1975493910U) },
		{ Z_Construct_UScriptStruct_FDlgTestStructComplex, Z_Construct_UScriptStruct_FDlgTestStructComplex_Statics::NewStructOps, TEXT("DlgTestStructComplex"),&Z_Registration_Info_UScriptStruct_FDlgTestStructComplex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestStructComplex), 414328590U) },
		{ Z_Construct_UScriptStruct_FDlgTestArrayPrimitive, Z_Construct_UScriptStruct_FDlgTestArrayPrimitive_Statics::NewStructOps, TEXT("DlgTestArrayPrimitive"),&Z_Registration_Info_UScriptStruct_FDlgTestArrayPrimitive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestArrayPrimitive), 316172615U) },
		{ Z_Construct_UScriptStruct_FDlgTestArrayComplex, Z_Construct_UScriptStruct_FDlgTestArrayComplex_Statics::NewStructOps, TEXT("DlgTestArrayComplex"),&Z_Registration_Info_UScriptStruct_FDlgTestArrayComplex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestArrayComplex), 2309911857U) },
		{ Z_Construct_UScriptStruct_FDlgTestSetPrimitive, Z_Construct_UScriptStruct_FDlgTestSetPrimitive_Statics::NewStructOps, TEXT("DlgTestSetPrimitive"),&Z_Registration_Info_UScriptStruct_FDlgTestSetPrimitive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestSetPrimitive), 1405495778U) },
		{ Z_Construct_UScriptStruct_FDlgTestSetComplex, Z_Construct_UScriptStruct_FDlgTestSetComplex_Statics::NewStructOps, TEXT("DlgTestSetComplex"),&Z_Registration_Info_UScriptStruct_FDlgTestSetComplex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestSetComplex), 1442211589U) },
		{ Z_Construct_UScriptStruct_FDlgTestMapPrimitive, Z_Construct_UScriptStruct_FDlgTestMapPrimitive_Statics::NewStructOps, TEXT("DlgTestMapPrimitive"),&Z_Registration_Info_UScriptStruct_FDlgTestMapPrimitive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestMapPrimitive), 503594006U) },
		{ Z_Construct_UScriptStruct_FDlgTestMapComplex, Z_Construct_UScriptStruct_FDlgTestMapComplex_Statics::NewStructOps, TEXT("DlgTestMapComplex"),&Z_Registration_Info_UScriptStruct_FDlgTestMapComplex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgTestMapComplex), 3642723155U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgTestObjectPrimitivesBase, TEXT("UDlgTestObjectPrimitivesBase"), &Z_Registration_Info_UClass_UDlgTestObjectPrimitivesBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTestObjectPrimitivesBase), 827495259U) },
		{ Z_Construct_UClass_UDlgTestObjectPrimitives_DefaultToInstanced, TEXT("UDlgTestObjectPrimitives_DefaultToInstanced"), &Z_Registration_Info_UClass_UDlgTestObjectPrimitives_DefaultToInstanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTestObjectPrimitives_DefaultToInstanced), 1068909322U) },
		{ Z_Construct_UClass_UDlgTestObjectPrimitives_ChildA, TEXT("UDlgTestObjectPrimitives_ChildA"), &Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTestObjectPrimitives_ChildA), 136723634U) },
		{ Z_Construct_UClass_UDlgTestObjectPrimitives_ChildB, TEXT("UDlgTestObjectPrimitives_ChildB"), &Z_Registration_Info_UClass_UDlgTestObjectPrimitives_ChildB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTestObjectPrimitives_ChildB), 314578451U) },
		{ Z_Construct_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA, TEXT("UDlgTestObjectPrimitives_GrandChildA_Of_ChildA"), &Z_Registration_Info_UClass_UDlgTestObjectPrimitives_GrandChildA_Of_ChildA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgTestObjectPrimitives_GrandChildA_Of_ChildA), 4238209978U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Tests_DlgIOTesterTypes_h__Script_DlgSystem_e2d1ff4b81ea8f54806368f6390ac87bc3f3b2a2{
	TEXT("/Script/DlgSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
