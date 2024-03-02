//Employee.cpp
#include <iostream>
#include "Employee.h"
using namespace std;

void Employee::setEmployee(string n, string t, int s) { name = n; tel = t; salary = s; }
string Employee::getName() { return name; }
string Employee::getTel() { return tel; }
int Employee::getSalary() { return salary; }