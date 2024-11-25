#pragma once

#include "wshape1.h"
class WText :public WShape1
{
public:
	CString TextContent; // 文本的内容
	int TextAngle; // 文本的旋转角度
public:
	WText();
	WText(int orgX, int orgY, CString textContent, int textAngle, int borderWidth, int borderType, COLORREF borderColor, int fillType, COLORREF fillColor);
	void Draw(CDC* pDC);//绘制文本函数
	bool IsMatched(CPoint pnt);
	void Serialize(CArchive& ar);
	~WText();
};
