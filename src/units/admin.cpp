//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "admin.h"

#include "main.h"
#include "info.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAdmin *frmAdmin;
//---------------------------------------------------------------------------
__fastcall TfrmAdmin::TfrmAdmin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAdmin::FormClose(TObject *Sender, TCloseAction &Action)
{
    frmMain->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAdmin::btnExitClick(TObject *Sender)
{
	frmMain->Show();
    frmAdmin->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAdmin::btnInfoClick(TObject *Sender)
{
	frmAdmin->Hide();
	frmInfo->Show();
}
//---------------------------------------------------------------------------
