#include <bits/stdc++.h>
using namespace std;
class Parents
{
public:
    int x;
    string n;
    Parents(int x, string n)
    {
        this->x = x;
        this->n = n;
    }
};
class Child : public Parents
{
public:
    Child(int x, string n) : Parents(x, n)
    {
        this->x = x;
        this->n = n;
    }
    void display()
    {
        cout << x << n << endl;
    }
};
int main()
{

    Child c1(69, "Samin");
    c1.display();

    return 0;
}