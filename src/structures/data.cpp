//---------------------------------------------------------------------------

#pragma hdrstop

#include "data.h"
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)

void ReadEmployee() {
	ifstream inFile;
	inFile.open("files/employee.txt");

	string line;

	getline(inFile, line, '\n');
	int c = stoi(line);
	for (int i = 0; i < c; i++) {
		getline(inFile, temp.login, '\n');
		getline(inFile, temp.password, '\n');
		getline(inFile, temp.role, '\n');
		getline(inFile, temp.fio, '\n');
		getline(inFile, line, '\n');
		temp.birthdate_year = stoi(line);
		getline(inFile, line, '\n');
		temp.birthdate_month = stoi(line);
		getline(inFile, line, '\n');
		temp.birthdate_day = stoi(line);
		getline(inFile, temp.education, '\n');
		getline(inFile, temp.institution, '\n');
		getline(inFile, temp.specialization, '\n');
		getline(inFile, line, '\n');
		temp.graduation_year = stoi(line);
		getline(inFile, temp.telephone, '\n');
		v.push_back(temp);
	}

	inFile.close();
}


void SaveEmployee()
{
	ofstream outFile("files/employee.txt");

	outFile << v.size() << std::endl;
	for (auto &temp : v)
		outFile << temp.login << "\n" << temp.password << "\n"
		<< temp.role << "\n" << temp.fio << "\n" << temp.birthdate_year << "\n"
		<< temp.birthdate_month << "\n" << temp.birthdate_day << "\n"
		<< temp.education << "\n" << temp.institution << "\n" << temp.specialization << "\n" << temp.graduation_year << "\n"
		<< temp.telephone << std::endl;

	outFile.close();
}

bool CheckPassword(string login, string password)
{
	bool res = false;
	for (auto &temp : v) {
		if (temp.login == login && temp.password == password) {
			res = true;
			curr = temp;
		}
	}
	return res;
}

bool EmployeeExists(string login)
{
	bool res = false;
	for (auto &temp : v) {
		if (temp.login == login) {
			res = true;
		}
	}
	return res;
}

vector<Employee> v;
Employee temp, curr;
int u;
