#include<bits/stdc++.h>
using namespace std;
//Declaring class
class Bank
{
    double Account_Balance;
public:

    double Deposite;

    //Parameterized Constructor Declaring

    Bank(double d)
    {
        Account_Balance=d;
    }
    Bank(Bank &app)
    {
        Account_Balance=Account_Balance+app.Deposite;
    }
    void display(){
         cout<<Account_Balance;
    }





};
int main()
{
    Bank user(1000);
    Bank app(user);

    user.display();

}
