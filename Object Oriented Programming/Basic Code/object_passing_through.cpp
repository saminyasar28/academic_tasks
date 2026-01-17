#include<bits/stdc++.h>
using namespace std;
class Example
{
    public:
        int a;
    Example add(Example Ea, Example Eb)
    {
        Example Ec;
        Ec.a=Ea.a+Eb.a;
        return Ec;
    }
};

int main()
{
    Example E1,E2,E3;
    E1.a=50;
    E2.a=100;
    E3.a=0;

    E3=E3.add(E1,E2);

    cout<<E3.a;
}
