//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#include <string>
#pragma hdrstop

#include "edit.h"

#include "info.h"
#include "data.cpp"
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
    Employee t;
    try {
        t.login = AnsiString(editLogin->Text);
        t.password = AnsiString(editPassword->Text);
        t.role = AnsiString(boxRole->Text);
        t.fio = AnsiString(editFIO->Text);
		t.birthdate_year = StrToInt(editBirthdate->Text) / 10000;
        t.birthdate_month = StrToInt(editBirthdate->Text) / 100 % 100;
		t.birthdate_day = StrToInt(editBirthdate->Text) % 100;
        t.education = AnsiString(editEducation->Text);
        t.institution = AnsiString(editInstitution->Text);
        t.specialization = AnsiString(editSpecialization->Text);
        t.graduation_year = StrToInt(editGraduationYear->Text);
        t.telephone = AnsiString(editTelephone->Text);
	} catch (...) {

	}

	v.push_back(t);

	frmInfo->Show();
	frmEdit->Close();
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

