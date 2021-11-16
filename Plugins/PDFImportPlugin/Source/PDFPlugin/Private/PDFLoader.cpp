#include "PDFLoader.h"
#include <string>
#include "PDFConverter.h"
#include "Modules/ModuleManager.h"
#include "Engine/Texture2D.h"
#include "PixelFormat.h"
#include "Misc/FileHelper.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"

//Convert the pdf file into a bmp file and store it at the same location while returning the path of the image
UPDFInfo* UPDFLoader::LoadPDF(FString PathToPdf)
{
	FPDF_DOCUMENT Doc = LoadDocument(std::string(TCHAR_TO_UTF8(*PathToPdf)).c_str());
	UPDFInfo *Pdf = NewObject<UPDFInfo>();
	Pdf->Doc = Doc;
	Pdf->PageCount = FPDF_GetPageCount(Doc);
	return Pdf;
}


UTexture2D* UPDFLoader::GetPDFPage(const UPDFInfo* Pdf, int PageIndex, int Ppi)
{
	//Ppi max is 1200
	if (Ppi > 1200) Ppi = 1200;

	//Load specified page
	FPDF_PAGE Docpage = LoadPage(Pdf->Doc, PageIndex, Pdf->PageCount);
	
	//Generates the page's imaga and stores the temporary image in the temp directory of the user
	FString BMPPath = FPlatformProcess::UserTempDir();
	BMPPath += "temp.bmp";
	GenerateBitmapFromPage(Docpage, (char*)std::string(TCHAR_TO_UTF8(*BMPPath)).c_str(), Ppi);

	//Import the image in Unreal as a UTexture2D
	return LoadTexture2DFromFile(BMPPath);
}

UTexture2D* UPDFLoader::LoadTexture2DFromFile(const FString& FullFilePath)
{
	UTexture2D* LoadedT2D = NULL;

	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::BMP);

	//Load From File
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *FullFilePath)) return NULL;
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	remove((char*)std::string(TCHAR_TO_UTF8(*FullFilePath)).c_str());
	//Create T2D!
	if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		TArray<uint8> UncompressedBGRA;
		if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
		{
			LoadedT2D = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

			//Valid?
			if (!LoadedT2D) return NULL;
			//~~~~~~~~~~~~~~

			//Copy!
			void* TextureData = LoadedT2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, UncompressedBGRA.GetData(), UncompressedBGRA.Num());
			LoadedT2D->PlatformData->Mips[0].BulkData.Unlock();

			#define UpdateResource UpdateResource

			//Update!
			LoadedT2D->UpdateResource();
		}
	}

	return LoadedT2D;
}