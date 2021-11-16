// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyFileDialog/Public/EFDCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFDCore() {}
// Cross Module References
	EASYFILEDIALOG_API UEnum* Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags();
	UPackage* Z_Construct_UPackage__Script_EasyFileDialog();
// End Cross Module References
	static UEnum* EEasyFileDialogFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags, Z_Construct_UPackage__Script_EasyFileDialog(), TEXT("EEasyFileDialogFlags"));
		}
		return Singleton;
	}
	template<> EASYFILEDIALOG_API UEnum* StaticEnum<EEasyFileDialogFlags>()
	{
		return EEasyFileDialogFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEasyFileDialogFlags(EEasyFileDialogFlags_StaticEnum, TEXT("/Script/EasyFileDialog"), TEXT("EEasyFileDialogFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Hash() { return 783357260U; }
	UEnum* Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EasyFileDialog();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEasyFileDialogFlags"), 0, Get_Z_Construct_UEnum_EasyFileDialog_EEasyFileDialogFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Single", (int64)Single },
				{ "Multiple", (int64)Multiple },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Flag Enum for saving multiple or single file's\n" },
				{ "ModuleRelativePath", "Public/EFDCore.h" },
				{ "Multiple.Comment", "// No flags\n" },
				{ "Multiple.Name", "Multiple" },
				{ "Multiple.ToolTip", "No flags" },
				{ "Single.Name", "Single" },
				{ "ToolTip", "Flag Enum for saving multiple or single file's" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EasyFileDialog,
				nullptr,
				"EEasyFileDialogFlags",
				"EEasyFileDialogFlags",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
