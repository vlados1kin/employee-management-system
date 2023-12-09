//---------------------------------------------------------------------------

#include <vcl.h>
#include <sstream>
using namespace std;
#pragma hdrstop

#include "task.h"
#include "admin.h"
#include "data.h"
#include "taskedit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmTask *frmTask;
//---------------------------------------------------------------------------
__fastcall TfrmTask::TfrmTask(TComponent* Owner)
	: TForm(Owner)
{
	for (auto &temp : emp_vec) {
		cmbSearch->Items->Add(temp.login.c_str());
	}
	cmbSearch->ItemIndex = 0;
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
void __fastcall TfrmTask::btnSearchClick(TObject *Sender)
{
	AnsiString _login = cmbSearch->Text;
	string login = string(_login.c_str());
	for (auto &temp : emp_vec) {
		if (temp.login == login) {
			lblFIO->Caption = temp.fio.c_str();
		}
	}
	frmTask->clear();
	frmTask->update(login);
}
//---------------------------------------------------------------------------
void __fastcall TfrmTask::update(string login)
{
	int row = 1;
	for (int i = 0; i < task_vec.size(); i++) {
		if (login == task_vec[i].login) {
			stgMain->Cells[0][row] = IntToStr(task_vec[i].date_year) + "." + IntToStr(task_vec[i].date_month) + "." + IntToStr(task_vec[i].date_day);
			stgMain->Cells[1][row] = IntToStr(task_vec[i].start_hour) + ":" + IntToStr(task_vec[i].start_minute);
			stgMain->Cells[2][row] = IntToStr(task_vec[i].end_hour) + ":" + IntToStr(task_vec[i].end_minute);
			stgMain->Cells[3][row] = task_vec[i].description.c_str();
			if (task_vec[i].completed) {
				stgMain->Cells[4][row] = "да";
			} else {
				stgMain->Cells[4][row] = "нет";
			}
			row++;
		}
	}
}
void __fastcall TfrmTask::clear()
{
	stgMain->RowCount = task_vec.size() + 1;
	stgMain->Cells[0][0] = "Дата";
	stgMain->Cells[1][0] = "Время начала";
	stgMain->Cells[2][0] = "Время окончания";
	stgMain->Cells[3][0] = "Описание";
	stgMain->Cells[4][0] = "Завершено";
	for (int i = 1; i <= task_vec.size(); i++) {
		stgMain->Cells[0][i] = "";
		stgMain->Cells[1][i] = "";
		stgMain->Cells[2][i] = "";
		stgMain->Cells[3][i] = "";
		stgMain->Cells[4][i] = "";
	}
}
void __fastcall TfrmTask::btnAddClick(TObject *Sender)
{
	emp_choice = -1;
	AnsiString _login = cmbSearch->Text;
	string login = string(_login.c_str());
	for (auto &temp : emp_vec) {
		if (temp.login == login) {
			emp_temp = temp;
		}
	}
	frmTask->Hide();
	frmTaskEdit->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTask::btnEditClick(TObject *Sender)
{
	emp_choice = stgMain->Row-1;
	frmTask->Hide();
	frmTaskEdit->Show();
	AnsiString _login = cmbSearch->Text;
	string login = string(_login.c_str());
	frmTask->update(login);
}
//---------------------------------------------------------------------------

void __fastcall TfrmTask::btnDeleteClick(TObject *Sender)
{
	AnsiString _login = cmbSearch->Text;
	string login = string(_login.c_str());
	int year, month, day;
	int s_hour, s_minute;
    int e_hour, e_minute;

	try {
		istringstream ss(AnsiString(stgMain->Cells[0][stgMain->Row]).c_str());
		string token;


		getline(ss, token, '.');
		year = stoi(token);

		getline(ss, token, '.');
		month = stoi(token);

		getline(ss, token, '.');
		day = stoi(token);

		istringstream ps(AnsiString(stgMain->Cells[1][stgMain->Row]).c_str());


		getline(ps, token, ':');
		s_hour = stoi(token);

		getline(ps, token, ':');
		s_minute = stoi(token);

		istringstream es(AnsiString(stgMain->Cells[2][stgMain->Row]).c_str());

		getline(es, token, ':');
		e_hour = stoi(token);

		getline(es, token, ':');
		e_minute = stoi(token);
	} catch (...) {
		//ShowMessage("Неверный ввод");
	}

	int i = 0;
	int res = -1;
	for (auto &temp : task_vec) {
		if (temp.login == login && temp.date_year == year && temp.date_month == month && temp.date_day == day && temp.start_hour == s_hour && temp.start_minute == s_minute && temp.end_hour == e_hour && temp.end_minute == e_minute) {
			res = i;
		}
		i++;
	}
	if (res != -1) {
		task_vec.erase(task_vec.begin() + res);
		frmTask->FormShow(Sender);
	}
}
//---------------------------------------------------------------------------

void __fastcall TfrmTask::FormShow(TObject *Sender)
{
    stgMain->RowCount = task_vec.size() + 1;
	AnsiString _login = cmbSearch->Text;
	string login = string(_login.c_str());
	for (auto &temp : emp_vec) {
		if (temp.login == login) {
			lblFIO->Caption = temp.fio.c_str();
		}
	}
	frmTask->clear();
	frmTask->update(login);
}
//---------------------------------------------------------------------------

