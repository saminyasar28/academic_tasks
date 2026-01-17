#include<bits/stdc++.h>
using namespace std;

//declearing class(defult constractor)
class student
{
    public:
    int id,age;
    string name;



    student(string n,int i, int a)
    {
        name=n;
        id=i;
        age=a;
    }
    //custom copy constructor
    student(student &oriObj)
    {
        this->name=oriObj.name;
        this->id=oriObj.id;
        this->age=oriObj.age;
    }

    void display()
    {
        cout<<"Information"<<endl<<"Name:"<<name<<endl<<"ID:"<<id<<endl<<"Age:"<<age;
    }

};
int main()
{
    student s1("samin", 360,22);
    s1.display();

    student s2(s1);
    s2.display();




}
