#pragma once

#include "wshape1.h"
class WCircle :public WShape1
{
public:
	int Radius;//圆的半径
public:
	WCircle();
	WCircle(int orgX, int orgY, int radius, int borderWidth, int borderType, COLORREF borderColor, int fillType, COLORREF fillColor);
	void Draw(CDC* pDC);
	bool IsMatched(CPoint pnt);
	void Serialize(CArchive& ar);
	~WCircle();
	DECLARE_SERIAL(WCircle); //声明类WCircle是支持序列化
};

