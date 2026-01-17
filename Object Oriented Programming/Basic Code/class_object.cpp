#include<bits/stdc++.h>
using namespace std;

// creating class
class Student 
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;

        cout << name << " " << roll << endl;
    }

    ~Student ()
    {
        cout << "Destructor has been called" << endl;
    }

};
int main()
{   
    Student s1("abid",23);
    Student s2("khabib", 34);

    return 0;
}