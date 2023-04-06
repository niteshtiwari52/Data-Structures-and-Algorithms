// Structure Demo
#include <iostream>
using namespace std;
// Structure Declaration
struct Employee
{
    char emp_Name[10];
    int emp_No;
    float emp_Sal;
};

int main()

{
    // structure Variable
    Employee *ptr, e;
    // Storing address of structur variable
    ptr = &e;
    cout << "Enter Employee Name : ";
    cin.get((*ptr).emp_Name, 10);
    cout << "Enter Employee No. : ";
    cin >> (*ptr).emp_No;
    cout << "Enter Employee Salary : ";
    cin >> (*ptr).emp_Sal;

    cout << endl
         << "******Employee Information******" << endl;
    cout << "Employee Name : " << (*ptr).emp_Name << endl;
    cout << "Employee No. : " << (*ptr).emp_No << endl;
    cout << "Employee Salary : " << (*ptr).emp_Sal << endl;
    return 0;
}