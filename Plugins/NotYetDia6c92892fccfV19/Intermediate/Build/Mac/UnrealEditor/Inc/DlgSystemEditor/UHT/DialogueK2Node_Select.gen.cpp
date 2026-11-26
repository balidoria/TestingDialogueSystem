// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/BlueprintNodes/DialogueK2Node_Select.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDialogueK2Node_Select() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_Select(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectName(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_Select(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectName(ETypeConstructPhase);
DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EDlgVariableType **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType_Statics
template<> DLGSYSTEMEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgVariableType>()
{
	return Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Float.DisplayName", "Dialogue Float Variable" },
		{ "Float.Name", "EDlgVariableType::Float" },
		{ "Int.DisplayName", "Dialogue Int Variable" },
		{ "Int.Name", "EDlgVariableType::Int" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Name.DisplayName", "Dialogue Name Variable" },
		{ "Name.Name", "EDlgVariableType::Name" },
		{ "SpeakerState.DisplayName", "Dialogue Speaker State" },
		{ "SpeakerState.Name", "EDlgVariableType::SpeakerState" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgVariableType::Float", (int64)EDlgVariableType::Float },
		{ "EDlgVariableType::Int", (int64)EDlgVariableType::Int },
		{ "EDlgVariableType::Name", (int64)EDlgVariableType::Name },
		{ "EDlgVariableType::SpeakerState", (int64)EDlgVariableType::SpeakerState },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
	nullptr,
	"EDlgVariableType",
	"EDlgVariableType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgVariableType;
UEnum* Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgVariableType.OuterSingleton)
		{
			ZRIE_EDlgVariableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType, (UObject*)Z_Construct_UPackage__Script_DlgSystemEditor(ETypeConstructPhase::Outer), TEXT("EDlgVariableType"));
		}
		return ZRIE_EDlgVariableType.OuterSingleton;
	}
	if (!ZRIE_EDlgVariableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgVariableType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgVariableType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgVariableType ************************************************************

// ********** Begin Class UDialogueK2Node_Select ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_Select_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Select BlueprintNode Based on UK2Node_Select\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Select BlueprintNode Based on UK2Node_Select" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinNames_MetaData[] = {
		{ "Comment", "/** List of the current entries (Pin Names) based on owner dialogue name and on all dialogues */" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ToolTip", "List of the current entries (Pin Names) based on owner dialogue name and on all dialogues" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableType_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariablePinType_MetaData[] = {
		{ "Comment", "// The pin type of this select\n" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ToolTip", "The pin type of this select" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReconstructNode_MetaData[] = {
		{ "Comment", "/** Whether we need to reconstruct the node after the pins have changed */" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ToolTip", "Whether we need to reconstruct the node after the pins have changed" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_Select constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_PinNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PinNames;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VariableType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VariableType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariablePinType;
	static void NewProp_bReconstructNode_SetBit(void* Obj)
	{
		((UDialogueK2Node_Select*)Obj)->bReconstructNode = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReconstructNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDialogueK2Node_Select constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_Select>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDialogueK2Node_Select Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueK2Node_Select, PinNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinNames_MetaData), NewProp_PinNames_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_VariableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueK2Node_Select, VariableType), Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableType_MetaData), NewProp_VariableType_MetaData) }; // 12156ce3cd18856f1fd8046dc2ee47a915bc5092
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_VariablePinType = { "VariablePinType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueK2Node_Select, VariablePinType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariablePinType_MetaData), NewProp_VariablePinType_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bReconstructNode = { "bReconstructNode", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueK2Node_Select), &UHT_STATICS::NewProp_bReconstructNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReconstructNode_MetaData), NewProp_bReconstructNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PinNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PinNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VariableType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VariableType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VariablePinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bReconstructNode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDialogueK2Node_Select Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UK2Node,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_Select,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_Select;
UClass* Z_Construct_UClass_UDialogueK2Node_Select(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_Select;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_Select.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_Select"),
				Z_Registration_Info_UClass_UDialogueK2Node_Select.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_Select.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_Select.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_Select.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_Select.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_Select);
UDialogueK2Node_Select::~UDialogueK2Node_Select() {}
// ********** End Class UDialogueK2Node_Select *****************************************************

// ********** Begin Class UDialogueK2Node_SelectFloat **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_SelectFloat_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n *  Float variant\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Float variant" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_SelectFloat constinit property declarations **************
// ********** End Class UDialogueK2Node_SelectFloat constinit property declarations ****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SelectFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_Select,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_SelectFloat,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat;
UClass* Z_Construct_UClass_UDialogueK2Node_SelectFloat(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_SelectFloat;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_SelectFloat"),
				Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_SelectFloat);
UDialogueK2Node_SelectFloat::~UDialogueK2Node_SelectFloat() {}
// ********** End Class UDialogueK2Node_SelectFloat ************************************************

// ********** Begin Class UDialogueK2Node_SelectName ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_SelectName_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n *  Name variant\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Name variant" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_SelectName constinit property declarations ***************
// ********** End Class UDialogueK2Node_SelectName constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SelectName>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_Select,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_SelectName,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_SelectName;
UClass* Z_Construct_UClass_UDialogueK2Node_SelectName(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_SelectName;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SelectName.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_SelectName"),
				Z_Registration_Info_UClass_UDialogueK2Node_SelectName.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_SelectName.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_SelectName.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SelectName.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_SelectName.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_SelectName);
UDialogueK2Node_SelectName::~UDialogueK2Node_SelectName() {}
// ********** End Class UDialogueK2Node_SelectName *************************************************

// ********** Begin Class UDialogueK2Node_SelectOnSpeakerState *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n *  SpeakerState variant\n */" },
		{ "IncludePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "Keywords", "Ternary If" },
		{ "ModuleRelativePath", "BlueprintNodes/DialogueK2Node_Select.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "SpeakerState variant" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDialogueK2Node_SelectOnSpeakerState constinit property declarations *****
// ********** End Class UDialogueK2Node_SelectOnSpeakerState constinit property declarations *******
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueK2Node_SelectOnSpeakerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDialogueK2Node_Select,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystemEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState;
UClass* Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDialogueK2Node_SelectOnSpeakerState;
		if (!Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DialogueK2Node_SelectOnSpeakerState"),
				Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDialogueK2Node_SelectOnSpeakerState);
UDialogueK2Node_SelectOnSpeakerState::~UDialogueK2Node_SelectOnSpeakerState() {}
// ********** End Class UDialogueK2Node_SelectOnSpeakerState ***************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Select_h__Script_DlgSystemEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystemEditor_EDlgVariableType, TEXT("EDlgVariableType"), &ZRIE_EDlgVariableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 303394019U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueK2Node_Select, TEXT("UDialogueK2Node_Select"), &Z_Registration_Info_UClass_UDialogueK2Node_Select, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_Select), 3856865641U) },
		{ Z_Construct_UClass_UDialogueK2Node_SelectFloat, TEXT("UDialogueK2Node_SelectFloat"), &Z_Registration_Info_UClass_UDialogueK2Node_SelectFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SelectFloat), 1622150815U) },
		{ Z_Construct_UClass_UDialogueK2Node_SelectName, TEXT("UDialogueK2Node_SelectName"), &Z_Registration_Info_UClass_UDialogueK2Node_SelectName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SelectName), 4012586316U) },
		{ Z_Construct_UClass_UDialogueK2Node_SelectOnSpeakerState, TEXT("UDialogueK2Node_SelectOnSpeakerState"), &Z_Registration_Info_UClass_UDialogueK2Node_SelectOnSpeakerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueK2Node_SelectOnSpeakerState), 1146645823U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystemEditor_BlueprintNodes_DialogueK2Node_Select_h__Script_DlgSystemEditor_81a943bd2b157531253cfe44163b9cfb6cb3b32d{
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
