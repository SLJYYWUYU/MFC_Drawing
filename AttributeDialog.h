#pragma once

#include "afxdialogex.h"


// AttributeDialog 对话框

class AttributeDialog : public CDialogEx
{
	DECLARE_DYNAMIC(AttributeDialog)

public:
	AttributeDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~AttributeDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ATTRIBUTEDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:

	CComboBox shapeType;//
int orgX;//
	int  orgY;//
	int  width;//
	int   height;//
	CListBox borderType;//
	CListBox fillType;//

    CString textContent;
	int  textAngle;
	int borderWidth;
	COLORREF borderColor;
	
	COLORREF fillColor;
	CMFCColorButton borderColorButton;
	CMFCColorButton fillColorButton;
	int comboxIndex;
	int   borderTypeIndex;
	int filltypeIndex;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancle();
	afx_msg void OnCbnSelchangeComboShapeType();
};



