// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PDFPluginEditor/Public/PDFImportOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDFImportOptions() {}
// Cross Module References
	PDFPLUGINEDITOR_API UClass* Z_Construct_UClass_UPDFImportOptions_NoRegister();
	PDFPLUGINEDITOR_API UClass* Z_Construct_UClass_UPDFImportOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PDFPluginEditor();
// End Cross Module References
	void UPDFImportOptions::StaticRegisterNativesUPDFImportOptions()
	{
	}
	UClass* Z_Construct_UClass_UPDFImportOptions_NoRegister()
	{
		return UPDFImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UPDFImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecifyPageRange_MetaData[];
#endif
		static void NewProp_SpecifyPageRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpecifyPageRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FirstPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LastPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ppi_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ppi;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDFImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PDFPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFImportOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PDFImportOptions.h" },
		{ "ModuleRelativePath", "Public/PDFImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_SpecifyPageRange_MetaData[] = {
		{ "Category", "PageRange" },
		{ "ModuleRelativePath", "Public/PDFImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_SpecifyPageRange_SetBit(void* Obj)
	{
		((UPDFImportOptions*)Obj)->SpecifyPageRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_SpecifyPageRange = { "SpecifyPageRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPDFImportOptions), &Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_SpecifyPageRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_SpecifyPageRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_SpecifyPageRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_FirstPage_MetaData[] = {
		{ "Category", "PageRange" },
		{ "ClampMin", "1" },
		{ "EditCondition", "SpecifyPageRange" },
		{ "ModuleRelativePath", "Public/PDFImportOptions.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_FirstPage = { "FirstPage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDFImportOptions, FirstPage), METADATA_PARAMS(Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_FirstPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_FirstPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_LastPage_MetaData[] = {
		{ "Category", "PageRange" },
		{ "ClampMin", "1" },
		{ "EditCondition", "SpecifyPageRange" },
		{ "ModuleRelativePath", "Public/PDFImportOptions.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_LastPage = { "LastPage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDFImportOptions, LastPage), METADATA_PARAMS(Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_LastPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_LastPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_Ppi_MetaData[] = {
		{ "Category", "Ppi" },
		{ "ModuleRelativePath", "Public/PDFImportOptions.h" },
		{ "UIMax", "600" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_Ppi = { "Ppi", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDFImportOptions, Ppi), METADATA_PARAMS(Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_Ppi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_Ppi_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDFImportOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_SpecifyPageRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_FirstPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_LastPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDFImportOptions_Statics::NewProp_Ppi,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDFImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDFImportOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPDFImportOptions_Statics::ClassParams = {
		&UPDFImportOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPDFImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPDFImportOptions_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDFImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDFImportOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPDFImportOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPDFImportOptions, 3479871532);
	template<> PDFPLUGINEDITOR_API UClass* StaticClass<UPDFImportOptions>()
	{
		return UPDFImportOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPDFImportOptions(Z_Construct_UClass_UPDFImportOptions, &UPDFImportOptions::StaticClass, TEXT("/Script/PDFPluginEditor"), TEXT("UPDFImportOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDFImportOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
