#include "stdafx.h"
#include "JtArxNetTest.h"

namespace JtArxNet
{
	JtArxNetTest::JtArxNetTest()
	{
	}

	bool JtArxNetTest::ShowMFCDlg()
	{
		return true;
	}

	void JtArxNetTest::LoadDll()
	{
		NetFormDll::Form1^ form = gcnew NetFormDll::Form1();
		form->ShowDialog();

		/*try
		{
			System::Reflection::Assembly^ assem = System::Reflection::Assembly::LoadFrom("NetFormDll.dll");

			if (nullptr != assem)
			{
				System::Object^ obj = assem->GetType("NetFormDll.Form1");
				// System::Type^ type = assem->GetType("Form1");
				if (nullptr != obj)
				{
					obj->GetType()->InvokeMember("NetFormDll.Form1.ShowDialog", System::Reflection::BindingFlags::InvokeMethod, nullptr, nullptr, nullptr);
// 					System::Reflection::MethodInfo^ meth = obj->GetType()->GetMethod("ShowDialog");
// 					if (nullptr != meth)
// 					{
// 						meth->Invoke(obj, nullptr);
// 					}
// 					else
// 						AfxMessageBox(_T("没有找到dll 中的 ShowDialog"));
				}
				else
					AfxMessageBox(_T("没有找到dll 中的 Form1"));
			}
			else
			{
				AfxMessageBox(_T("没有找到dll"));
			}
		}
		catch (CException* e)
		{
		}*/
	}
}