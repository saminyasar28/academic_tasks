#include <bits/stdc++.h>
using namespace std;

class parents
{
public:
    int age;
};

class child : public parents
{
public:
    string name;
    void dispay()
    {
        cout<<name <<" " << age << endl;
    }


};
int main()
{
    child c1;
    c1.name = "samin";
    c1.age = 69;
    c1.dispay();

    return 0;
}