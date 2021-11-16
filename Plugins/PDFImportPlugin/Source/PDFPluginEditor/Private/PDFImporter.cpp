// Fill out your copyright notice in the Description page of Project Settings.


#include "PDFImporter.h"

#include <string>
#include <Editor.h>
#include <EditorFramework/AssetImportData.h>
#include "Factories/TextureFactory.h"
#include "Framework/Application/SlateApplication.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"
#include <stdio.h>


#define LOCTEXT_NAMESPACE "PDFFactory"


UPDFImporter::UPDFImporter(const FObjectInitializer& ObjectInitializer) : UTextureFactory::UTextureFactory(ObjectInitializer)
{
	SupportedClass = UTexture2D::StaticClass();
	Formats.Add(TEXT("pdf;PDF File"));

	bCreateNew = false;
	bEditorImport = true;
}

bool UPDFImporter::DoesSupportClass(UClass* Class)
{
	return (Class == UTexture2D::StaticClass());
}

UObject* UPDFImporter::FactoryCreateFile(
	UClass* InClass,
	UObject* InParent,
	FName InName,
	EObjectFlags Flags,
	const FString& Filename,
	const TCHAR* Parms,
	FFeedbackContext* Warn,
	bool& bOutOperationCanceled
)
{
	TSharedPtr<SPDFImportOptions> Options;
	UPDFImportOptions* Result = NewObject<UPDFImportOptions>();
	ShowImportOptionWindow(Options, Filename, Result);

	if (Options->ShouldImport())
	{
		FString BMPPath = (FString)FPlatformProcess::UserTempDir();
		BMPPath += "temp.bmp";
		std::string BMPPathStr = std::string(TCHAR_TO_UTF8(*BMPPath));
		FPDF_DOCUMENT Doc = LoadDocument(std::string(TCHAR_TO_UTF8(*Filename)).c_str()); 
		int PageCount = FPDF_GetPageCount(Doc);
		int NumberSize = GetNumberSize(PageCount, 0);
		if (!Result->SpecifyPageRange)
		{
			Result->FirstPage = 0;
			Result->LastPage = PageCount;
		}
		Result->LastPage = Result->SpecifyPageRange && Result->LastPage > PageCount + 1 ? PageCount + 1 : Result->LastPage;
		for (int i = Result->FirstPage; i < Result->LastPage; i++)
		{
			FName Name = GeneratePageI(Doc, InName, (char*)BMPPathStr.c_str(), i, Result->Ppi, NumberSize);
			this->UTextureFactory::FactoryCreateFile(InClass, InParent, Name, Flags, BMPPath, Parms, Warn, bOutOperationCanceled);
			remove(BMPPathStr.c_str());
		}
		FPDF_CloseDocument(Doc);
		return InParent;
	}
	else
	{
		bOutOperationCanceled = true;
		return nullptr;
	}
	
}

void UPDFImporter::ShowImportOptionWindow(TSharedPtr<SPDFImportOptions>& Options, const FString& Filename, UPDFImportOptions*& Result)
{
	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(LOCTEXT("WindowTitle", "PDF Import Options"))
		.SizingRule(ESizingRule::Autosized);

	Window->SetContent(
		SAssignNew(Options, SPDFImportOptions)
		.WidgetWindow(Window)
		.ImportOptions(Result)
		.Filename(FText::FromString(Filename))
	);

	TSharedPtr<SWindow> ParentWindow;

	if (FModuleManager::Get().IsModuleLoaded("MainFrame"))
	{
		IMainFrameModule& MainFrame = FModuleManager::LoadModuleChecked<IMainFrameModule>("MainFrame");
		ParentWindow = MainFrame.GetParentWindow();
	}

	FSlateApplication::Get().AddModalWindow(Window, ParentWindow, false);
}

FName UPDFImporter::GeneratePageI(FPDF_DOCUMENT PDF, FName Filename, char* BMPPath, int Index, int Ppi, int NumberSize)
{
	
	FPDF_PAGE Docpage = LoadPage(PDF, Index, FPDF_GetPageCount(PDF));
	GenerateBitmapFromPage(Docpage, BMPPath, Ppi);
	FString TempName = Filename.ToString();
	int IndexSize = GetNumberSize(Index, 0);
	for (int i = 0; i < NumberSize - IndexSize; i++)
		TempName += "0";
	TempName.AppendInt(Index);
	
	return FName(*TempName);
}

int UPDFImporter::GetNumberSize(int PageCount, int NumberSize)
{
	if (PageCount < 1)
		return NumberSize;
	NumberSize++;
	return GetNumberSize(PageCount / 10, NumberSize);
}
#undef LOCTEXT_NAMESPACE