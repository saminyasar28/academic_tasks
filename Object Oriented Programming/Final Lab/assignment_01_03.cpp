// Suppose you have three classes: Student, Exam, and Result. The
// Exam class inherits from Student, and the Result class inherits
// from Exam. Each class adds one new data member and displays
// it. Write a program to take and display data from all three
// classes through a single Result object. Identify what type of
// inheritance this demonstrates and describe the flow of
// constructor and destructor calls.
#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string student_name;
};
class Exam : public Student
{
public:
    string exam_name;
};
class Result : public Exam{
public:
    float cg;

    void get_info()
    {
        cout << "Enter Name : ";
        cin >> student_name;
        cout << "Subject Name :  ";
        cin >> exam_name;
        cout << "Enter Result : ";
        cin >> cg;
    }

    void display()
    {
        cout << "Displaying Information From Result Class......" << endl;
        cout << "Name : " << student_name << " " << "Subject : " << exam_name << " " << "Result : " << cg << endl;
    }
};
int main()
{
    Result r1;
    r1.get_info();
    r1.display();

    return 0;
}