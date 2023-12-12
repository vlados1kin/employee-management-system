//---------------------------------------------------------------------------

#include <vcl.h>
#include <sstream>
#pragma hdrstop

using namespace std;
#include "taskedit.h"
#include "task.h"
#include "data.h"
#include "main.h"
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
void __fastcall TfrmTaskEdit::Update()
{
	if (emp_choice == -1) {
		editLogin->Text = emp_temp.login.c_str();
		editDescription->Text = "";
	} else {

	}
}

void __fastcall TfrmTaskEdit::FormShow(TObject *Sender)
{
	frmTaskEdit->Update();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTaskEdit::btnSaveClick(TObject *Sender)
{
	Task temp;
	try {
		AnsiString _str = editDate->Text;
		string str = string(_str.c_str());
		temp.date_year = stoi(str) / 10000;
		temp.date_month = stoi(str) / 100 % 100;
		temp.date_day = stoi(str) % 100;
		_str = editStart->Text;
		str = string(_str.c_str());
		temp.start_hour = stoi(str) / 100;
		temp.start_minute = stoi(str) % 100;
		_str = editEnd->Text;
		str = string(_str.c_str());
		temp.end_hour = stoi(str) / 100;
		temp.end_minute = stoi(str) % 100;
		temp.login = AnsiString(editLogin->Text);
		temp.description = AnsiString(editDescription->Text);
		temp.completed = false;
	} catch (...) {

	}
	task_vec.push_back(temp);
	frmTaskEdit->Close();
	frmTask->Show();
}
//---------------------------------------------------------------------------

