// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Balls/Items/RollaBallItemBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollaBallItemBase() {}
// Cross Module References
	BALLS_API UClass* Z_Construct_UClass_ARollaBallItemBase();
	BALLS_API UClass* Z_Construct_UClass_ARollaBallItemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_Balls();
// End Cross Module References
	DEFINE_FUNCTION(ARollaBallItemBase::execCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Collected_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARollaBallItemBase::execOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_ARollaBallItemBase_Collected = FName(TEXT("Collected"));
	void ARollaBallItemBase::Collected()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARollaBallItemBase_Collected),NULL);
	}
	void ARollaBallItemBase::StaticRegisterNativesARollaBallItemBase()
	{
		UClass* Class = ARollaBallItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collected", &ARollaBallItemBase::execCollected },
			{ "OverlapBegin", &ARollaBallItemBase::execOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARollaBallItemBase_Collected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARollaBallItemBase_Collected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/RollaBallItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARollaBallItemBase_Collected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARollaBallItemBase, nullptr, "Collected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallItemBase_Collected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARollaBallItemBase_Collected_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ARollaBallItemBase_Collected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARollaBallItemBase_Collected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics
	{
		struct RollaBallItemBase_eventOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallItemBase_eventOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallItemBase_eventOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallItemBase_eventOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallItemBase_eventOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((RollaBallItemBase_eventOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RollaBallItemBase_eventOverlapBegin_Parms), &Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RollaBallItemBase_eventOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/RollaBallItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARollaBallItemBase, nullptr, "OverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::RollaBallItemBase_eventOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::RollaBallItemBase_eventOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARollaBallItemBase);
	UClass* Z_Construct_UClass_ARollaBallItemBase_NoRegister()
	{
		return ARollaBallItemBase::StaticClass();
	}
	struct Z_Construct_UClass_ARollaBallItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARollaBallItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Balls,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallItemBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARollaBallItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARollaBallItemBase_Collected, "Collected" }, // 1192679898
		{ &Z_Construct_UFunction_ARollaBallItemBase_OverlapBegin, "OverlapBegin" }, // 1696550684
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallItemBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallItemBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/RollaBallItemBase.h" },
		{ "ModuleRelativePath", "Items/RollaBallItemBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallItemBase_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Define Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items/RollaBallItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define Components" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollaBallItemBase_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARollaBallItemBase, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallItemBase_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_ARollaBallItemBase_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARollaBallItemBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallItemBase_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollaBallItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollaBallItemBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARollaBallItemBase_Statics::ClassParams = {
		&ARollaBallItemBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARollaBallItemBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallItemBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARollaBallItemBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallItemBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARollaBallItemBase()
	{
		if (!Z_Registration_Info_UClass_ARollaBallItemBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARollaBallItemBase.OuterSingleton, Z_Construct_UClass_ARollaBallItemBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARollaBallItemBase.OuterSingleton;
	}
	template<> BALLS_API UClass* StaticClass<ARollaBallItemBase>()
	{
		return ARollaBallItemBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARollaBallItemBase);
	ARollaBallItemBase::~ARollaBallItemBase() {}
	struct Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Items_RollaBallItemBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Items_RollaBallItemBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARollaBallItemBase, ARollaBallItemBase::StaticClass, TEXT("ARollaBallItemBase"), &Z_Registration_Info_UClass_ARollaBallItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARollaBallItemBase), 657415815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Items_RollaBallItemBase_h_2531608043(TEXT("/Script/Balls"),
		Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Items_RollaBallItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_visha_OneDrive_Documents_GitHub_RoallaBall_Balls_Source_Balls_Items_RollaBallItemBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
