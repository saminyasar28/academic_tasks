#include <bits/stdc++.h>
#include<iostream>
using namespace std;



class student
{
    public:
    string name;
    int id;
    float cgpa;

    void input(string n, int i, float c)
    {
        name=n;
        id=i;
        cgpa=c;
    }
    void display(){

        std::cout<<"Information"<<endl<<display;
    }


};

int main()
{
    student s1;
    s1.input("Samin",360,3.56);
    s1.display();

}
