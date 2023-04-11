// PArameterized Constructor

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
    student s(101, "Nitehs", 98.4);
    // s.setStudentId(1);
    // s.setStudentName("Nitesh");
    // s.setStudentPercentage(100);
    s.display();

    student s1;
    return 0;
}