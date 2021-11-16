// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/TextureFactory.h"
#include <Factories/Factory.h>
#include <Factories.h>
#include <HAL/FileManager.h>
#include "EditorReimportHandler.h"
#include "PDFImportOptions.h"
#include "PDFConverter.h"
#include "PDFImporter.generated.h"


UCLASS()
class UPDFImporter : public UTextureFactory
{
	GENERATED_BODY()

public:

	UPDFImporter(const FObjectInitializer& ObjectInitializer);
	virtual bool DoesSupportClass(UClass* Class) override;
	virtual UObject* FactoryCreateFile(
		UClass* InClass,
		UObject* InParent,
		FName InName,
		EObjectFlags Flags,
		const FString& Filename,
		const TCHAR* Parms,
		FFeedbackContext* Warn,
		bool& bOutOperationCanceled
	)override;
	void ShowImportOptionWindow(TSharedPtr<SPDFImportOptions>& Options, const FString& Filename, UPDFImportOptions*& Result);
	
private: 
	FName GeneratePageI(FPDF_DOCUMENT PDF, FName Filename, char* BMPPath, int Index, int Ppi, int NumberSize);
	int GetNumberSize(int PageCount, int NumberSize);
};
