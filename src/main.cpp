//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"

#include "admin.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnEnterClick(TObject *Sender)
{
	frmAdmin->Show();
	frmMain->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnExitClick(TObject *Sender)
{
	frmMain->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnShowClick(TObject *Sender)
{
	if (editPassword->PasswordChar == '*') {
		editPassword->PasswordChar = '\0';
	} else {
		editPassword->PasswordChar = '*';
    }
}
//---------------------------------------------------------------------------
