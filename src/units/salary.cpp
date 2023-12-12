//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "salary.h"
#include "data.h"
#include "salaryedit.h"
#include "admin.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSalary *frmSalary;
//---------------------------------------------------------------------------
__fastcall TfrmSalary::TfrmSalary(TComponent* Owner)
	: TForm(Owner)
{
    cmbSearch->ItemIndex = 0;
}
//---------------------------------------------------------------------------
void __fastcall TfrmSalary::btnSearchClick(TObject *Sender)
{
	AnsiString _login = cmbSearch->Text;
	string login = string(_login.c_str());
	for (auto &temp : emp_vec) {
		if (temp.login == login) {
			lblFIO->Caption = temp.fio.c_str();
		}
	}
	frmSalary->clear();
	frmSalary->update(login);
}
//---------------------------------------------------------------------------
void __fastcall TfrmSalary::update(string login)
{
	int row = 1;
	for (int i = 0; i < slr_vec.size(); i++) {
		if (login == slr_vec[i].login) {
			stgMain->Cells[0][row] = slr_vec[i].department.c_str();
			stgMain->Cells[1][row] = slr_vec[i].position.c_str();
			stgMain->Cells[2][row] = slr_vec[i].month.c_str();
			stgMain->Cells[3][row] = IntToStr(slr_vec[i].salary);
			row++;
		}
	}
}

void __fastcall TfrmSalary::clear()
{
	stgMain->RowCount = slr_vec.size() + 1;
	stgMain->Cells[0][0] = "Отдел";
	stgMain->Cells[1][0] = "Должность";
	stgMain->Cells[2][0] = "Месяц";
	stgMain->Cells[3][0] = "Зарплата";
	for (int i = 1; i <= slr_vec.size(); i++) {
		stgMain->Cells[0][i] = "";
		stgMain->Cells[1][i] = "";
		stgMain->Cells[2][i] = "";
		stgMain->Cells[3][i] = "";
	}
}
void __fastcall TfrmSalary::btnAddClick(TObject *Sender)
{
	emp_choice = -1;
	AnsiString _login = cmbSearch->Text;
	string login = string(_login.c_str());
	for (auto &temp : emp_vec) {
		if (temp.login == login) {
			emp_temp = temp;
		}
	}
	frmSalary->Hide();
	frmSalaryEdit->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSalary::btnExitClick(TObject *Sender)
{
	frmSalary->Close();
	frmAdmin->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSalary::FormClose(TObject *Sender, TCloseAction &Action)
{
	frmAdmin->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSalary::FormShow(TObject *Sender)
{
	cmbSearch->Clear();
	for (auto &temp : emp_vec) {
		cmbSearch->Items->Add(temp.login.c_str());
	}
    stgMain->RowCount = task_vec.size() + 1;
	AnsiString _login = cmbSearch->Text;
	string login = string(_login.c_str());
	for (auto &temp : emp_vec) {
		if (temp.login == login) {
			lblFIO->Caption = temp.fio.c_str();
		}
	}
	frmSalary->clear();
	frmSalary->update(login);
}
//---------------------------------------------------------------------------

void __fastcall TfrmSalary::btnDeleteClick(TObject *Sender)
{
	AnsiString _login = cmbSearch->Text;
	string login = string(_login.c_str());
	int i = 0;
	int res = -1;
	for (auto &temp : slr_vec) {
		if (temp.login == login &&
		temp.department == AnsiString(stgMain->Cells[0][stgMain->Row]).c_str() &&
		temp.position == AnsiString(stgMain->Cells[1][stgMain->Row]).c_str() &&
		temp.month == AnsiString(stgMain->Cells[2][stgMain->Row]).c_str() &&
		temp.salary == StrToInt(stgMain->Cells[3][stgMain->Row])) {
			res = i;
		}
		i++;
	}
	if (res != -1) {
		slr_vec.erase(slr_vec.begin() + res);
		frmSalary->FormShow(Sender);
	}
}
//---------------------------------------------------------------------------

