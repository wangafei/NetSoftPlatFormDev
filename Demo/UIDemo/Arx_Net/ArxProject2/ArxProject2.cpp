// (C) Copyright 2002-2005 by Autodesk, Inc. 
//
// Permission to use, copy, modify, and distribute this software in
// object code form for any purpose and without fee is hereby granted, 
// provided that the above copyright notice appears in all copies and 
// that both that copyright notice and the limited warranty and
// restricted rights notice below appear in all supporting 
// documentation.
//
// AUTODESK PROVIDES THIS PROGRAM "AS IS" AND WITH ALL FAULTS. 
// AUTODESK SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTY OF
// MERCHANTABILITY OR FITNESS FOR A PARTICULAR USE.  AUTODESK, INC. 
// DOES NOT WARRANT THAT THE OPERATION OF THE PROGRAM WILL BE
// UNINTERRUPTED OR ERROR FREE.
//
// Use, duplication, or disclosure by the U.S. Government is subject to 
// restrictions set forth in FAR 52.227-19 (Commercial Computer
// Software - Restricted Rights) and DFAR 252.227-7013(c)(1)(ii)
// (Rights in Technical Data and Computer Software), as applicable.
//

//-----------------------------------------------------------------------------
//- ArxProject2.cpp : Initialization functions
//-----------------------------------------------------------------------------
#include "StdAfx.h"
#include "resource.h"
// #include <afxdllx.h>
/*
//-----------------------------------------------------------------------------
//- Define the sole extension module object.
AC_IMPLEMENT_EXTENSION_MODULE(ArxProject2DLL)
//- Please do not remove the 3 following lines. These are here to make .NET MFC Wizards
//- running properly. The object will not compile but is require by .NET to recognize
//- this project as being an MFC project
#ifdef NEVER
AFX_EXTENSION_MODULE ArxProject2ExtDLL ={ NULL, NULL } ;
#endif

//- Now you can use the CAcModuleResourceOverride class in
//- your application to switch to the correct resource instance.
//- Please see the ObjectARX Documentation for more details

//-----------------------------------------------------------------------------
//- DLL Entry Point
extern "C"
BOOL WINAPI DllMain (HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved) {
	//- Remove this if you use lpReserved
	UNREFERENCED_PARAMETER(lpReserved) ;

	if ( dwReason == DLL_PROCESS_ATTACH ) {
        _hdllInstance =hInstance ;
		ArxProject2DLL.AttachInstance (hInstance) ;
		InitAcUiDLL () ;
	} else if ( dwReason == DLL_PROCESS_DETACH ) {
		ArxProject2DLL.DetachInstance () ;
	}
	return (TRUE) ;
}*/

AC_IMPLEMENT_EXTENSION_MODULE(ArxProject2DLL)
//- Define the sole extension module object.
#pragma managed(push, off) // 此标记表示,到#pragma managed(pop)结束的代码编译为托管代码
extern "C"
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	//- Remove this if you use lpReserved

	UNREFERENCED_PARAMETER(lpReserved);

	if (dwReason == DLL_PROCESS_ATTACH)
	{
		_hdllInstance = hInstance;
		// ArxProject2DLL.AttachInstance(hInstance);
		InitAcUiDLL();
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		// ArxProject2DLL.DetachInstance();
	}
	return (TRUE);
}
#pragma managed(pop)


namespace JtArx
{
	void AttachInstance()
	{
		ArxProject2DLL.AttachInstance(_hdllInstance);

	}
	void DetachInstance()
	{
		ArxProject2DLL.DetachInstance();

	}
}
/*
//-----------------------------------------------------------------------------
//- Define the sole extension module object.
AC_IMPLEMENT_EXTENSION_MODULE(ArxProject2DLL)
//- Please do not remove the 3 following lines. These are here to make .NET MFC Wizards
//- running properly. The object will not compile but is require by .NET to recognize
//- this project as being an MFC project
#ifdef NEVER
AFX_EXTENSION_MODULE ArxProject3ExtDLL = { NULL, NULL };
#endif

//- Now you can use the CAcModuleResourceOverride class in
//- your application to switch to the correct resource instance.
//- Please see the ObjectARX Documentation for more details

//-----------------------------------------------------------------------------
//- DLL Entry Point
#pragma unmanaged
extern "C"
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved) {
	//- Remove this if you use lpReserved
	UNREFERENCED_PARAMETER(lpReserved);

	if (dwReason == DLL_PROCESS_ATTACH) {
		_hdllInstance = hInstance;
		ArxProject2DLL.AttachInstance(hInstance);
		InitAcUiDLL();
	}
	else if (dwReason == DLL_PROCESS_DETACH) {
		ArxProject2DLL.DetachInstance();
	}
	return (TRUE);
}
#pragma managed

*/

