#pragma once
#include "resource.h"

// CARXMFCDLG 对话框

class CARXMFCDLG : public CAcUiDialog
{
	DECLARE_DYNAMIC(CARXMFCDLG)

public:
	CARXMFCDLG(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CARXMFCDLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
