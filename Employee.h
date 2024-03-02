//Employee.h
#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	string tel;
	int salary;

public:
	void setEmployee(string, string, int);
	string getName();
	string getTel();
	int getSalary();
};
