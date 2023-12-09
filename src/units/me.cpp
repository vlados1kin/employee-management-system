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

}
//---------------------------------------------------------------------------
void __fastcall TfrmMe::btnEditClick(TObject *Sender)
{
	emp_choice = emp_num;
	frmMe->Hide();
	frmEdit->Show();
}
//---------------------------------------------------------------------------

