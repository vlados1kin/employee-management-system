//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "taskedit.h"
#include "task.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmTaskEdit *frmTaskEdit;
//---------------------------------------------------------------------------
__fastcall TfrmTaskEdit::TfrmTaskEdit(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmTaskEdit::btnExitClick(TObject *Sender)
{
	frmTask->Show();
    frmTaskEdit->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmTaskEdit::FormClose(TObject *Sender, TCloseAction &Action)
{
	frmTask->Show();
}
//---------------------------------------------------------------------------
