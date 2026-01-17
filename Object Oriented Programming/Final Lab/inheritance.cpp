#include <bits/stdc++.h>
using namespace std;
// declaring parents class
class Parents
{
public:
    int age;
    string name;
    Parents()
    {
        cout << "Parents constructor called" << endl;
    }
    ~Parents()
    {
        cout << "Parents destructor called"<<endl;
    }
};

// declaring child class
class Child : public Parents
{
public:
    int id;
    Child()
    {
        cout << "child constructor called" << endl;
    }

    void setInfo(string name, int age, int id)
    {
        this->name = name;
        this->age = age;
        this->id = id;
    }
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Id: " << id << endl;
    }
    ~Child()
    {
        cout << "child destrutor called"<<endl;
    }
};
int main()
{
    Child c1;
    c1.setInfo("Samin", 22, 365);
    c1.getInfo();
}