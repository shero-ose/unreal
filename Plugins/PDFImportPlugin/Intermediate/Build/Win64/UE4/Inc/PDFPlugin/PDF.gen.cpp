// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PDFPlugin/Public/PDF.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDF() {}
// Cross Module References
	PDFPLUGIN_API UClass* Z_Construct_UClass_UPDFInfo_NoRegister();
	PDFPLUGIN_API UClass* Z_Construct_UClass_UPDFInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PDFPlugin();
// End Cross Module References
	void UPDFInfo::StaticRegisterNativesUPDFInfo()
	{
	}
	UClass* Z_Construct_UClass_UPDFInfo_NoRegister()
	{
		return UPDFInfo::StaticClass();
	}
	struct Z_Construct_UClass_UPDFInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDFInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PDFPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PDF.h" },
		{ "ModuleRelativePath", "Public/PDF.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFInfo_Statics::NewProp_PageCount_MetaData[] = {
		{ "Category", "PDFInfo" },
		{ "ModuleRelativePath", "Public/PDF.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPDFInfo_Statics::NewProp_PageCount = { "PageCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDFInfo, PageCount), METADATA_PARAMS(Z_Construct_UClass_UPDFInfo_Statics::NewProp_PageCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFInfo_Statics::NewProp_PageCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDFInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDFInfo_Statics::NewProp_PageCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDFInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDFInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPDFInfo_Statics::ClassParams = {
		&UPDFInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPDFInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPDFInfo_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDFInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDFInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPDFInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPDFInfo, 3523525131);
	template<> PDFPLUGIN_API UClass* StaticClass<UPDFInfo>()
	{
		return UPDFInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPDFInfo(Z_Construct_UClass_UPDFInfo, &UPDFInfo::StaticClass, TEXT("/Script/PDFPlugin"), TEXT("UPDFInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDFInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
