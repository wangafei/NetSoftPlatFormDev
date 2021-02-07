#include "StdAfx.h"
#include "ArxCFun.h"
#include "CNetDlg.h"
int DoModal(HWND hWnd)
{
	CAcModuleResourceOverride res;
	CNetDlg dlg(hWnd);

	// GetModuleHandle()

	return dlg.DoModal();
}

CNetDlg* GetMFC_NETDLG(HWND hWnd)
{
	CWnd* pWnd = CWnd::FromHandle(hWnd);
	if (NULL == pWnd)
	{
		return NULL;
	}

	CNetDlg* pDlg = dynamic_cast<CNetDlg*>(pWnd);
	return pDlg;
}

void    BeginEditorCommand(HWND hWnd)
{
	CNetDlg* pDlg = GetMFC_NETDLG(hWnd);
	if (NULL != pDlg)
	{
		pDlg->BeginEditorCommand();
	}
}

void    CancelEditorCommand(HWND hWnd)
{
	CNetDlg* pDlg = GetMFC_NETDLG(hWnd);
	if (NULL != pDlg)
	{
		pDlg->CancelEditorCommand();
	}
}

void    CompleteEditorCommand(HWND hWnd, bool restoreDialogs)
{
	CNetDlg* pDlg = GetMFC_NETDLG(hWnd);
	if (NULL != pDlg)
	{
		pDlg->CompleteEditorCommand(restoreDialogs);
	}
}

void    MoveViewInModalDlg()
{
	ads_point adsPt;
	int result = acedGetPoint(NULL, _T("\n请使用鼠标或者视区工具调整视区"), adsPt);
}