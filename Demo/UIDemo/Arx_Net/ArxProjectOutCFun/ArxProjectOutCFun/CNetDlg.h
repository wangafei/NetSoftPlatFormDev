#pragma once
#include "Resource.h"

// CNetDlg 对话框

class CNetDlg : public CAcUiDialog
{
	DECLARE_DYNAMIC(CNetDlg)

public:
	CNetDlg(HWND hChild, CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CNetDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_NET };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()

public:
	void    BeginEditorCommand();
	void    CancelEditorCommand();
	void    CompleteEditorCommand(BOOL restoreDialogs = TRUE);
private:

	CWnd* m_pChildWnd;
};
