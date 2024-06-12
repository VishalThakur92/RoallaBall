// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Balls/Game/RollaBallWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollaBallWidget() {}
// Cross Module References
	BALLS_API UClass* Z_Construct_UClass_URollaBallWidget();
	BALLS_API UClass* Z_Construct_UClass_URollaBallWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Balls();
// End Cross Module References
	struct RollaBallWidget_eventSetItemText_Parms
	{
		int32 ItemsCollected;
		int32 ItemsInLevel;
	};
	static FName NAME_URollaBallWidget_SetItemText = FName(TEXT("SetItemText"));
	void URollaBallWidget::SetItemText(int32 ItemsCollected, int32 ItemsInLevel)
	{
		RollaBallWidget_eventSetItemText_Parms Parms;
		Parms.ItemsCollected=ItemsCollected;
		Parms.ItemsInLevel=ItemsInLevel;
		ProcessEvent(FindFunctionChecked(NAME_URollaBallWidget_SetItemText),&Parms);
	}
	void URollaBallWidget::StaticRegisterNativesURollaBallWidget()
	{
	}
	struct Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsCollected;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsInLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::NewProp_ItemsCollected = { "ItemsCollected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallWidget_eventSetItemText_Parms, ItemsCollected), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::NewProp_ItemsInLevel = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallWidget_eventSetItemText_Parms, ItemsInLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::NewProp_ItemsCollected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::NewProp_ItemsInLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/RollaBallWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URollaBallWidget, nullptr, "SetItemText", nullptr, nullptr, Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::PropPointers), sizeof(RollaBallWidget_eventSetItemText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::Function_MetaDataParams), Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::PropPointers) < 2048);
	static_assert(sizeof(RollaBallWidget_eventSetItemText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URollaBallWidget_SetItemText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URollaBallWidget_SetItemText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URollaBallWidget);
	UClass* Z_Construct_UClass_URollaBallWidget_NoRegister()
	{
		return URollaBallWidget::StaticClass();
	}
	struct Z_Construct_UClass_URollaBallWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URollaBallWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Balls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URollaBallWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URollaBallWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URollaBallWidget_SetItemText, "SetItemText" }, // 3090022290
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URollaBallWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URollaBallWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Game/RollaBallWidget.h" },
		{ "ModuleRelativePath", "Game/RollaBallWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URollaBallWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URollaBallWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URollaBallWidget_Statics::ClassParams = {
		&URollaBallWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URollaBallWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_URollaBallWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URollaBallWidget()
	{
		if (!Z_Registration_Info_UClass_URollaBallWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URollaBallWidget.OuterSingleton, Z_Construct_UClass_URollaBallWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URollaBallWidget.OuterSingleton;
	}
	template<> BALLS_API UClass* StaticClass<URollaBallWidget>()
	{
		return URollaBallWidget::StaticClass();
	}
	URollaBallWidget::URollaBallWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URollaBallWidget);
	URollaBallWidget::~URollaBallWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_RollaBallWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_RollaBallWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URollaBallWidget, URollaBallWidget::StaticClass, TEXT("URollaBallWidget"), &Z_Registration_Info_UClass_URollaBallWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URollaBallWidget), 2323552498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_RollaBallWidget_h_3290411209(TEXT("/Script/Balls"),
		Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_RollaBallWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Game_RollaBallWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
