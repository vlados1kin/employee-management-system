//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "info.h"

#include "admin.h"
#include "edit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmInfo *frmInfo;
//---------------------------------------------------------------------------
__fastcall TfrmInfo::TfrmInfo(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::btnExitClick(TObject *Sender)
{
	frmAdmin->Show();
	frmInfo->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::FormClose(TObject *Sender, TCloseAction &Action)
{
    frmAdmin->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::btnAddClick(TObject *Sender)
{
	frmInfo->Hide();
	frmEdit->Show();
}
//---------------------------------------------------------------------------
