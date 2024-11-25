#include "pch.h"
#include "WShape1.h"



WShape1::WShape1()
{
}


void WShape1::SetAttribute(int orgX, int orgY, COLORREF borderColor, int borderType, int borderWidth, COLORREF fillColor, int fillType)
{
	OrgX = orgX;
	OrgY = orgY;
	BorderColor = borderColor;
	BorderType = borderType;
	BorderWidth = borderWidth;
	FillColor = fillColor;
	FillType = fillType;
}


WShape1::~WShape1()
{
}