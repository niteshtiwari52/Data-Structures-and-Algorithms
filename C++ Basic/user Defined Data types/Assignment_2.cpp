/*
Problem Description

Write a C++ program which accepts 5 student records .The records of each student will include student id, name and total marks, grade and percentage. Display the details of all the students at the end.


Step 1: Store the student details in a structure. We can use a character array to store the names i.e the character array will be a member of the structure
Step 2: Create an array for 5 structure variables to access the information for 5 Students
Step 3: Accept the information from the user to store the details of the students
Step 4: Use a display function which will display the details. The display function should accept structure reference variable as parameter

*/

#include <iostream>
using namespace std;
struct Students
{
    int student_id;
    char student_name[50];
    float student_total_marks;
    char student_grade;
    float student_percentage;
};

void display(Students stu[])
{
    cout << endl
         << "******Student Information******" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Details of Student " << i + 1 << endl;
        cout << "Student id : " << stu[i].student_id << endl;
        ;
        cout << "Student name : " << stu[i].student_name << endl;
        ;
        cout << "Student total marks : " << stu[i].student_total_marks << endl;
        ;
        cout << "Student grade : " << stu[i].student_grade << endl;
        ;
        cout << "Student percentage : " << stu[i].student_percentage << endl;
        cout << endl;
    }
}

int main()
{
    Students stu[5];

    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Enter Details of Student " << i + 1 << endl;
        stu[i].student_id = i + 1;
        cout << "Enter Name : ";
        cin.ignore(); // to clear the input buffer
        cin.get(stu[i].student_name, 50);
        cout << "Enter Total marks : ";
        cin >> stu[i].student_total_marks;
        cout << "Enter Grade : ";
        cin >> stu[i].student_grade;
        cout << "Enter percentage : ";
        cin >> stu[i].student_percentage;
        cout << endl;
    }

    display(stu);

    return 0;
}