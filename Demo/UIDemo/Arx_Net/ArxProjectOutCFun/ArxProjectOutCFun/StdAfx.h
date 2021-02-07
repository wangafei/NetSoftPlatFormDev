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
//- StdAfx.h : include file for standard system include files,
//-      or project specific include files that are used frequently,
//-      but are changed infrequently
//-----------------------------------------------------------------------------
#pragma once

#pragma pack (push, 8)
#pragma warning(disable: 4786 4996)
//#pragma warning(disable: 4098)

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN			// 从 Windows 头中排除极少使用的资料
#endif

#if _MSC_VER >= 1900// vs2015
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif
#elif _MSC_VER > 1200


// 以下宏定义要求的最低平台。要求的最低平台
// 是具有运行应用程序所需功能的 Windows、Internet Explorer 等产品的
// 最早版本。通过在指定版本及更低版本的平台上启用所有可用的功能，宏可以
// 正常工作。

// 如果必须要针对低于以下指定版本的平台，请修改下列定义。
// 有关不同平台对应值的最新信息，请参考 MSDN。
#ifndef WINVER					// 指定要求的最低平台是 Windows NT 4。
#define WINVER 0x0500			// 将此值更改为相应的值，以适用于 Windows 的其他版本。
#endif

#ifndef _WIN32_WINNT			// 允许使用特定于 Windows NT 4 或更高版本的功能。
#define _WIN32_WINNT 0x0500		// 将此值更改为相应的值，以适用于 Windows 的其他版本。
#endif						

#ifndef _WIN32_WINDOWS			// 指定要求的最低平台是 Windows 98。
#define _WIN32_WINDOWS 0x0410	// 将此值更改为适当的值，以适用于 Windows Me 或更高版本。
#endif

#ifndef _WIN32_IE				// 指定要求的最低平台是 Internet Explorer 4.0。
#define _WIN32_IE 0x0400		// 将此值更改为相应的值，以适用于 IE 的其他版本。
#endif

#endif
//- ObjectARX and OMF headers needs this
#include <map>

//-----------------------------------------------------------------------------
#include <afxwin.h>				//- MFC core and standard components
#include <afxext.h>				//- MFC extensions

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>				//- MFC OLE classes
#include <afxodlgs.h>			//- MFC OLE dialog classes
#include <afxdisp.h>			//- MFC Automation classes
#endif // _AFX_NO_OLE_SUPPORT

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>				//- MFC ODBC database classes
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>				//- MFC DAO database classes
#endif // _AFX_NO_DAO_SUPPORT

#include <afxdtctl.h>			//- MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>				//- MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

//-----------------------------------------------------------------------------
//- Include ObjectDBX/ObjectARX headers
//- Uncomment one of the following lines to bring a given library in your project.
//#define _BREP_SUPPORT_			//- Support for the BRep API
//#define _HLR_SUPPORT_				//- Support for the Hidden Line Removal API
//#define _AMODELER_SUPPORT_		//- Support for the AModeler API
//#define _ASE_SUPPORT_				//- Support for the ASI/ASE API
//#define _RENDER_SUPPORT_			//- Support for the AutoCAD Render API
//#define _ARX_CUSTOM_DRAG_N_DROP_	//- Support for the ObjectARX Drag'n Drop API
//#define _INC_LEAGACY_HEADERS_		//- Include legacy headers in this project
// #include "arxHeaders.h"

// clr相关
// #using <mscorlib.dll>
// #using <System.dll>
// #using <System.Core.dll>
// #using <acdbmgd.dll>
// #using <acmgd.dll>


#include "E:\CvsWork\HpPub\Vc\Inc\JtArxHeaders.h"
//-----------------------------------------------------------------------------
#include "DocData.h" //- Your document specific data class holder

//- Declare it as an extern here so that it becomes available in all modules
extern AcApDataManager<CDocData> DocVars ;

#pragma pack (pop)

