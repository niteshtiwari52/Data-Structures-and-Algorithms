// Constructor

/*
   1. Name same as class name
   2. call in public
   3. should not any return type

*/
/*
    Type of the constructor
    1. Default
    2. Parameterized
    3.Copy
*/

#include <iostream>
using namespace std;
class student
{
private:
    string studentName;
    int studentId;
    float studentPercentage;

public:
    student()
    {
        cout << " Default constructor - Objets created" << endl;
    }
    void setStudentName(string studentName)
    {
        this->studentName = studentName;
    }
    void setStudentId(int studentId)
    {
        this->studentId = studentId;
    }
    void setStudentPercentage(float studentPercentage)
    {
        this->studentPercentage = studentPercentage;
    }

    void display()
    {
        cout << "Student Deatils" << endl;
        cout << "Student ID : " << studentId << endl;
        cout << "student Name : " << studentName << endl;
        cout << "Percentage : " << studentPercentage << endl;
    }
};

int main()
{
    student s;
    s.setStudentId(1);
    s.setStudentName("Nitesh");
    s.setStudentPercentage(100);
    s.display();

    return 0;
}