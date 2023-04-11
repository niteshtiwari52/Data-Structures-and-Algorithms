// copy Constructor
/*
    student s1(101 , " Nit" , 67.3);
    student s2(s1);
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
    student(int id, string name, float percent)
    {
        cout << " parameterized constructor - Objets created" << endl;
        studentName = name;
        studentId = id;
        studentPercentage = percent;
    }
    student(student &s)
    {
        cout << " Copy constructor - Objets created" << endl;
        studentId = s.getStudentId();
        studentName = s.getStudentName();
        studentPercentage = s.getStudentPercentage();
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

    string getStudentName()
    {
        return studentName;
    }
    int getStudentId()
    {
        return studentId;
    }
    float getStudentPercentage()
    {
        return studentPercentage;
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
    cout << "***************" << endl;
    cout << "S1 object Creation" << endl;
    student s1(101, "Nitehs", 98.4);
    s1.display();

    cout << "***************" << endl;
    cout << "S2 object Creation" << endl;
    student s2, s;
    s2.display();
    cout << "***************" << endl;
    cout << "S3 object Creation" << endl;
    student s3(s1);
    s3.display();

    return 0;
}