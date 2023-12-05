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
	if (!EmployeeExists(temp.login)) {
		if (u == -1) {
			v.push_back(temp);
		} else {
			v[u] = temp;
        }
		frmInfo->Show();
		frmEdit->Close();
	} else {
        ShowMessage("ѕользователь с данным логином уже существует");
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
//	temp.login = AnsiString(editLogin->Text);
//	temp.password = AnsiString(editPassword->Text);
//	temp.role = AnsiString(boxRole->Text);
//	temp.fio = AnsiString(editFIO->Text);
//	temp.birthdate_year = StrToInt(editBirthdate->Text) / 10000;
//	temp.birthdate_month = StrToInt(editBirthdate->Text) / 100 % 100;
//	temp.birthdate_day = StrToInt(editBirthdate->Text) % 100;
//	temp.education = AnsiString(editEducation->Text);
//	temp.institution = AnsiString(editInstitution->Text);
//	temp.specialization = AnsiString(editSpecialization->Text);
//	temp.graduation_year = StrToInt(editGraduationYear->Text);
//	temp.telephone = AnsiString(editTelephone->Text);

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
		editLogin->Text = v[u].login.c_str();
		editPassword->Text = v[u].password.c_str();
		boxRole->Text = v[u].role.c_str();
		editFIO->Text = v[u].fio.c_str();
        editBirthdate->Text = v[u].birthdate_year * 10000 + v[u].birthdate_month * 100 + v[u].birthdate_day;
		editEducation->Text = v[u].education.c_str();
		editInstitution->Text = v[u].institution.c_str();
		editSpecialization->Text = v[u].specialization.c_str();
		editGraduationYear->Text = v[u].graduation_year;
		editTelephone->Text = v[u].telephone.c_str();
    }

}
