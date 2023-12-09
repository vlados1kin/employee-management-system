//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#pragma hdrstop

#include "main.h"
#include "me.h"
#include "admin.h"
#include "data.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
	: TForm(Owner)
{
	ReadEmployee("files/employee.txt");
	ReadTask("files/task.txt");
	ReadSalary("files/salary.txt");
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnEnterClick(TObject *Sender)
{
	frmMain->nextForm();
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
void __fastcall TfrmMain::FormClose(TObject *Sender, TCloseAction &Action)
{
	SaveEmployee("files/employee.txt");
	SaveTask("files/task.txt");
	SaveSalary("files/salary.txt");
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::editPasswordKeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == 13) {
		frmMain->nextForm();
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::nextForm()
{
    AnsiString loginAnsi = editLogin->Text;
	AnsiString passwordAnsi = editPassword->Text;

	string login = string(loginAnsi.c_str());
	string password = string(passwordAnsi.c_str());

	if (CheckPassword(login, password)) {
		if (emp_curr.role == "admin") {
			frmMe->btnEdit->Visible = false;
			frmAdmin->Show();
			frmMain->Hide();
		} else {
			frmMe->btnEdit->Visible = true;
			frmMe->Show();
			frmMain->Hide();
		}
	} else {
		ShowMessage("Неверный логин или пароль");
	}
}
