//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "info.h"
#include "admin.h"
#include "edit.h"
#include "main.h"
#include "data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmInfo *frmInfo;
//---------------------------------------------------------------------------
__fastcall TfrmInfo::TfrmInfo(TComponent* Owner)
	: TForm(Owner)
{
	cmbSearch->Items->Add("Логин");
	cmbSearch->Items->Add("Пароль");
	cmbSearch->Items->Add("Роль");
	cmbSearch->Items->Add("ФИО");
	cmbSearch->Items->Add("День рождения");
	cmbSearch->Items->Add("Образование");
	cmbSearch->Items->Add("УО");
	cmbSearch->Items->Add("Специализация");
	cmbSearch->Items->Add("Год окончания");
	cmbSearch->Items->Add("Телефон");
	cmbSearch->ItemIndex = 0;
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::btnExitClick(TObject *Sender)
{
	frmAdmin->Show();
	frmInfo->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::FormClose(TObject *Sender, TCloseAction &Action)
{
    frmAdmin->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::btnAddClick(TObject *Sender)
{
	u = -1;
	frmInfo->Hide();
	frmEdit->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmInfo::FormShow(TObject *Sender)
{
	frmInfo->updateStringGrid();
}
//---------------------------------------------------------------------------

void __fastcall TfrmInfo::btnDeleteClick(TObject *Sender)
{
	if (emp_vec[stgMain->Row-1].login != curr.login) {
		emp_vec.erase(emp_vec.begin() + stgMain->Row-1);
		frmInfo->updateStringGrid();
	} else {
		ShowMessage("Вы не можете удалить самого себя");
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::updateStringGrid()
{
	stgMain->RowCount = emp_vec.size() + 1;
	stgMain->Cells[0][0] = "Логин";
	stgMain->Cells[1][0] = "Пароль";
	stgMain->Cells[2][0] = "Роль";
	stgMain->Cells[3][0] = "ФИО";
	stgMain->Cells[4][0] = "День рождения";
	stgMain->Cells[5][0] = "Образование";
	stgMain->Cells[6][0] = "УО";
	stgMain->Cells[7][0] = "Специализация";
	stgMain->Cells[8][0] = "Год окончания";
	stgMain->Cells[9][0] = "Телефон";
	for (int i = 1; i <= emp_vec.size(); i++) {
		stgMain->Cells[0][i] = emp_vec[i-1].login.c_str();
		stgMain->Cells[1][i] = emp_vec[i-1].password.c_str();
		stgMain->Cells[2][i] = emp_vec[i-1].role.c_str();
		stgMain->Cells[3][i] = emp_vec[i-1].fio.c_str();
		stgMain->Cells[4][i] = IntToStr(emp_vec[i-1].birthdate_year) + "." + IntToStr(emp_vec[i-1].birthdate_month) + "." + IntToStr(emp_vec[i-1].birthdate_day);
		stgMain->Cells[5][i] = emp_vec[i-1].education.c_str();
		stgMain->Cells[6][i] = emp_vec[i-1].institution.c_str();
		stgMain->Cells[7][i] = emp_vec[i-1].specialization.c_str();
		stgMain->Cells[8][i] = IntToStr(emp_vec[i-1].graduation_year);
		stgMain->Cells[9][i] = emp_vec[i-1].telephone.c_str();
	}
}
void __fastcall TfrmInfo::btnEditClick(TObject *Sender)
{
	u = stgMain->Row-1;
	frmInfo->Hide();
	frmEdit->Show();
	frmInfo->updateStringGrid();
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::search(string poleForSerach, string strForSearch)
{
	int row = 1;
    frmInfo->clearStringGrid();
	if (poleForSerach == "Логин") {
		for (int i = 0; i < emp_vec.size(); i++) {
			if (strForSearch == emp_vec[i].login) {
				stgMain->Cells[0][row] = emp_vec[i].login.c_str();
				stgMain->Cells[1][row] = emp_vec[i].password.c_str();
				stgMain->Cells[2][row] = emp_vec[i].role.c_str();
				stgMain->Cells[3][row] = emp_vec[i].fio.c_str();
				stgMain->Cells[4][row] = IntToStr(emp_vec[i].birthdate_year) + "." + IntToStr(emp_vec[i].birthdate_month) + "." + IntToStr(emp_vec[i].birthdate_day);
				stgMain->Cells[5][row] = emp_vec[i].education.c_str();
				stgMain->Cells[6][row] = emp_vec[i].institution.c_str();
				stgMain->Cells[7][row] = emp_vec[i].specialization.c_str();
				stgMain->Cells[8][row] = IntToStr(emp_vec[i].graduation_year);
				stgMain->Cells[9][row] = emp_vec[i].telephone.c_str();
				row++;
			}
		}
	}
	if (poleForSerach == "Пароль") {

	}
	if (poleForSerach == "Роль") {

	}
	if (poleForSerach == "ФИО") {

	}
	if (poleForSerach == "День рождения") {

	}
	if (poleForSerach == "Образование") {

	}
	if (poleForSerach == "УО") {

	}
	if (poleForSerach == "Специализация") {

	}
	if (poleForSerach == "Год окончания") {

	}
	if (poleForSerach == "Телефон") {

	}
}
void __fastcall TfrmInfo::btnSearchClick(TObject *Sender)
{
	AnsiString _strForSearch = editSearch->Text;
	AnsiString _poleForSearch = cmbSearch->Text;
	string strForSearch = string(_strForSearch.c_str());
	string poleForSearch = string(_poleForSearch.c_str());
	frmInfo->search(poleForSearch, strForSearch);
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::clearStringGrid()
{
	stgMain->RowCount = emp_vec.size() + 1;
	stgMain->Cells[0][0] = "Логин";
	stgMain->Cells[1][0] = "Пароль";
	stgMain->Cells[2][0] = "Роль";
	stgMain->Cells[3][0] = "ФИО";
	stgMain->Cells[4][0] = "День рождения";
	stgMain->Cells[5][0] = "Образование";
	stgMain->Cells[6][0] = "УО";
	stgMain->Cells[7][0] = "Специализация";
	stgMain->Cells[8][0] = "Год окончания";
	stgMain->Cells[9][0] = "Телефон";
	for (int i = 1; i <= emp_vec.size(); i++) {
		stgMain->Cells[0][i] = "";
		stgMain->Cells[1][i] = "";
		stgMain->Cells[2][i] = "";
		stgMain->Cells[3][i] = "";
		stgMain->Cells[4][i] = "";
		stgMain->Cells[5][i] = "";
		stgMain->Cells[6][i] = "";
		stgMain->Cells[7][i] = "";
		stgMain->Cells[8][i] = "";
		stgMain->Cells[9][i] = "";
	}
}
void __fastcall TfrmInfo::btnClearClick(TObject *Sender)
{
	frmInfo->updateStringGrid();
}
//---------------------------------------------------------------------------

