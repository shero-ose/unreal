// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PDFPlugin/Public/PDFLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDFLoader() {}
// Cross Module References
	PDFPLUGIN_API UClass* Z_Construct_UClass_UPDFLoader_NoRegister();
	PDFPLUGIN_API UClass* Z_Construct_UClass_UPDFLoader();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PDFPlugin();
	PDFPLUGIN_API UClass* Z_Construct_UClass_UPDFInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPDFLoader::execGetPDFPage)
	{
		P_GET_OBJECT(UPDFInfo,Z_Param_Pdf);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_Ppi);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UPDFLoader::GetPDFPage(Z_Param_Pdf,Z_Param_PageIndex,Z_Param_Ppi);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDFLoader::execLoadPDF)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPDFInfo**)Z_Param__Result=UPDFLoader::LoadPDF(Z_Param_Path);
		P_NATIVE_END;
	}
	void UPDFLoader::StaticRegisterNativesUPDFLoader()
	{
		UClass* Class = UPDFLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPDFPage", &UPDFLoader::execGetPDFPage },
			{ "LoadPDF", &UPDFLoader::execLoadPDF },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics
	{
		struct PDFLoader_eventGetPDFPage_Parms
		{
			const UPDFInfo* Pdf;
			int32 PageIndex;
			int32 Ppi;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pdf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pdf;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ppi;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_Pdf_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_Pdf = { "Pdf", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFLoader_eventGetPDFPage_Parms, Pdf), Z_Construct_UClass_UPDFInfo_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_Pdf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_Pdf_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFLoader_eventGetPDFPage_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_Ppi = { "Ppi", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFLoader_eventGetPDFPage_Parms, Ppi), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFLoader_eventGetPDFPage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_Pdf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_PageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_Ppi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDFTools" },
		{ "CPP_Default_Ppi", "300" },
		{ "ModuleRelativePath", "Public/PDFLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFLoader, nullptr, "GetPDFPage", nullptr, nullptr, sizeof(PDFLoader_eventGetPDFPage_Parms), Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDFLoader_GetPDFPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPDFLoader_GetPDFPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics
	{
		struct PDFLoader_eventLoadPDF_Parms
		{
			FString Path;
			UPDFInfo* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFLoader_eventLoadPDF_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFLoader_eventLoadPDF_Parms, ReturnValue), Z_Construct_UClass_UPDFInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDFTools" },
		{ "Comment", "//Node allowing to convert a pdf's page to a bmp image\n" },
		{ "ModuleRelativePath", "Public/PDFLoader.h" },
		{ "ToolTip", "Node allowing to convert a pdf's page to a bmp image" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFLoader, nullptr, "LoadPDF", nullptr, nullptr, sizeof(PDFLoader_eventLoadPDF_Parms), Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDFLoader_LoadPDF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPDFLoader_LoadPDF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPDFLoader_NoRegister()
	{
		return UPDFLoader::StaticClass();
	}
	struct Z_Construct_UClass_UPDFLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDFLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PDFPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPDFLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPDFLoader_GetPDFPage, "GetPDFPage" }, // 4009765216
		{ &Z_Construct_UFunction_UPDFLoader_LoadPDF, "LoadPDF" }, // 2336632765
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFLoader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PDFLoader.h" },
		{ "ModuleRelativePath", "Public/PDFLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDFLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDFLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPDFLoader_Statics::ClassParams = {
		&UPDFLoader::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDFLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDFLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPDFLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPDFLoader, 1782193657);
	template<> PDFPLUGIN_API UClass* StaticClass<UPDFLoader>()
	{
		return UPDFLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPDFLoader(Z_Construct_UClass_UPDFLoader, &UPDFLoader::StaticClass, TEXT("/Script/PDFPlugin"), TEXT("UPDFLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDFLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
