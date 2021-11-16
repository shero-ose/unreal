// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFileDialog/Public/EasyFileDialogBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyFileDialogBPLibrary() {}
// Cross Module References
	EASYFILEDIALOG_API UClass* Z_Construct_UClass_UEasyFileDialogBPLibrary_NoRegister();
	EASYFILEDIALOG_API UClass* Z_Construct_UClass_UEasyFileDialogBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EasyFileDialog();
// End Cross Module References
	DEFINE_FUNCTION(UEasyFileDialogBPLibrary::execEasyFileDialogSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UEasyFileDialogBPLibrary::EasyFileDialogSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UEasyFileDialogBPLibrary::StaticRegisterNativesUEasyFileDialogBPLibrary()
	{
		UClass* Class = UEasyFileDialogBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EasyFileDialogSampleFunction", &UEasyFileDialogBPLibrary::execEasyFileDialogSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics
	{
		struct EasyFileDialogBPLibrary_eventEasyFileDialogSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFileDialogBPLibrary_eventEasyFileDialogSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyFileDialogBPLibrary_eventEasyFileDialogSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyFileDialogTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "EasyFileDialog sample test testing" },
		{ "ModuleRelativePath", "Public/EasyFileDialogBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyFileDialogBPLibrary, nullptr, "EasyFileDialogSampleFunction", nullptr, nullptr, sizeof(EasyFileDialogBPLibrary_eventEasyFileDialogSampleFunction_Parms), Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEasyFileDialogBPLibrary_NoRegister()
	{
		return UEasyFileDialogBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyFileDialog,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyFileDialogBPLibrary_EasyFileDialogSampleFunction, "EasyFileDialogSampleFunction" }, // 2482941726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "EasyFileDialogBPLibrary.h" },
		{ "ModuleRelativePath", "Public/EasyFileDialogBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyFileDialogBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::ClassParams = {
		&UEasyFileDialogBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEasyFileDialogBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEasyFileDialogBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEasyFileDialogBPLibrary, 875228683);
	template<> EASYFILEDIALOG_API UClass* StaticClass<UEasyFileDialogBPLibrary>()
	{
		return UEasyFileDialogBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEasyFileDialogBPLibrary(Z_Construct_UClass_UEasyFileDialogBPLibrary, &UEasyFileDialogBPLibrary::StaticClass, TEXT("/Script/EasyFileDialog"), TEXT("UEasyFileDialogBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyFileDialogBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
