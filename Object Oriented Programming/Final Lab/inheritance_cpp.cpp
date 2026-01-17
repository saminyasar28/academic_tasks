#include <bits/stdc++.h>
using namespace std;

class teacher
{
public:
    string name;
    int age;

    teacher()
    {
        cout << "Parent class er constructor" << endl;
    }
};
class student : public teacher
{
public:
    void display()
    {
        cout << name << " " << age << endl;
    }
    student()
    {
        cout << "child class er constructor" << endl;
    }
};
class gradstudent : public teacher
{
public:
    gradstudent()
    {
        cout << "Child 2 er constructor" << endl;
    }
};

int main()
{
    gradstudent g1;

    // student s1;
    // s1.name = "Samin";
    // s1.age = 65;

    // s1.display();
    return 0;
}