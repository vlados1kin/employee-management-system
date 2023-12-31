//---------------------------------------------------------------------------

#include <vcl.h>
#include <sstream>
#pragma hdrstop

#include "info.h"
#include "admin.h"
#include "edit.h"
#include "main.h"
#include "data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
using namespace std;
TfrmInfo *frmInfo;
//---------------------------------------------------------------------------
__fastcall TfrmInfo::TfrmInfo(TComponent* Owner)
	: TForm(Owner)
{
	cmbSearch->Items->Add("�����");
	cmbSearch->Items->Add("������");
	cmbSearch->Items->Add("����");
	cmbSearch->Items->Add("���");
	cmbSearch->Items->Add("���� ��������");
	cmbSearch->Items->Add("�����������");
	cmbSearch->Items->Add("��");
	cmbSearch->Items->Add("�������������");
	cmbSearch->Items->Add("��� ���������");
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
	emp_choice = -1;
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
	if (emp_vec[stgMain->Row-1].login != emp_curr.login) {
		emp_vec.erase(emp_vec.begin() + stgMain->Row-1);
		frmInfo->updateStringGrid();
	} else {
		ShowMessage("�� �� ������ ������� ������ ����");
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::updateStringGrid()
{
	stgMain->RowCount = emp_vec.size() + 1;
	stgMain->Cells[0][0] = "�����";
	stgMain->Cells[1][0] = "������";
	stgMain->Cells[2][0] = "����";
	stgMain->Cells[3][0] = "���";
	stgMain->Cells[4][0] = "���� ��������";
	stgMain->Cells[5][0] = "�����������";
	stgMain->Cells[6][0] = "��";
	stgMain->Cells[7][0] = "�������������";
	stgMain->Cells[8][0] = "��� ���������";
	stgMain->Cells[9][0] = "�������";
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
	string login = AnsiString(stgMain->Cells[0][stgMain->Row]).c_str();
	int i = 0;
	for (auto &temp : emp_vec) {
		if (temp.login == login) {
			emp_choice = i;
		}
		i++;
	}
	frmInfo->Hide();
	frmEdit->Show();
	frmInfo->updateStringGrid();
}
//---------------------------------------------------------------------------
void __fastcall TfrmInfo::search(string poleForSearch, string strForSearch)
{
	int row = 1;
	frmInfo->clearStringGrid();
	if (poleForSearch == "�����") {
		for (int i = 0; i < emp_vec.size(); i++) {
			if (strForSearch == emp_vec[i].login) {
				Print(row, i);
				row++;
			}
		}
	}
	if (poleForSearch == "������") {
		for (int i = 0; i < emp_vec.size(); i++) {
			if (strForSearch == emp_vec[i].password) {
				Print(row, i);
				row++;
			}
		}
	}
	if (poleForSearch == "����") {
		for (int i = 0; i < emp_vec.size(); i++) {
			if (strForSearch == emp_vec[i].role) {
				Print(row, i);
				row++;
			}
		}

	}
	if (poleForSearch == "���") {
		for (int i = 0; i < emp_vec.size(); i++) {
			if (strForSearch == emp_vec[i].fio) {
				Print(row, i);
				row++;
			}
		}

	}
	if (poleForSearch == "�����������") {
		for (int i = 0; i < emp_vec.size(); i++) {
			if (strForSearch == emp_vec[i].education) {
				Print(row, i);
				row++;
			}
		}

	}
	if (poleForSearch == "��") {
    	for (int i = 0; i < emp_vec.size(); i++) {
			if (strForSearch == emp_vec[i].institution) {
				Print(row, i);
				row++;
			}
		}

	}
	if (poleForSearch == "�������������") {
		for (int i = 0; i < emp_vec.size(); i++) {
			if (strForSearch == emp_vec[i].specialization) {
				Print(row, i);
				row++;
			}
		}

	}
	if (poleForSearch == "��� ���������") {
		try {
			int _graduation_year = atoi(strForSearch.c_str());
			for (int i = 0; i < emp_vec.size(); i++) {
				if (_graduation_year == emp_vec[i].graduation_year) {
					Print(row, i);
					row++;
				}
			}
		} catch (...) {
			ShowMessage("�������� ����");
		}
	}
	if (poleForSearch == "���� ��������") {
		try {
			istringstream ss(strForSearch.c_str());
			string token;
			int year, month, day;

			getline(ss, token, '.');
			year = stoi(token);

			getline(ss, token, '.');
			month = stoi(token);

			getline(ss, token, '.');
			day = stoi(token);
			for (int i = 0; i < emp_vec.size(); i++) {
				if (year == emp_vec[i].birthdate_year && month == emp_vec[i].birthdate_month && day == emp_vec[i].birthdate_day) {
					Print(row, i);
					row++;
				}
			}
		} catch (...) {
			ShowMessage("�������� ����");
		}
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
	stgMain->Cells[0][0] = "�����";
	stgMain->Cells[1][0] = "������";
	stgMain->Cells[2][0] = "����";
	stgMain->Cells[3][0] = "���";
	stgMain->Cells[4][0] = "���� ��������";
	stgMain->Cells[5][0] = "�����������";
	stgMain->Cells[6][0] = "��";
	stgMain->Cells[7][0] = "�������������";
	stgMain->Cells[8][0] = "��� ���������";
	stgMain->Cells[9][0] = "�������";
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
void __fastcall TfrmInfo::Print(int row, int i) {
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
}

