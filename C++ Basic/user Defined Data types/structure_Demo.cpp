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
    Employee e;

    cout << "Enter Employee Name : ";
    cin.get(e.emp_Name, 10);
    cout << "Enter Employee No. : ";
    cin >> e.emp_No;
    cout << "Enter Employee Salary : ";
    cin >> e.emp_Sal;

    cout << endl
         << "******Employee Information******" << endl;
    cout << "Employee Name : " << e.emp_Name << endl;
    cout << "Employee No. : " << e.emp_No << endl;
    cout << "Employee Salary : " << e.emp_Sal << endl;
    return 0;
}