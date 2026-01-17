#include<bits/stdc++.h>
using namespace std;
class parent
{
public:
    int x;
    parent(int y)
    {
        x = y;
    }

    parent operator ++(int)
    {
        x = x++;
    }
    void display()
    {
        cout << x;
    }
};
int main()
{
    parent p1(10),p2(0);
    p2 = p1++;

    p2.display();


}