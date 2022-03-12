// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DU_Project/Player/DUPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDUPlayer() {}
// Cross Module References
	DU_PROJECT_API UClass* Z_Construct_UClass_ADUPlayer_NoRegister();
	DU_PROJECT_API UClass* Z_Construct_UClass_ADUPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DU_Project();
// End Cross Module References
	void ADUPlayer::StaticRegisterNativesADUPlayer()
	{
	}
	UClass* Z_Construct_UClass_ADUPlayer_NoRegister()
	{
		return ADUPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ADUPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADUPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADUPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/DUPlayer.h" },
		{ "ModuleRelativePath", "Player/DUPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADUPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADUPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADUPlayer_Statics::ClassParams = {
		&ADUPlayer::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ADUPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADUPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADUPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADUPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADUPlayer, 652871784);
	template<> DU_PROJECT_API UClass* StaticClass<ADUPlayer>()
	{
		return ADUPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADUPlayer(Z_Construct_UClass_ADUPlayer, &ADUPlayer::StaticClass, TEXT("/Script/DU_Project"), TEXT("ADUPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADUPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
