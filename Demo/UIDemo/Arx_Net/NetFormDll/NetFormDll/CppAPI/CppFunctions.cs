using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NetFormDll.CppAPI
{
    class CppFunctions : ICppFunctions, IDisposable
    {
        private IntPtr dllHandle = IntPtr.Zero;
        private bool disposed = false;
        public CppFunctions(string dllPath)
        {
            LoadDll(dllPath);
            LoadFunctions();
        }
        private void LoadDll(string dllPath)
        {
            Guard.AgainstNullOrEmptyOrWhiteSpaceString(dllPath, nameof(dllPath));

            dllHandle = WinFunctions.LoadLibrary(dllPath);
            if (dllHandle == IntPtr.Zero)
                throw new Exception("加载dll失败.");
        }
        private void LoadFunctions()
        {
            DoModal = LoadFunction<DoModal>("DoModal");

            BeginEditorCommand = LoadFunction<BeginEditorCommand>("BeginEditorCommand");
            CancelEditorCommand = LoadFunction<CancelEditorCommand>("CancelEditorCommand");
            CompleteEditorCommand = LoadFunction<CompleteEditorCommand>("CompleteEditorCommand");
            MoveViewInModalDlg = LoadFunction<MoveViewInModalDlg>("MoveViewInModalDlg");

        }
        private TDelegate LoadFunction<TDelegate>(string name) where TDelegate : class
        {
            var delegateValue = CppMarshal.LoadUnmanagedFunction<TDelegate>(dllHandle, name);
            if (delegateValue == null)
                throw new Exception($"Failed to load CppDll \"{name}\" function.");

            return delegateValue;
        }

        public DoModal DoModal { get; private set; }

        public BeginEditorCommand BeginEditorCommand { get; private set; }
        public CancelEditorCommand CancelEditorCommand { get; private set; }
        public CompleteEditorCommand CompleteEditorCommand { get; private set; }

        public MoveViewInModalDlg MoveViewInModalDlg { get; private set; }

        public void Dispose()
        {
            Dispose(true);
        }

        protected virtual void Dispose(bool disposing)
        {
            if (disposing)
            {
                if (!disposed)
                {
                    WinFunctions.FreeLibrary(dllHandle);
                }

                disposed = true;
            }
        }
    }


    internal static class Guard
    {
        public static void AgainstDisposed(bool disposed, string objectName)
        {
            if (disposed)
                throw new ObjectDisposedException(objectName);
        }

        public static void AgainstNull(object value)
        {
            if (value == null)
                throw new ArgumentNullException();
        }

        public static void AgainstNull(object value, string name)
        {
            if (value == null)
                throw new ArgumentNullException(name);
        }

        public static void AgainstNullOrEmptyOrWhiteSpaceString(string value, string name)
        {
            AgainstNull(value, name);

            if (string.IsNullOrWhiteSpace(value))
                throw new ArgumentException(name);
        }
    }
}
