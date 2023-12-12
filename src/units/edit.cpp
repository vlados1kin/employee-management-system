//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#include <string>
#pragma hdrstop

#include "edit.h"

#include "info.h"
#include "main.h"
#include "data.h"
#include "me.h"
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
	switch (emp_choice) {
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
		if (!EmployeeExists(temp.login) || (EmployeeExists(temp.login) && emp_vec[emp_choice].login == temp.login)) {
			if (temp.login == emp_curr.login) {
				emp_curr = temp;
			}
			emp_vec[emp_choice] = temp;
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
	if (emp_curr.role == "admin") {
		frmInfo->Show();
	} else {
		frmMe->Show();
	}

}
//---------------------------------------------------------------------------
void __fastcall TfrmEdit::btnExitClick(TObject* Sender)
{
	if (emp_curr.role == "admin") {
		frmInfo->Show();
		frmEdit->Close();
	} else {
		frmMe->Show();
		frmEdit->Close();
    }

}
//---------------------------------------------------------------------------

void __fastcall TfrmEdit::FormShow(TObject *Sender)
{
	frmEdit->updateForm();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdit::updateForm()
{
	if (emp_choice == -1) {
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
		editLogin->Text = emp_vec[emp_choice].login.c_str();
		editPassword->Text = emp_vec[emp_choice].password.c_str();
		boxRole->Text = emp_vec[emp_choice].role.c_str();
		editFIO->Text = emp_vec[emp_choice].fio.c_str();
		editBirthdate->Text = emp_vec[emp_choice].birthdate_year * 10000 + emp_vec[emp_choice].birthdate_month * 100 + emp_vec[emp_choice].birthdate_day;
		editEducation->Text = emp_vec[emp_choice].education.c_str();
		editInstitution->Text = emp_vec[emp_choice].institution.c_str();
		editSpecialization->Text = emp_vec[emp_choice].specialization.c_str();
		editGraduationYear->Text = emp_vec[emp_choice].graduation_year;
		editTelephone->Text = emp_vec[emp_choice].telephone.c_str();
	}
	if (emp_curr.role == "user") {
		editLogin->Enabled = false;
		editPassword->Enabled = false;
		boxRole->Enabled = false;
	} else {
		editLogin->Enabled = true;
		editPassword->Enabled = true;
		if (emp_curr.login != AnsiString(editLogin->Text).c_str()) {
			boxRole->Enabled = true;
		} else {
			boxRole->Enabled = false;
		}

	}
}

