// CNetDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "CNetDlg.h"


// CNetDlg 对话框

IMPLEMENT_DYNAMIC(CNetDlg, CAcUiDialog)

CNetDlg::CNetDlg(HWND hChild, CWnd* pParent /*=nullptr*/)
	: CAcUiDialog(IDD_DIALOG_NET, pParent), m_pChildWnd(NULL)
{
	m_pChildWnd = CWnd::FromHandle(hChild);
}

CNetDlg::~CNetDlg()
{
}

void CNetDlg::DoDataExchange(CDataExchange* pDX)
{
	CAcUiDialog::DoDataExchange(pDX);
}

BOOL CNetDlg::OnInitDialog()
{
	CAcUiDialog::OnInitDialog();

	if (NULL != m_pChildWnd)
	{
		CRect rect;
		m_pChildWnd->GetWindowRect(&rect);
		CRect rectWin;
		CRect rectClient;
		this->GetWindowRect(&rectWin);
		this->GetClientRect(&rectClient);
		this->SetWindowPos(NULL, rectWin.TopLeft().x, rectWin.TopLeft().y, rect.Width() + rectWin.Width() - rectClient.Width(),
			rect.Height() + rectWin.Height() - rectClient.Height(), SWP_NOACTIVATE | SWP_NOZORDER);
		CString strName = _T("");
		m_pChildWnd->GetWindowText(strName);
		this->SetWindowText(strName);
		m_pChildWnd->SetParent(this);
	}

	return TRUE;
}

void    CNetDlg::BeginEditorCommand()
{
	CAcUiDialog::BeginEditorCommand();
}

void    CNetDlg::CancelEditorCommand()
{
	CAcUiDialog::CancelEditorCommand();
}

void    CNetDlg::CompleteEditorCommand(BOOL restoreDialogs)
{
	CAcUiDialog::CompleteEditorCommand(restoreDialogs);
}

BEGIN_MESSAGE_MAP(CNetDlg, CAcUiDialog)
END_MESSAGE_MAP()


// CNetDlg 消息处理程序
