#include <bits/stdc++.h>
using namespace std;
class SWAP
{
public:
    void swap()
    {
        int a;
        cin >> a;
        cout << "Reversed Number : " << endl;
        while (a > 0)
        {
            cout << a % 10;
            a = a / 10;
        }
        cout<< endl;
    }
    void swap_txt()
    {
        string a;
        cin>> a;
        cout<< "Reversed text: "<< endl;
        int n = a.length();
        for(int i=n-1; i>=0; i--)
        {
            cout<<a[i];
        }
    }
};
int main()
{
    SWAP obj;
    obj.swap();
    obj.swap_txt();

    return 0;
}