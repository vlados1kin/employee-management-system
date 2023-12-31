//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "salaryedit.h"
#include "salary.h"
#include "data.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSalaryEdit *frmSalaryEdit;
//---------------------------------------------------------------------------
__fastcall TfrmSalaryEdit::TfrmSalaryEdit(TComponent* Owner)
	: TForm(Owner)
{
	cmbMonth->Items->Add("������");
	cmbMonth->Items->Add("�������");
	cmbMonth->Items->Add("����");
	cmbMonth->Items->Add("������");
	cmbMonth->Items->Add("���");
	cmbMonth->Items->Add("����");
	cmbMonth->Items->Add("����");
	cmbMonth->Items->Add("������");
	cmbMonth->Items->Add("��������");
	cmbMonth->Items->Add("�������");
	cmbMonth->Items->Add("������");
	cmbMonth->Items->Add("�������");
	cmbMonth->ItemIndex = 0;
}
//---------------------------------------------------------------------------
void __fastcall TfrmSalaryEdit::btnExitClick(TObject *Sender)
{
	frmSalaryEdit->Close();
    frmSalary->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmSalaryEdit::FormClose(TObject *Sender, TCloseAction &Action)
{
	frmSalary->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmSalaryEdit::btnSaveClick(TObject *Sender)
{
	Salary temp;
	try {
		temp.login = AnsiString(editLogin->Text);
		temp.department = AnsiString(editDepartment->Text);
		temp.position = AnsiString(editPosition->Text);
		temp.month = AnsiString(cmbMonth->Text);
		AnsiString _str = editSalary->Text;
		string str = string(_str.c_str());
		temp.salary = stoi(str);
	} catch (...) {

	}
	slr_vec.push_back(temp);
	frmSalaryEdit->Close();
	frmSalary->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmSalaryEdit::Update()
{
	if (emp_choice == -1) {
		editLogin->Text = emp_temp.login.c_str();
		editDepartment->Text = "";
		editPosition->Text = "";
		editSalary->Text = "";
	} else {

	}
}
void __fastcall TfrmSalaryEdit::FormShow(TObject *Sender)
{
    frmSalaryEdit->Update();
}
//---------------------------------------------------------------------------
