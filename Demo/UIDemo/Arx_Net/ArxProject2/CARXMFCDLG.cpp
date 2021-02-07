// CARXMFCDLG.cpp: 实现文件
//

#include "stdafx.h"
#include "CARXMFCDLG.h"


// CARXMFCDLG 对话框

IMPLEMENT_DYNAMIC(CARXMFCDLG, CAcUiDialog)

CARXMFCDLG::CARXMFCDLG(CWnd* pParent /*=nullptr*/)
	: CAcUiDialog(IDD_DIALOG1, pParent)
{

}

CARXMFCDLG::~CARXMFCDLG()
{
}

void CARXMFCDLG::DoDataExchange(CDataExchange* pDX)
{
	CAcUiDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CARXMFCDLG, CAcUiDialog)
END_MESSAGE_MAP()

// CARXMFCDLG 消息处理程序
