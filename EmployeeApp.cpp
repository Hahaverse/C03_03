//2023111359 최가윤
//EmployeeApp.cpp
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
    Employee e1;
    e1.setEmployee("홍길동", "010-1234-5678", 4000000);

    cout << "이름 : " << e1.getName() << ", 전화번호 : "
        << e1.getTel() << ", 연봉 : " << e1.getSalary() << "원" << endl;
}