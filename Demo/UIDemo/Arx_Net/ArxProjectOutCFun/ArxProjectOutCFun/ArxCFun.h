#pragma once
extern "C"
{
	__declspec(dllexport) int DoModal(HWND hWnd);
	__declspec(dllexport) void    BeginEditorCommand(HWND hWnd);
	__declspec(dllexport) void    CancelEditorCommand(HWND hWnd);
	__declspec(dllexport) void    CompleteEditorCommand(HWND hWnd, bool restoreDialogs);
	__declspec(dllexport) void    MoveViewInModalDlg();
}
