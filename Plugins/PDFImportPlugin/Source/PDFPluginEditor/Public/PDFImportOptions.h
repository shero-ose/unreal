// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Widgets/SWindow.h"
#include "Widgets/SCompoundWidget.h"
#include "PDFConverter.h"
#include "PDFImportOptions.generated.h"


UCLASS()
class UPDFImportOptions : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PageRange")
		bool SpecifyPageRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PageRange", meta = (ClampMin = 1, UIMin = 1, EditCondition = "SpecifyPageRange"))
		int FirstPage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PageRange", meta = (ClampMin = 1, UIMin = 1, EditCondition = "SpecifyPageRange"))
		int LastPage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ppi", meta = (UIMax = 600))
		int Ppi;

public:
	UPDFImportOptions() : SpecifyPageRange(false), FirstPage(1), LastPage(1), Ppi(150) {}

};

class SPDFImportOptions : public SCompoundWidget
{
private:
	UPDFImportOptions* ImportOptions;
	bool bShouldImport;
	TWeakPtr<class SWindow> WidgetWindow;
	TSharedPtr<class IDetailsView> DetailsView;

public:
	SLATE_BEGIN_ARGS(SPDFImportOptions)
		: _WidgetWindow()
		, _ImportOptions(nullptr)
	{}

	SLATE_ARGUMENT(TSharedPtr<SWindow>, WidgetWindow)
		SLATE_ARGUMENT(UPDFImportOptions*, ImportOptions)
		SLATE_ARGUMENT(FText, Filename)
		SLATE_END_ARGS()

public:
	SPDFImportOptions();

	void Construct(const FArguments& InArgs);

	// Button reaction
	FReply OnImport();
	FReply OnCancel();
	// End of Button reaction

	// Import was done
	bool ShouldImport() const { return bShouldImport; }
};

