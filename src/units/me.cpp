//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "me.h"
#include "data.h"
#include "admin.h"
#include "main.h"
#include "edit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMe *frmMe;
//---------------------------------------------------------------------------
__fastcall TfrmMe::TfrmMe(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmMe::btnExitClick(TObject *Sender)
{
	if (emp_curr.role == "admin") {
		frmAdmin->Show();
		frmMe->Close();
	} else {
		frmMain->Show();
		frmMe->Close();
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmMe::FormClose(TObject *Sender, TCloseAction &Action)
{
	if (emp_curr.role == "admin") {
		frmAdmin->Show();
	} else {
		frmMain->Show();
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmMe::FormShow(TObject *Sender)
{
	auto s = "Добро пожаловать, " + emp_curr.fio + "!";
	Caption = s.c_str();
	lblLogin->Caption = emp_curr.login.c_str();
	lblPassword->Caption = emp_curr.password.c_str();
	lblRole->Caption = emp_curr.role.c_str();
	lblFIO->Caption = emp_curr.fio.c_str();
	lblBirthdate->Caption = IntToStr(emp_curr.birthdate_year) + "." + IntToStr(emp_curr.birthdate_month) + "." + IntToStr(emp_curr.birthdate_day);
	lblEducation->Caption = emp_curr.education.c_str();
	lblInstitution->Caption = emp_curr.institution.c_str();
	lblSpecialization->Caption = emp_curr.specialization.c_str();
	lblGraduationYear->Caption = IntToStr(emp_curr.graduation_year);
	lblTelephone->Caption = emp_curr.telephone.c_str();
	frmMe->updateSalary();
	frmMe->updateTask();
}
//---------------------------------------------------------------------------
void __fastcall TfrmMe::btnEditClick(TObject *Sender)
{
	emp_choice = emp_num;
	frmMe->Hide();
	frmEdit->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmMe::updateSalary()
{
	stgSalary->RowCount = slr_vec.size() + 1;
	stgSalary->Cells[0][0] = "Отдел";
	stgSalary->Cells[1][0] = "Должность";
	stgSalary->Cells[2][0] = "Месяц";
	stgSalary->Cells[3][0] = "Зарплата";
	int row = 1;
	for (int i = 0; i < slr_vec.size(); i++) {
		if (emp_curr.login == slr_vec[i].login) {
			stgSalary->Cells[0][row] = slr_vec[i].department.c_str();
			stgSalary->Cells[1][row] = slr_vec[i].position.c_str();
			stgSalary->Cells[2][row] = slr_vec[i].month.c_str();
			stgSalary->Cells[3][row] = IntToStr(slr_vec[i].salary);
			row++;
		}
	}
}
void __fastcall TfrmMe::updateTask()
{
	stgTask->RowCount = task_vec.size() + 1;
	stgTask->Cells[0][0] = "Дата";
	stgTask->Cells[1][0] = "Время начала";
	stgTask->Cells[2][0] = "Время окончания";
	stgTask->Cells[3][0] = "Описание";
	stgTask->Cells[4][0] = "Завершено";
	int row = 1;
	for (int i = 0; i < task_vec.size(); i++) {
		if (emp_curr.login == task_vec[i].login) {
			stgTask->Cells[0][row] = IntToStr(task_vec[i].date_year) + "." + IntToStr(task_vec[i].date_month) + "." + IntToStr(task_vec[i].date_day);
			stgTask->Cells[1][row] = IntToStr(task_vec[i].start_hour) + ":" + IntToStr(task_vec[i].start_minute);
			stgTask->Cells[2][row] = IntToStr(task_vec[i].end_hour) + ":" + IntToStr(task_vec[i].end_minute);
			stgTask->Cells[3][row] = task_vec[i].description.c_str();
			if (task_vec[i].completed) {
				stgTask->Cells[4][row] = "да";
			} else {
				stgTask->Cells[4][row] = "нет";
			}
			row++;
		}
	}
}
void __fastcall TfrmMe::btnSaveClick(TObject *Sender)
{
	int row = 1;
	for (int i = 0; i < task_vec.size(); i++) {
		if (emp_curr.login == task_vec[i].login) {
			if (stgTask->Cells[4][row] == "да") {
				task_vec[i].completed = true;
			}
			if (stgTask->Cells[4][row] == "нет") {
				task_vec[i].completed = false;
			}
			row++;
		}
	}
}
//---------------------------------------------------------------------------

