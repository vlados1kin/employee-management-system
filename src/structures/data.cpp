//---------------------------------------------------------------------------

#pragma hdrstop

#include "data.h"
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)

void ReadEmployee(string path) {
	ifstream inFile;
	inFile.open(path);

	string line;
	Employee temp;

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
		emp_vec.push_back(temp);
	}

	inFile.close();
}


void SaveEmployee(string path)
{
	ofstream outFile(path);

	outFile << emp_vec.size() << std::endl;
	for (auto &temp : emp_vec)
		outFile << temp.login << "\n" << temp.password << "\n"
		<< temp.role << "\n" << temp.fio << "\n" << temp.birthdate_year << "\n"
		<< temp.birthdate_month << "\n" << temp.birthdate_day << "\n"
		<< temp.education << "\n" << temp.institution << "\n" << temp.specialization << "\n" << temp.graduation_year << "\n"
		<< temp.telephone << std::endl;

	outFile.close();
}

void ReadTask(string path) {
	ifstream inFile;
	inFile.open(path);

	string line;
	Task temp;

	getline(inFile, line, '\n');
	int c = stoi(line);
	for (int i = 0; i < c; i++) {
		getline(inFile, temp.login, '\n');
		getline(inFile, line, '\n');
		temp.date_year = stoi(line);
		getline(inFile, line, '\n');
		temp.date_month = stoi(line);
		getline(inFile, line, '\n');
		temp.date_day = stoi(line);
        getline(inFile, line, '\n');
		temp.start_hour = stoi(line);
        getline(inFile, line, '\n');
		temp.start_minute = stoi(line);
        getline(inFile, line, '\n');
		temp.end_hour = stoi(line);
        getline(inFile, line, '\n');
		temp.end_minute = stoi(line);
		getline(inFile, temp.description, '\n');
		getline(inFile, line, '\n');
		if (line == "TRUE") {
			temp.completed = true;
		}
		if (line == "FALSE") {
			temp.completed = false;
		}
		task_vec.push_back(temp);
	}

	inFile.close();
}


void SaveTask(string path)
{
	ofstream outFile(path);

	outFile << task_vec.size() << std::endl;
	for (auto &temp : task_vec)
		outFile << temp.login << "\n" << temp.date_year << "\n"
		<< temp.date_month << "\n" << temp.date_day << "\n"
		<< temp.start_hour << "\n" << temp.start_minute << "\n"
		<< temp.end_hour << "\n" << temp.end_minute << "\n"
		<< temp.description << "\n" << temp.completed << std::endl;

	outFile.close();
}

void ReadSalary(string path) {
	ifstream inFile;
	inFile.open(path);

	string line;
	Salary temp;

	getline(inFile, line, '\n');
	int c = stoi(line);
	for (int i = 0; i < c; i++) {
		getline(inFile, temp.login, '\n');
		getline(inFile, temp.department, '\n');
		getline(inFile, temp.position, '\n');
		getline(inFile, temp.month, '\n');
		getline(inFile, line, '\n');
		temp.salary = stoi(line);
		slr_vec.push_back(temp);
	}

	inFile.close();
}


void SaveSalary(string path)
{
	ofstream outFile(path);

	outFile << slr_vec.size() << std::endl;
	for (auto &temp : slr_vec)
		outFile << temp.login << "\n" << temp.department << "\n"
		<< temp.position << "\n" << temp.month << "\n"
		<< temp.salary << std::endl;

	outFile.close();
}

bool CheckPassword(string login, string password)
{
	bool res = false;
	for (auto &temp : emp_vec) {
		if (temp.login == login && temp.password == password) {
			res = true;
			emp_curr = temp;
		}
	}
	return res;
}

bool EmployeeExists(string login)
{
	bool res = false;
	for (auto &temp : emp_vec) {
		if (temp.login == login) {
			res = true;
		}
	}
	return res;
}

vector<Employee> emp_vec;
vector<Task> task_vec;
vector<Salary> slr_vec;
Employee emp_curr;
Task task_curr;
Salary slr_curr;
int emp_choice;
