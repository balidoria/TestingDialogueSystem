// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/DlgCondition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgCondition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgCompare(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgConditionStrength(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgConditionType(ETypeConstructPhase);
DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgOperation(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustom(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EDlgConditionStrength *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgConditionStrength_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgConditionStrength>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgConditionStrength(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Defines the way the condition is interpreted inside a condition array\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "Strong.Comment", "/// All strong condition must be satisfied inside the condition array\n// Aka an AND condition\n" },
		{ "Strong.DisplayName", "Strong Condition (AND Condition)" },
		{ "Strong.Name", "EDlgConditionStrength::Strong" },
		{ "Strong.ToolTip", "All strong condition must be satisfied inside the condition array\nAka an AND condition" },
		{ "ToolTip", "Defines the way the condition is interpreted inside a condition array" },
		{ "Weak.Comment", "// At least one of the weak conditions must be satisfied inside the condition array (if there is any)\n// Aka an OR condition\n" },
		{ "Weak.DisplayName", "Weak Condition (OR Condition)" },
		{ "Weak.Name", "EDlgConditionStrength::Weak" },
		{ "Weak.ToolTip", "At least one of the weak conditions must be satisfied inside the condition array (if there is any)\nAka an OR condition" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgConditionStrength::Strong", (int64)EDlgConditionStrength::Strong },
		{ "EDlgConditionStrength::Weak", (int64)EDlgConditionStrength::Weak },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgConditionStrength",
	"EDlgConditionStrength",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgConditionStrength;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgConditionStrength(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgConditionStrength.OuterSingleton)
		{
			ZRIE_EDlgConditionStrength.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgConditionStrength, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgConditionStrength"));
		}
		return ZRIE_EDlgConditionStrength.OuterSingleton;
	}
	if (!ZRIE_EDlgConditionStrength.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgConditionStrength.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgConditionStrength.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgConditionStrength *******************************************************

// ********** Begin Enum EDlgConditionType *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgConditionType_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgConditionType>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgConditionType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "BoolCall.Comment", "// Calls GetBoolValue on the Participant\n" },
		{ "BoolCall.DisplayName", "Check Dialogue Bool Value" },
		{ "BoolCall.Name", "EDlgConditionType::BoolCall" },
		{ "BoolCall.ToolTip", "Calls GetBoolValue on the Participant" },
		{ "ClassBoolVariable.Comment", "// Gets the value from the Participant Bool Variable\n" },
		{ "ClassBoolVariable.DisplayName", "Check Class Bool Variable" },
		{ "ClassBoolVariable.Name", "EDlgConditionType::ClassBoolVariable" },
		{ "ClassBoolVariable.ToolTip", "Gets the value from the Participant Bool Variable" },
		{ "ClassFloatVariable.Comment", "// Gets the value from the Participant Float Variable\n" },
		{ "ClassFloatVariable.DisplayName", "Check Class Float Variable" },
		{ "ClassFloatVariable.Name", "EDlgConditionType::ClassFloatVariable" },
		{ "ClassFloatVariable.ToolTip", "Gets the value from the Participant Float Variable" },
		{ "ClassIntVariable.Comment", "// Gets the value from the Participant Int Variable\n" },
		{ "ClassIntVariable.DisplayName", "Check Class Int Variable" },
		{ "ClassIntVariable.Name", "EDlgConditionType::ClassIntVariable" },
		{ "ClassIntVariable.ToolTip", "Gets the value from the Participant Int Variable" },
		{ "ClassNameVariable.Comment", "// Gets the value from the Participant Name Variable\n" },
		{ "ClassNameVariable.DisplayName", "Check Class Name Variable" },
		{ "ClassNameVariable.Name", "EDlgConditionType::ClassNameVariable" },
		{ "ClassNameVariable.ToolTip", "Gets the value from the Participant Name Variable" },
		{ "Comment", "// The Type of condition FDlgCondition is based upon\n" },
		{ "Custom.Comment", "// User Defined Condition, calls IsConditionMet on the custom condition object.\n//\n// 1. Create a new Blueprint derived from DlgConditionCustom (or DlgConditionCustomHideCategories)\n// 2. Override IsConditionMet\n// 3. Return true if you want the condition to succeed or false otherwise\n" },
		{ "Custom.DisplayName", "Custom Condition" },
		{ "Custom.Name", "EDlgConditionType::Custom" },
		{ "Custom.ToolTip", "User Defined Condition, calls IsConditionMet on the custom condition object.\n\n1. Create a new Blueprint derived from DlgConditionCustom (or DlgConditionCustomHideCategories)\n2. Override IsConditionMet\n3. Return true if you want the condition to succeed or false otherwise" },
		{ "EventCall.Comment", "// A named condition call.\n// Calls CheckCondition on the Participant\n" },
		{ "EventCall.DisplayName", "Check Dialogue Named Condition" },
		{ "EventCall.Name", "EDlgConditionType::EventCall" },
		{ "EventCall.ToolTip", "A named condition call.\nCalls CheckCondition on the Participant" },
		{ "FloatCall.Comment", "// Calls GetFloatValue on the Participant\n" },
		{ "FloatCall.DisplayName", "Check Dialogue Float Value" },
		{ "FloatCall.Name", "EDlgConditionType::FloatCall" },
		{ "FloatCall.ToolTip", "Calls GetFloatValue on the Participant" },
		{ "HasSatisfiedChild.Comment", "// Checks if the target node has any satisfied child\n" },
		{ "HasSatisfiedChild.DisplayName", "Has satisfied child?" },
		{ "HasSatisfiedChild.Name", "EDlgConditionType::HasSatisfiedChild" },
		{ "HasSatisfiedChild.ToolTip", "Checks if the target node has any satisfied child" },
		{ "IntCall.Comment", "// Calls GetIntValue on the Participant\n" },
		{ "IntCall.DisplayName", "Check Dialogue Int Value" },
		{ "IntCall.Name", "EDlgConditionType::IntCall" },
		{ "IntCall.ToolTip", "Calls GetIntValue on the Participant" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "NameCall.Comment", "// Calls GetNameValue on the Participant\n" },
		{ "NameCall.DisplayName", "Check Dialogue Name Value" },
		{ "NameCall.Name", "EDlgConditionType::NameCall" },
		{ "NameCall.ToolTip", "Calls GetNameValue on the Participant" },
		{ "ToolTip", "The Type of condition FDlgCondition is based upon" },
		{ "WasNodeVisited.Comment", "// Checks if the target node was already visited\n" },
		{ "WasNodeVisited.DisplayName", "Was node already visited?" },
		{ "WasNodeVisited.Name", "EDlgConditionType::WasNodeVisited" },
		{ "WasNodeVisited.ToolTip", "Checks if the target node was already visited" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgConditionType::IntCall", (int64)EDlgConditionType::IntCall },
		{ "EDlgConditionType::FloatCall", (int64)EDlgConditionType::FloatCall },
		{ "EDlgConditionType::BoolCall", (int64)EDlgConditionType::BoolCall },
		{ "EDlgConditionType::NameCall", (int64)EDlgConditionType::NameCall },
		{ "EDlgConditionType::EventCall", (int64)EDlgConditionType::EventCall },
		{ "EDlgConditionType::ClassIntVariable", (int64)EDlgConditionType::ClassIntVariable },
		{ "EDlgConditionType::ClassFloatVariable", (int64)EDlgConditionType::ClassFloatVariable },
		{ "EDlgConditionType::ClassBoolVariable", (int64)EDlgConditionType::ClassBoolVariable },
		{ "EDlgConditionType::ClassNameVariable", (int64)EDlgConditionType::ClassNameVariable },
		{ "EDlgConditionType::WasNodeVisited", (int64)EDlgConditionType::WasNodeVisited },
		{ "EDlgConditionType::HasSatisfiedChild", (int64)EDlgConditionType::HasSatisfiedChild },
		{ "EDlgConditionType::Custom", (int64)EDlgConditionType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgConditionType",
	"EDlgConditionType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgConditionType;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgConditionType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgConditionType.OuterSingleton)
		{
			ZRIE_EDlgConditionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgConditionType, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgConditionType"));
		}
		return ZRIE_EDlgConditionType.OuterSingleton;
	}
	if (!ZRIE_EDlgConditionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgConditionType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgConditionType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgConditionType ***********************************************************

// ********** Begin Enum EDlgOperation *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgOperation_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgOperation>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgOperation(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Operation the return value of a IntCall/FloatCall is checked with\n" },
		{ "Equal.DisplayName", "== (Is Equal To)" },
		{ "Equal.Name", "EDlgOperation::Equal" },
		{ "Greater.DisplayName", ">  (Is Greater Than)" },
		{ "Greater.Name", "EDlgOperation::Greater" },
		{ "GreaterOrEqual.DisplayName", ">= (Is Greater Than Or Equal To)" },
		{ "GreaterOrEqual.Name", "EDlgOperation::GreaterOrEqual" },
		{ "Less.DisplayName", "<  (Is Less Than)" },
		{ "Less.Name", "EDlgOperation::Less" },
		{ "LessOrEqual.DisplayName", "<= (Is Less Than Or Equal To)" },
		{ "LessOrEqual.Name", "EDlgOperation::LessOrEqual" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "NotEqual.DisplayName", "!= (Is Not Equal To)" },
		{ "NotEqual.Name", "EDlgOperation::NotEqual" },
		{ "ToolTip", "Operation the return value of a IntCall/FloatCall is checked with" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgOperation::Equal", (int64)EDlgOperation::Equal },
		{ "EDlgOperation::NotEqual", (int64)EDlgOperation::NotEqual },
		{ "EDlgOperation::Less", (int64)EDlgOperation::Less },
		{ "EDlgOperation::LessOrEqual", (int64)EDlgOperation::LessOrEqual },
		{ "EDlgOperation::Greater", (int64)EDlgOperation::Greater },
		{ "EDlgOperation::GreaterOrEqual", (int64)EDlgOperation::GreaterOrEqual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgOperation",
	"EDlgOperation",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgOperation;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgOperation(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgOperation.OuterSingleton)
		{
			ZRIE_EDlgOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgOperation, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgOperation"));
		}
		return ZRIE_EDlgOperation.OuterSingleton;
	}
	if (!ZRIE_EDlgOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgOperation.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgOperation.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgOperation ***************************************************************

// ********** Begin Enum EDlgCompare ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_DlgSystem_EDlgCompare_Statics
template<> DLGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDlgCompare>()
{
	return Z_Construct_UEnum_DlgSystem_EDlgCompare(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Type of value the participant's value is checked against\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToClassVariable.Comment", "// Compares against a Participant Class Variable\n" },
		{ "ToClassVariable.DisplayName", "Compare to Class Variable" },
		{ "ToClassVariable.Name", "EDlgCompare::ToClassVariable" },
		{ "ToClassVariable.ToolTip", "Compares against a Participant Class Variable" },
		{ "ToConst.Comment", "// Compares against a constat value\n" },
		{ "ToConst.DisplayName", "Compare to Constant" },
		{ "ToConst.Name", "EDlgCompare::ToConst" },
		{ "ToConst.ToolTip", "Compares against a constat value" },
		{ "ToolTip", "Type of value the participant's value is checked against" },
		{ "ToVariable.Comment", "// Compares against a Dialogue Value\n" },
		{ "ToVariable.DisplayName", "Compare to Dialogue Value" },
		{ "ToVariable.Name", "EDlgCompare::ToVariable" },
		{ "ToVariable.ToolTip", "Compares against a Dialogue Value" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDlgCompare::ToConst", (int64)EDlgCompare::ToConst },
		{ "EDlgCompare::ToVariable", (int64)EDlgCompare::ToVariable },
		{ "EDlgCompare::ToClassVariable", (int64)EDlgCompare::ToClassVariable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	"EDlgCompare",
	"EDlgCompare",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDlgCompare;
UEnum* Z_Construct_UEnum_DlgSystem_EDlgCompare(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDlgCompare.OuterSingleton)
		{
			ZRIE_EDlgCompare.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgCompare, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("EDlgCompare"));
		}
		return ZRIE_EDlgCompare.OuterSingleton;
	}
	if (!ZRIE_EDlgCompare.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDlgCompare.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDlgCompare.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDlgCompare *****************************************************************

// ********** Begin ScriptStruct FDlgCondition *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDlgCondition_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDlgCondition>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDlgCondition); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A condition is a logical operation which is evaluated based on a participant or on the local (context based) or global dialogue memory.\n// More conditions are stored together in condition arrays in FDlgEdge and in UDlgNode, the node (or the edge's target node) is only visitable\n// if the condition array is satisfied\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "A condition is a logical operation which is evaluated based on a participant or on the local (context based) or global dialogue memory.\nMore conditions are stored together in condition arrays in FDlgEdge and in UDlgNode, the node (or the edge's target node) is only visitable\nif the condition array is satisfied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Defines the way the condition is interpreted inside the condition array\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Defines the way the condition is interpreted inside the condition array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionType_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Type of the condition, defines the behavior\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Type of the condition, defines the behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Name of the participant (speaker) the event is called on.\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Name of the participant (speaker) the event is called on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallbackName_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Name of the variable or event, passed in the function call to the participant\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Name of the variable or event, passed in the function call to the participant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// The desired operation on the selected variable\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "The desired operation on the selected variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareType_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Type of value to check against\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Type of value to check against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherParticipantName_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Name of the other participant (speaker) the check is performed against (with some compare types)\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Name of the other participant (speaker) the check is performed against (with some compare types)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherVariableName_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Name of the variable of the other participant the value is checked against (with some compare types)\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Name of the variable of the other participant the value is checked against (with some compare types)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Node index for \"node already visited\" condition, the value the participant's int is checked against otherwise\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Node index for \"node already visited\" condition, the value the participant's int is checked against otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Float the participants float is checked against\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Float the participants float is checked against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameValue_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// FName the participants name is checked against\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "FName the participants name is checked against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoolValue_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Weather the result defined by the other params has to be true or false in order for this condition to be satisfied\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Weather the result defined by the other params has to be true or false in order for this condition to be satisfied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLongTermMemory_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// Weather to check if the node was visited at all (in the long term).\n// Set it to false to check if it was visited in the actual dialogue context\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "Weather to check if the node was visited at all (in the long term).\nSet it to false to check if it was visited in the actual dialogue context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// GUID for the Node, used for \"node already visited\"\n" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "GUID for the Node, used for \"node already visited\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCondition_MetaData[] = {
		{ "Category", "Dialogue|Condition" },
		{ "Comment", "// User Defined Condition, calls IsConditionMet on the custom condition object.\n//\n// 1. Create a new Blueprint derived from DlgConditionCustom (or DlgConditionCustomHideCategories)\n// 2. Override IsConditionMet\n// 3. Return true if you want the condition to succeed or false otherwise\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DlgCondition.h" },
		{ "ToolTip", "User Defined Condition, calls IsConditionMet on the custom condition object.\n\n1. Create a new Blueprint derived from DlgConditionCustom (or DlgConditionCustomHideCategories)\n2. Override IsConditionMet\n3. Return true if you want the condition to succeed or false otherwise" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDlgCondition constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Strength_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CallbackName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OtherParticipantName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OtherVariableName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
	static void NewProp_bBoolValue_SetBit(void* Obj)
	{
		((FDlgCondition*)Obj)->bBoolValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolValue;
	static void NewProp_bLongTermMemory_SetBit(void* Obj)
	{
		((FDlgCondition*)Obj)->bLongTermMemory = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLongTermMemory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GUID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDlgCondition constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDlgCondition Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Strength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, Strength), Z_Construct_UEnum_DlgSystem_EDlgConditionStrength, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 729c557be747483b77393a240fb9c6d3eba63378
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, ConditionType), Z_Construct_UEnum_DlgSystem_EDlgConditionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionType_MetaData), NewProp_ConditionType_MetaData) }; // 411d7bc7ce427c6017371385a47d9fc779e1752e
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, ParticipantName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantName_MetaData), NewProp_ParticipantName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_CallbackName = { "CallbackName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, CallbackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallbackName_MetaData), NewProp_CallbackName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, Operation), Z_Construct_UEnum_DlgSystem_EDlgOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 7338a08b932062a1ca02f890c7d7c9c1037f51e4
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CompareType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CompareType = { "CompareType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, CompareType), Z_Construct_UEnum_DlgSystem_EDlgCompare, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareType_MetaData), NewProp_CompareType_MetaData) }; // afeb29f99794a70c6b5dbe11bc930d7054090ff7
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OtherParticipantName = { "OtherParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, OtherParticipantName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherParticipantName_MetaData), NewProp_OtherParticipantName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_OtherVariableName = { "OtherVariableName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, OtherVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherVariableName_MetaData), NewProp_OtherVariableName_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, NameValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameValue_MetaData), NewProp_NameValue_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBoolValue = { "bBoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgCondition), &UHT_STATICS::NewProp_bBoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoolValue_MetaData), NewProp_bBoolValue_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLongTermMemory = { "bLongTermMemory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDlgCondition), &UHT_STATICS::NewProp_bLongTermMemory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLongTermMemory_MetaData), NewProp_bLongTermMemory_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GUID_MetaData), NewProp_GUID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CustomCondition = { "CustomCondition", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FDlgCondition, CustomCondition), Z_Construct_UClass_UDlgConditionCustom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCondition_MetaData), NewProp_CustomCondition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Strength_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConditionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConditionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CallbackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CompareType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CompareType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NameValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLongTermMemory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomCondition,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDlgCondition Property Definitions **********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
	nullptr,
	&NewStructOps,
	"DlgCondition",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDlgCondition>(),
	alignof(FDlgCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDlgCondition;
UScriptStruct* Z_Construct_UScriptStruct_FDlgCondition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDlgCondition.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDlgCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgCondition, (UObject*)Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase::Outer), TEXT("DlgCondition"));
		}
		return Z_Registration_Info_UScriptStruct_FDlgCondition.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDlgCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDlgCondition.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDlgCondition.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDlgCondition *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgCondition_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_DlgSystem_EDlgConditionStrength, TEXT("EDlgConditionStrength"), &ZRIE_EDlgConditionStrength, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1922848123U) },
		{ Z_Construct_UEnum_DlgSystem_EDlgConditionType, TEXT("EDlgConditionType"), &ZRIE_EDlgConditionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1092451271U) },
		{ Z_Construct_UEnum_DlgSystem_EDlgOperation, TEXT("EDlgOperation"), &ZRIE_EDlgOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1933090955U) },
		{ Z_Construct_UEnum_DlgSystem_EDlgCompare, TEXT("EDlgCompare"), &ZRIE_EDlgCompare, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2951424505U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDlgCondition, Z_Construct_UScriptStruct_FDlgCondition_Statics::NewStructOps, TEXT("DlgCondition"),&Z_Registration_Info_UScriptStruct_FDlgCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDlgCondition), 843816423U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_DlgCondition_h__Script_DlgSystem_9c33d937fac314a9ba014614a40e5180c1116ae2{
	TEXT("/Script/DlgSystem"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
