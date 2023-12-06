//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "admin.h"
#include "data.h"

#include "main.h"
#include "info.h"
#include "task.h"
#include "me.h"
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
void __fastcall TfrmAdmin::FormShow(TObject *Sender)
{
	auto s = "Добро пожаловать, " + emp_curr.fio + "!";
	lblHello->Caption = s.c_str();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdmin::btnTaskClick(TObject *Sender)
{
	frmAdmin->Hide();
	frmTask->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdmin::btnFinanceClick(TObject *Sender)
{
    //
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdmin::btnRoleClick(TObject *Sender)
{
    //
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdmin::btnMeClick(TObject *Sender)
{
	frmMe->Show();
    frmAdmin->Hide();
}
//---------------------------------------------------------------------------

