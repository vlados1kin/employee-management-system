//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#include <string>
#pragma hdrstop

#include "edit.h"

#include "info.h"
#include "main.h"
#include "data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmEdit* frmEdit;
//---------------------------------------------------------------------------
__fastcall TfrmEdit::TfrmEdit(TComponent* Owner) : TForm(Owner)
{
    boxRole->Items->Add("user");
	boxRole->Items->Add("admin");
	boxRole->ItemIndex = 0;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TfrmEdit::btnEnterClick(TObject* Sender)
{
	Employee temp;
	try {
		temp.login = AnsiString(editLogin->Text);
		temp.password = AnsiString(editPassword->Text);
		temp.role = AnsiString(boxRole->Text);
		temp.fio = AnsiString(editFIO->Text);
		temp.birthdate_year = StrToInt(editBirthdate->Text) / 10000;
		temp.birthdate_month = StrToInt(editBirthdate->Text) / 100 % 100;
		temp.birthdate_day = StrToInt(editBirthdate->Text) % 100;
		temp.education = AnsiString(editEducation->Text);
		temp.institution = AnsiString(editInstitution->Text);
		temp.specialization = AnsiString(editSpecialization->Text);
		temp.graduation_year = StrToInt(editGraduationYear->Text);
		temp.telephone = AnsiString(editTelephone->Text);
	} catch (...) {

	}
	switch (u) {
		case -1:
		if (!EmployeeExists(temp.login)) {
			emp_vec.push_back(temp);
			frmInfo->Show();
			frmEdit->Close();
		} else {
			ShowMessage("ѕользователь с данным логином уже существует");
		}
		break;
	default:
		if (!EmployeeExists(temp.login) || (EmployeeExists(temp.login) && emp_vec[u].login == temp.login)) {
			if (temp.login == curr.login) {
				curr = temp;
			}
			emp_vec[u] = temp;
			frmInfo->Show();
			frmEdit->Close();
		} else {
			ShowMessage("ѕользователь с данным логином уже существует");
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdit::FormClose(TObject* Sender, TCloseAction &Action)
{
    frmInfo->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdit::btnExitClick(TObject* Sender)
{
    frmInfo->Show();
    frmEdit->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmEdit::FormShow(TObject *Sender)
{
	frmEdit->updateForm();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdit::updateForm()
{
	if (u == -1) {
		editLogin->Text = "";
		editPassword->Text = "";
		boxRole->Text = "user";
		editFIO->Text = "";
		editBirthdate->Text = "";
		editEducation->Text = "";
		editInstitution->Text = "";
		editSpecialization->Text = "";
		editGraduationYear->Text = "";
		editTelephone->Text = "";
	} else {
		editLogin->Text = emp_vec[u].login.c_str();
		editPassword->Text = emp_vec[u].password.c_str();
		boxRole->Text = emp_vec[u].role.c_str();
		editFIO->Text = emp_vec[u].fio.c_str();
		editBirthdate->Text = emp_vec[u].birthdate_year * 10000 + emp_vec[u].birthdate_month * 100 + emp_vec[u].birthdate_day;
		editEducation->Text = emp_vec[u].education.c_str();
		editInstitution->Text = emp_vec[u].institution.c_str();
		editSpecialization->Text = emp_vec[u].specialization.c_str();
		editGraduationYear->Text = emp_vec[u].graduation_year;
		editTelephone->Text = emp_vec[u].telephone.c_str();
    }

}
