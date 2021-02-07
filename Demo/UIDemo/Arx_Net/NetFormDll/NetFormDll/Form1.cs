using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using NetFormDll.CppAPI;
namespace NetFormDll
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            this.TopLevel = false;
        }

        new public DialogResult ShowDialog()
        {
            DialogResult res = DialogResult.OK;
            base.Show();

            res = (DialogResult)CppFunFactory.GetSingle().DoModal(this.Handle);
            
            return res;
        }

        new public void Show()
        {
            base.Show();
        }
        protected virtual void BeginEditorCommand()
        {
            CppFunFactory.GetSingle().BeginEditorCommand(WinFunctions.GetParent(this.Handle));
        }
        protected virtual void CancelEditorCommand()
        {
            CppFunFactory.GetSingle().CancelEditorCommand(WinFunctions.GetParent(this.Handle));

        }
        protected virtual void CompleteEditorCommand(bool restoreDialogs = true)
        {
            CppFunFactory.GetSingle().CompleteEditorCommand(WinFunctions.GetParent(this.Handle), restoreDialogs);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            BeginEditorCommand();

            CppFunFactory.GetSingle().MoveViewInModalDlg();


            CompleteEditorCommand();

        }
    }
}
