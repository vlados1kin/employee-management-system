//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "edit.h"

#include "info.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmEdit *frmEdit;
//---------------------------------------------------------------------------
__fastcall TfrmEdit::TfrmEdit(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TfrmEdit::btnEnterClick(TObject *Sender)
{
	// save changes
	frmInfo->Show();
    frmEdit->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdit::FormClose(TObject *Sender, TCloseAction &Action)
{
	frmInfo->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdit::btnExitClick(TObject *Sender)
{
	frmInfo->Show();
	frmEdit->Close();
}
//---------------------------------------------------------------------------
