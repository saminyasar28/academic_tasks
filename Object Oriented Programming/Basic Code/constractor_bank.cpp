#include<iostream>
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
        Account_Balance=1000;
        Deposite=d;
    }
    Bank(Bank &app)
    {
        Account_Balance=app.Account_Balance+app.Deposite;
    }
    void display(){
         cout<<Account_Balance;
    }





};
int main()
{
    double deposite;
    cout<<"Enter the amount you want to deposite:";
    cin>>deposite;

    Bank user(deposite);
    Bank app(user);
    app.display();
}
