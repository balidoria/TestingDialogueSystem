// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Nodes/DlgNode_Speech.h"
#include "DlgSystem/DlgTextArgument.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDlgNode_Speech() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USoundBase(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_DlgSystem(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Speech(ETypeConstructPhase);
DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgTextArgument(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNodeData(ETypeConstructPhase);
DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Speech(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDlgNode_Speech Function IsVirtualParent *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent_Statics
struct UHT_STATICS
{
	struct DlgNode_Speech_eventIsVirtualParent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Is this node a virtual parent?\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Is this node a virtual parent?" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsVirtualParent constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DlgNode_Speech_eventIsVirtualParent_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsVirtualParent constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsVirtualParent Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DlgNode_Speech_eventIsVirtualParent_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsVirtualParent Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDlgNode_Speech, nullptr, "IsVirtualParent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DlgNode_Speech_eventIsVirtualParent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DlgNode_Speech_eventIsVirtualParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDlgNode_Speech::execIsVirtualParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVirtualParent();
	P_NATIVE_END;
}
// ********** End Class UDlgNode_Speech Function IsVirtualParent ***********************************

// ********** Begin Class UDlgNode_Speech **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDlgNode_Speech_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Normal dialogue node - someone says something.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Speech.h" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Normal dialogue node - someone says something." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVirtualParent_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Make this Node act like a fake parent (proxy) to other child nodes (makes it get the granchildren).\n// On reevaluate children, it does not get the direct children but the children of the first satisfied direct child node (grandchildren).\n//\n// NOTE: It should have at least one satisfied child otherwise the Dialogue is terminated.\n// NOTE: The first satisfied direct child will be added to the visited history when this node is entered.\n// NOTE: Most Common usage for this is to make loops.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Make this Node act like a fake parent (proxy) to other child nodes (makes it get the granchildren).\nOn reevaluate children, it does not get the direct children but the children of the first satisfied direct child node (grandchildren).\n\nNOTE: It should have at least one satisfied child otherwise the Dialogue is terminated.\nNOTE: The first satisfied direct child will be added to the visited history when this node is entered.\nNOTE: Most Common usage for this is to make loops." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// If true the first satisfied Direct Child of this Virtual Parent Node will fire its Enter Events after this node is entered (and fires its enter events).\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "If true the first satisfied Direct Child of this Virtual Parent Node will fire its Enter Events after this node is entered (and fires its enter events)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Text that will appear when this node participant name speaks to someone else.\n// If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that will appear when this node participant name speaks to someone else.\nIf you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextArguments_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "If you want replaceable portions inside your Text nodes just add {identifier} inside it and set the value it should have at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerState_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// State of the speaker attached to this node. Passed to the GetParticipantIcon function.\n" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "State of the speaker attached to this node. Passed to the GetParticipantIcon function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// User Defined Custom Node data you can customize yourself with your own data types\n//\n// Create a new Blueprint derived from DlgNodeData (or DlgNodeDataHideCategories)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "User Defined Custom Node data you can customize yourself with your own data types\n\nCreate a new Blueprint derived from DlgNodeData (or DlgNodeDataHideCategories)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceSoundWave_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Voice attached to this node. The Sound Wave variant.\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Voice attached to this node. The Sound Wave variant.\nNOTE: You should probably use the NodeData" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceDialogueWave_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Voice attached to this node. The Dialogue Wave variant. Only the first wave from the dialogue context array should be used.\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Voice attached to this node. The Dialogue Wave variant. Only the first wave from the dialogue context array should be used.\nNOTE: You should probably use the NodeData" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenericData_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Any generic object you would like\n// NOTE: You should probably use the NodeData\n" },
		{ "DlgSaveOnlyReference", "" },
		{ "ModuleRelativePath", "Nodes/DlgNode_Speech.h" },
		{ "ToolTip", "Any generic object you would like\nNOTE: You should probably use the NodeData" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDlgNode_Speech constinit property declarations **************************
	static void NewProp_bIsVirtualParent_SetBit(void* Obj)
	{
		((UDlgNode_Speech*)Obj)->bIsVirtualParent = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVirtualParent;
	static void NewProp_bVirtualParentFireDirectChildEnterEvents_SetBit(void* Obj)
	{
		((UDlgNode_Speech*)Obj)->bVirtualParentFireDirectChildEnterEvents = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualParentFireDirectChildEnterEvents;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextArguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextArguments;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceSoundWave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceDialogueWave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenericData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDlgNode_Speech constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsVirtualParent"), .Pointer = &UDlgNode_Speech::execIsVirtualParent },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_Speech_IsVirtualParent, "IsVirtualParent" }, // 7938acece10977ddc5b8389b2d7ad3ce2cfeb01e
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Speech>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDlgNode_Speech Property Definitions *************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsVirtualParent = { "bIsVirtualParent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgNode_Speech), &UHT_STATICS::NewProp_bIsVirtualParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVirtualParent_MetaData), NewProp_bIsVirtualParent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bVirtualParentFireDirectChildEnterEvents = { "bVirtualParentFireDirectChildEnterEvents", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDlgNode_Speech), &UHT_STATICS::NewProp_bVirtualParentFireDirectChildEnterEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData), NewProp_bVirtualParentFireDirectChildEnterEvents_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_Speech, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextArguments_Inner = { "TextArguments", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDlgTextArgument, METADATA_PARAMS(0, nullptr) }; // 342b029f7e780e0d97520b4ac862042aa0725f4e
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TextArguments = { "TextArguments", nullptr, (EPropertyFlags)0x0020088000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_Speech, TextArguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextArguments_MetaData), NewProp_TextArguments_MetaData) }; // 342b029f7e780e0d97520b4ac862042aa0725f4e
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SpeakerState = { "SpeakerState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_Speech, SpeakerState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerState_MetaData), NewProp_SpeakerState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0022080000080009, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_Speech, NodeData), Z_Construct_UClass_UDlgNodeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeData_MetaData), NewProp_NodeData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_VoiceSoundWave = { "VoiceSoundWave", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_Speech, VoiceSoundWave), Z_Construct_UClass_USoundBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceSoundWave_MetaData), NewProp_VoiceSoundWave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_VoiceDialogueWave = { "VoiceDialogueWave", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_Speech, VoiceDialogueWave), Z_Construct_UClass_UDialogueWave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceDialogueWave_MetaData), NewProp_VoiceDialogueWave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GenericData = { "GenericData", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UDlgNode_Speech, GenericData), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenericData_MetaData), NewProp_GenericData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsVirtualParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bVirtualParentFireDirectChildEnterEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextArguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextArguments,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpeakerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VoiceSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VoiceDialogueWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GenericData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDlgNode_Speech Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDlgNode,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_DlgSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDlgNode_Speech,
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
static void UDlgNode_Speech_StaticRegisterNativesUDlgNode_Speech()
{
	UClass* Class = UDlgNode_Speech::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDlgNode_Speech;
UClass* Z_Construct_UClass_UDlgNode_Speech(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDlgNode_Speech;
		if (!Z_Registration_Info_UClass_UDlgNode_Speech.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DlgNode_Speech"),
				Z_Registration_Info_UClass_UDlgNode_Speech.InnerSingleton,
				UDlgNode_Speech_StaticRegisterNativesUDlgNode_Speech,
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
		return Z_Registration_Info_UClass_UDlgNode_Speech.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDlgNode_Speech.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDlgNode_Speech.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDlgNode_Speech.OuterSingleton;
}
#undef UHT_STATICS
UDlgNode_Speech::UDlgNode_Speech(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDlgNode_Speech);
UDlgNode_Speech::~UDlgNode_Speech() {}
// ********** End Class UDlgNode_Speech ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_Speech_h__Script_DlgSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDlgNode_Speech, TEXT("UDlgNode_Speech"), &Z_Registration_Info_UClass_UDlgNode_Speech, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDlgNode_Speech), 2117124352U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DlgSystem_Source_DlgSystem_Nodes_DlgNode_Speech_h__Script_DlgSystem_2d9584ec1a93300acdb950705a859284ebbe6cd3{
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
