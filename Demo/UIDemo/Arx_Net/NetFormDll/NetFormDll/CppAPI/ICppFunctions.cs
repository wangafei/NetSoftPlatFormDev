using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NetFormDll.CppAPI
{
    public interface ICppFunctions
    {
        DoModal DoModal { get; }

        BeginEditorCommand BeginEditorCommand { get; }
        CancelEditorCommand CancelEditorCommand { get; }
        CompleteEditorCommand CompleteEditorCommand { get; }

        MoveViewInModalDlg MoveViewInModalDlg { get; }
    }
}
