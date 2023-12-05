//---------------------------------------------------------------------------

#ifndef dataH
#define dataH
#include <vector>
#include <string>
using namespace std;
struct Employee {
	string login;
	string password;
	string role;
	string fio;
	int birthdate_year;
	int birthdate_month;
	int birthdate_day;
	string education;
	string institution;
	string specialization;
	int graduation_year;
	string telephone;
};

struct Task {
	string login;
	int date_year;
	int date_month;
	int date_day;
	int start_hour;
	int start_minute;
	int end_hour;
	int end_minute;
	string description;
	bool completed;
};

struct Salary {
	string login;
	string department;
	string position;
    string month;
	int salary;
};
extern Employee curr;
extern vector<Employee> emp_vec;
extern vector<Task> task_vec;
extern vector<Salary> slr_vec;
extern int u;

void ReadEmployee(string path);
void SaveEmployee(string path);
void ReadTask(string path);
void SaveTask(string path);
void ReadSalary(string path);
void SaveSalary(string path);
bool CheckPassword(string login, string password);
bool EmployeeExists(string login);

//---------------------------------------------------------------------------
#endif



