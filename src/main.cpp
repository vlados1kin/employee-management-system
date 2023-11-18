//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#pragma hdrstop

#include "main.h"

#include "admin.h"
#include "data.cpp"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;

//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
	: TForm(Owner)
{
	e.login = "dfdfd";
	e.password = "dfdf";
	e.role = "dfdfd";
	e.fio = "fdfd";
	e.birthdate_year = 2020;
	e.birthdate_month = 10;
	e.birthdate_day = 10;
	e.education = "jdbhdbfh";
	e.institution = "djbdhbf";
	e.specialization = "dnfdfj";
	e.graduation_year = 2022;
	e.telephone = "+73842748";

	ofstream outFile("files/employee.txt");

	outFile << e.login << "\n" << e.password << "\n"
	<< e.role << "\n" << e.fio << "\n" << e.birthdate_year << "\n"
	<< e.birthdate_month << "\n" << e.birthdate_day << "\n"
	<< e.education << "\n" << e.institution << "\n" << e.specialization << "\n" << e.graduation_year << "\n"
	<< e.telephone << "\n" << std::endl;

    outFile << e.login << "\n" << e.password << "\n"
	<< e.role << "\n" << e.fio << "\n" << e.birthdate_year << "\n"
	<< e.birthdate_month << "\n" << e.birthdate_day << "\n"
	<< e.education << "\n" << e.institution << "\n" << e.specialization << "\n" << e.graduation_year << "\n"
	<< e.telephone << "\n" << std::endl;

	outFile.close();
	// std::ios::binary

	ifstream inFile("files/employee.txt");

	inFile >> o.login >> o.password
	>> o.role >> o.fio >> o.birthdate_year
	>> o.birthdate_month >> o.birthdate_day
	>> o.education >> o.institution >> o.specialization >> o.graduation_year
	>> o.telephone;

    inFile >> o.login >> o.password
	>> o.role >> o.fio >> o.birthdate_year
	>> o.birthdate_month >> o.birthdate_day
	>> o.education >> o.institution >> o.specialization >> o.graduation_year
	>> o.telephone;

	inFile.close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnEnterClick(TObject *Sender)
{
	frmAdmin->Show();
	frmMain->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnExitClick(TObject *Sender)
{
	frmMain->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnShowClick(TObject *Sender)
{
	if (editPassword->PasswordChar == '*') {
		editPassword->PasswordChar = '\0';
	} else {
		editPassword->PasswordChar = '*';
    }
}
//---------------------------------------------------------------------------
