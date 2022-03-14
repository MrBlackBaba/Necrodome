// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DU_Project/Player/DUCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDUCameraActor() {}
// Cross Module References
	DU_PROJECT_API UClass* Z_Construct_UClass_ADUCameraActor_NoRegister();
	DU_PROJECT_API UClass* Z_Construct_UClass_ADUCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_DU_Project();
// End Cross Module References
	void ADUCameraActor::StaticRegisterNativesADUCameraActor()
	{
	}
	UClass* Z_Construct_UClass_ADUCameraActor_NoRegister()
	{
		return ADUCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_ADUCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADUCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADUCameraActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "Player/DUCameraActor.h" },
		{ "ModuleRelativePath", "Player/DUCameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADUCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADUCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADUCameraActor_Statics::ClassParams = {
		&ADUCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADUCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADUCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADUCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADUCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADUCameraActor, 2675737140);
	template<> DU_PROJECT_API UClass* StaticClass<ADUCameraActor>()
	{
		return ADUCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADUCameraActor(Z_Construct_UClass_ADUCameraActor, &ADUCameraActor::StaticClass, TEXT("/Script/DU_Project"), TEXT("ADUCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADUCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
