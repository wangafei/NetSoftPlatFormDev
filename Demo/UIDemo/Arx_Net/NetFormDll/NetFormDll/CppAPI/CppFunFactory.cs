using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NetFormDll.CppAPI
{
    public class CppFunFactory
    {
        static private string DllPath = @"E:\CvsWork\JietuPublic\Arx_Net\ArxProjectUserNetExcel\x64\Release_v141\ArxProjectUserNetExcel.arx";
        static private ICppFunctions g_CppFun = null;
        static public ICppFunctions GetSingle()
        {
            if (null == g_CppFun)
                g_CppFun = new CppFunctions(DllPath);

            return g_CppFun;
        }
    }
}
