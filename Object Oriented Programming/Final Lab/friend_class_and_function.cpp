#include<bits/stdc++.h>
using namespace std;
class A
{
public:
int x;
string s;
char c;
public:
    A()
    {
        x = 0;
        s = "Null";
    }

    //friend class B;
    //friend void fun(A obj1, A obj2, char c);

};
void fun(A obj1, A obj2, char c)
{
        cout << obj1.x;
        cout << obj2.s;
        cout << c;
}

class B
{
public:
    B(A obj)
    {
        cout << obj.x ;
        cout << obj.s;
    }

};
int main()
{
    A ob;
    B obj(ob);
    fun(ob,ob, 'x');


}