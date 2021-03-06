//////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "guidef.h"

//////////////////////////////////////////////////////////////////////////

CGuiFont gGuiFont;

//////////////////////////////////////////////////////////////////////////

void CGuiFont::Init()
{
	mFont.CreateFont(
		-12, 
		0, 
		0, 
		0, 
		FW_NORMAL, 
		FALSE, 
		FALSE, 
		FALSE, 
		ANSI_CHARSET,
		OUT_STROKE_PRECIS, 
		CLIP_STROKE_PRECIS, 
		PROOF_QUALITY, 
		FF_SWISS, 
		NULL);

	LOGFONT LogFont;

	mFont.GetLogFont(&LogFont);

	LogFont.lfWeight = FW_BOLD;

	mBoldFont.CreateFontIndirect(&LogFont);
}

//////////////////////////////////////////////////////////////////////////

void CGuiFont::UnInit()
{
	mFont.DeleteObject();

	mBoldFont.DeleteObject();
}

//////////////////////////////////////////////////////////////////////////