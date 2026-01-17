// A company has a base class Employee containing data members
// for name and id, and a derived class Manager that adds a data
// member for department. Another class Engineer is also derived
// from Employee and adds a specialization field. Write a program
// to input details of both a manager and an engineer, and display
// their full details using inheritance. Identify which type of
// inheritance this represents and explain why.

#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name;
    int id;
};
class Manager : public Employee
{
public:
    string department;
    
    Manager(string name, int id, string department)
    {
        this->name = name;
        this-> id = id;
        this->department = department;
        

        cout << "Manager Information :" << endl;
        cout <<"Name : " << name << endl << "ID : " << id << endl <<"Department : " << department << endl;
    }

};
class Engineer : public Employee
{
public:
    string specialization;

    Engineer(string name, int id, string specialization)
    {
        this->name = name;
        this-> id = id;
        this->specialization = specialization;

        cout << "Engineer Information :" << endl;
        cout <<"Name : " << name << endl << "ID : " << id << endl <<"Specialization : " << specialization << endl;
    }
};


int main() {
    
    Manager m1("Samin", 69, "CSE");
    Engineer e1("Samin", 69, "Urdu");

    
    return 0;
}