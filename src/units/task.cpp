//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "task.h"
#include "admin.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmTask *frmTask;
//---------------------------------------------------------------------------
__fastcall TfrmTask::TfrmTask(TComponent* Owner)
	: TForm(Owner)
{
	for (auto &temp : emp_vec) {

	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmTask::btnExitClick(TObject *Sender)
{
	frmAdmin->Show();
	frmTask->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmTask::FormClose(TObject *Sender, TCloseAction &Action)
{
	frmAdmin->Show();
}
//---------------------------------------------------------------------------
