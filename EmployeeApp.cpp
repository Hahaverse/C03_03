//2023111359 �ְ���
//EmployeeApp.cpp
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
    Employee e1;
    e1.setEmployee("ȫ�浿", "010-1234-5678", 4000000);

    cout << "�̸� : " << e1.getName() << ", ��ȭ��ȣ : "
        << e1.getTel() << ", ���� : " << e1.getSalary() << "��" << endl;
}