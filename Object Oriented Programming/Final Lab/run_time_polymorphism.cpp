#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    int base_var;

    virtual void display()
    {
        cout << "Base class called var = " << base_var << endl;
    }
};
class Derived : public Base{
public:
    int derived_var;

    void display()override
    {
        cout << "Derived class called var = " << base_var << endl;
    
        cout << "Derived class called var = " << derived_var << endl;
    }

};
int main() {
    
    Base *base_Class_pointer;
    Derived d1;

    base_Class_pointer = &d1;

    base_Class_pointer->base_var = 89;
    base_Class_pointer->display();


    Derived *derived_class_pointer;
   // Derived d2;
    
    derived_class_pointer = &d1;
    derived_class_pointer->base_var = 930;
    derived_class_pointer->derived_var = 434;
    derived_class_pointer->display();

    return 0;
}