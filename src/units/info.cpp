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
	if (v[stgMain->Row-1].login != curr.login) {
		v.erase(v.begin() + stgMain->Row-1);
		frmInfo->updateStringGrid();
	} else {
		ShowMessage("Вы не можете удалить самого себя");
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::updateStringGrid()
{
	stgMain->RowCount = v.size() + 1;
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
	for (int i = 1; i <= v.size(); i++) {
		stgMain->Cells[0][i] = v[i-1].login.c_str();
		stgMain->Cells[1][i] = v[i-1].password.c_str();
		stgMain->Cells[2][i] = v[i-1].role.c_str();
		stgMain->Cells[3][i] = v[i-1].fio.c_str();
		stgMain->Cells[4][i] = IntToStr(v[i-1].birthdate_year) + "." + IntToStr(v[i-1].birthdate_month) + "." + IntToStr(v[i-1].birthdate_day);
		stgMain->Cells[5][i] = v[i-1].education.c_str();
		stgMain->Cells[6][i] = v[i-1].institution.c_str();
		stgMain->Cells[7][i] = v[i-1].specialization.c_str();
		stgMain->Cells[8][i] = IntToStr(v[i-1].graduation_year);
		stgMain->Cells[9][i] = v[i-1].telephone.c_str();
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

