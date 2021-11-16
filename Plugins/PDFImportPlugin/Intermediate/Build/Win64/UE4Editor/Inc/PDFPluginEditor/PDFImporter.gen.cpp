// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PDFPluginEditor/Public/PDFImporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDFImporter() {}
// Cross Module References
	PDFPLUGINEDITOR_API UClass* Z_Construct_UClass_UPDFImporter_NoRegister();
	PDFPLUGINEDITOR_API UClass* Z_Construct_UClass_UPDFImporter();
	UNREALED_API UClass* Z_Construct_UClass_UTextureFactory();
	UPackage* Z_Construct_UPackage__Script_PDFPluginEditor();
// End Cross Module References
	void UPDFImporter::StaticRegisterNativesUPDFImporter()
	{
	}
	UClass* Z_Construct_UClass_UPDFImporter_NoRegister()
	{
		return UPDFImporter::StaticClass();
	}
	struct Z_Construct_UClass_UPDFImporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDFImporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PDFPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFImporter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PDFImporter.h" },
		{ "ModuleRelativePath", "Public/PDFImporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDFImporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDFImporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPDFImporter_Statics::ClassParams = {
		&UPDFImporter::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDFImporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFImporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDFImporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPDFImporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPDFImporter, 2904287620);
	template<> PDFPLUGINEDITOR_API UClass* StaticClass<UPDFImporter>()
	{
		return UPDFImporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPDFImporter(Z_Construct_UClass_UPDFImporter, &UPDFImporter::StaticClass, TEXT("/Script/PDFPluginEditor"), TEXT("UPDFImporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDFImporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
