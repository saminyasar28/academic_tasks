#include <bits/stdc++.h>
using namespace std;
class GCD_LCM
{
public:
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int gcd(int a, int b, int c)
    {
        return gcd(gcd(a, b), c);
    }
    int lcm(int a, int b)
    {
        return (a * b) / gcd(a, b);
    }
    int lcm(int a, int b, int c)
    {
        return (a * b * c) / gcd(a, b, c);
    }
};
int main()
{
    GCD_LCM obj;
    int a, b, c;

    cin >> a >> b;
    cout << "gcd" << obj.gcd(a, b) << endl;
    cout << "lcm" << obj.lcm(a, b) << endl;

    cin >> a >> b >> c;
    cout << "gcd" << obj.gcd(a, b, c) << endl;
    cout << "lcm" << obj.lcm(a, b, c) << endl;

    return 0;
}