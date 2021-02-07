using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace NetFormDll.CppAPI
{
    public static class CppMarshal
    {

        public static TDelegate LoadUnmanagedFunction<TDelegate>(IntPtr dllHandle, string functionName) where TDelegate : class
        {
            if (dllHandle == IntPtr.Zero)
                throw new ArgumentException("DLL handle is invalid.", nameof(dllHandle));

            Guard.AgainstNullOrEmptyOrWhiteSpaceString(functionName, nameof(functionName));

            var functionPtr = WinFunctions.GetProcAddress(dllHandle, functionName);
            if (functionPtr == IntPtr.Zero)
                return null;

            return (TDelegate)(object)Marshal.GetDelegateForFunctionPointer(functionPtr, typeof(TDelegate));
        }
    }
}
