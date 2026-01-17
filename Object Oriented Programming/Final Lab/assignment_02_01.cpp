// A company maintains employee records using classes. The base
// class Employee contains protected data members: name and
// salary, and a public function showInfo(). A class Manager
// inherits from Employee, and a class Sub_Manager inherits from
// Manager. Both classes can modify the salary, but it should not
// allow the main function to directly access or call the base class’s
// public methods using a Manager object. Which inheritance
// mode (public, protected, or private) should be chosen for the
// Manager class and why?
#include <bits/stdc++.h>
using namespace std;
class Employee
{
protected:
    string name;
    double salary = 1000;

public:
    void showinfo()
    {
        cout << "Name : " << " " << "Salary : " << salary << endl;
    }
};
class Manager : protected Employee
{
public:
    void displayManager()
    {
        cout << "Primary Salary : " << salary << endl;
        cout << "Salary Updated From Manager Class : " << (salary + 1000) << endl;
    }
};

class Sub_Manager : protected Manager
{
public:
    void displaySubManager()
    {
        cout << "Primary Salary : " << salary << endl;
        cout << "Salary Updated From Sub Manager Class : " << (salary + 1000) << endl;
    }
};
int main()
{
    Manager m1;
    m1.displayManager();
    Sub_Manager m2;
    m2.displaySubManager();

    return 0;
}