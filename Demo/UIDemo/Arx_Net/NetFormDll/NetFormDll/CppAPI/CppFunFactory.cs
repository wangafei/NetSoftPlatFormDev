using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace NetFormDll.CppAPI
{
    public class CppFunFactory
    {
        static private string DllPath = @"ArxProjectOutCFun.arx";
        static private ICppFunctions g_CppFun = null;

        static string GetBinPath()
        {
            string strLocatios = Assembly.GetExecutingAssembly().Location;
            string strDllPath = System.IO.Path.GetDirectoryName(strLocatios);
//             System.IO.DirectoryInfo dirInfo = new System.IO.DirectoryInfo(strDllPath);
//             string strBin = dirInfo.Parent.FullName + @"\";
            return strDllPath;
        }

        static public ICppFunctions GetSingle()
        {
            if (null == g_CppFun)
                g_CppFun = new CppFunctions(System.IO.Path.Combine(GetBinPath(), DllPath));

            return g_CppFun;
        }
    }
}
