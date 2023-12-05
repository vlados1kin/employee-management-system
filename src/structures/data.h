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
	float money[12];
};
extern Employee temp, curr;
extern vector<Employee> v;
extern int u;

void ReadEmployee();
void SaveEmployee();
bool CheckPassword(string login, string password);
bool EmployeeExists(string login);

//---------------------------------------------------------------------------
#endif



