#define _CRT_SECURE_NO_WARNINGS

#include "PDFConverter.h"
#include <stdio.h>
#include <iostream>
#include <fstream>



const int BYTES_PER_PIXEL = 4;
const int FILE_HEADER_SIZE = 14;
const int INFO_HEADER_SIZE = 40;

void GenerateBitmapImage(unsigned char* image, int height, int width, char* imageFileName)
{
    int widthInBytes = width * BYTES_PER_PIXEL;

    unsigned char padding[3] = { 0, 0, 0 };
    int paddingSize = (4 - (widthInBytes) % 4) % 4;

    int stride = (widthInBytes)+paddingSize;

    FILE* imageFile = fopen(imageFileName, "wb");

    unsigned char* fileHeader = createBitmapFileHeader(height, stride);
    fwrite(fileHeader, 1, FILE_HEADER_SIZE, imageFile);

    unsigned char* infoHeader = createBitmapInfoHeader(height, width);
    fwrite(infoHeader, 1, INFO_HEADER_SIZE, imageFile);

    int i;
    for (i = 0; i < height; i++) {
        int temp = i * widthInBytes;
        fwrite(image + temp, BYTES_PER_PIXEL, width, imageFile);
        fwrite(padding, 1, paddingSize, imageFile);
    }
    fclose(imageFile);
}

unsigned char* createBitmapFileHeader(int height, int stride)
{
    int fileSize = FILE_HEADER_SIZE + INFO_HEADER_SIZE + (stride * height);

    static unsigned char fileHeader[] = {
        0,0,     /// signature
        0,0,0,0, /// image file size in bytes
        0,0,0,0, /// reserved
        0,0,0,0, /// start of pixel array
    };

    fileHeader[0] = (unsigned char)('B');
    fileHeader[1] = (unsigned char)('M');
    fileHeader[2] = (unsigned char)(fileSize);
    fileHeader[3] = (unsigned char)(fileSize >> 8);
    fileHeader[4] = (unsigned char)(fileSize >> 16);
    fileHeader[5] = (unsigned char)(fileSize >> 24);
    fileHeader[10] = (unsigned char)(FILE_HEADER_SIZE + INFO_HEADER_SIZE);

    return fileHeader;
}

unsigned char* createBitmapInfoHeader(int height, int width)
{
    static unsigned char infoHeader[] = {
        0,0,0,0, /// header size
        0,0,0,0, /// image width
        0,0,0,0, /// image height
        0,0,     /// number of color planes
        0,0,     /// bits per pixel
        0,0,0,0, /// compression
        0,0,0,0, /// image size
        0,0,0,0, /// horizontal resolution
        0,0,0,0, /// vertical resolution
        0,0,0,0, /// colors in color table
        0,0,0,0, /// important color count
    };

    infoHeader[0] = (unsigned char)(INFO_HEADER_SIZE);
    infoHeader[4] = (unsigned char)(width);
    infoHeader[5] = (unsigned char)(width >> 8);
    infoHeader[6] = (unsigned char)(width >> 16);
    infoHeader[7] = (unsigned char)(width >> 24);
    infoHeader[8] = (unsigned char)(-height);
    infoHeader[9] = (unsigned char)(-height >> 8);
    infoHeader[10] = (unsigned char)(-height >> 16);
    infoHeader[11] = (unsigned char)(-height >> 24);
    infoHeader[12] = (unsigned char)(1);
    infoHeader[14] = (unsigned char)(BYTES_PER_PIXEL * 8);

    return infoHeader;
}

void ConfigFPDF()
{
    FPDF_LIBRARY_CONFIG config;
    config.version = 2;
    config.m_pUserFontPaths = NULL;
    config.m_pIsolate = NULL;
    config.m_v8EmbedderSlot = 0;

    FPDF_InitLibraryWithConfig(&config);
}

FPDF_DOCUMENT LoadDocument(const char* pdfname)
{
    FPDF_DOCUMENT doc = NULL;
    doc = FPDF_LoadDocument(pdfname, NULL);
    if (doc == NULL)
        fprintf(stderr, "doc error");
    return doc;
}

FPDF_PAGE LoadPage(FPDF_DOCUMENT pdf, int pageNumber, int numberOfPages)
{
    if (pageNumber > numberOfPages - 1)
        pageNumber = numberOfPages - 1;
    FPDF_PAGE docPage = NULL;
    docPage = FPDF_LoadPage(pdf, pageNumber);
    if (docPage == NULL)
        fprintf(stderr, "page error");
    return docPage;
}

FPDF_BITMAP CreateEmptyBitmap(int bitmapWidth, int bitmapHeight)
{
    FPDF_BITMAP bitmap = NULL;

    bitmap = FPDFBitmap_Create(bitmapWidth, bitmapHeight, true);
    if (bitmap == NULL)
        fprintf(stderr, "bitmap creation error");

    //When a bitmap is created, all its pixels are set to black, so we need to set them back to white
    BYTE* ptr = (BYTE*)FPDFBitmap_GetBuffer(bitmap);

    for (int i = 0; i < bitmapHeight * bitmapWidth * BYTES_PER_PIXEL; i++)
    {
        *(ptr + i) = 255;
    }

    return bitmap;
}

void GenerateBitmapFromPage(FPDF_PAGE page, char* filename, int ppi)
{
    //double resolutionMultiplier = dpi / 72;

    if (ppi > MAX_PPI)
        ppi = MAX_PPI;
    //The width and height will determine the resolution of the image
    int pageWidth = (int) FPDF_GetPageWidth(page) / 72 * ppi;
    int pageHeight = (int) FPDF_GetPageHeight(page) / 72 * ppi;

    //Create an empty bitmap and fill it with blank bytes
    FPDF_BITMAP bitmap = CreateEmptyBitmap(pageWidth, pageHeight);

    //Convert the page and store it in the bitmap
    FPDF_RenderPageBitmap(bitmap, page, 0, 0, pageWidth, pageHeight, 0, 0);
    BYTE* bitmapBuffer = NULL;

    //Write the bitmap file
    bitmapBuffer = (BYTE*)FPDFBitmap_GetBuffer(bitmap);
    GenerateBitmapImage(bitmapBuffer, pageHeight, pageWidth, filename);

    FPDFBitmap_Destroy(bitmap);
    FPDF_ClosePage(page);
}