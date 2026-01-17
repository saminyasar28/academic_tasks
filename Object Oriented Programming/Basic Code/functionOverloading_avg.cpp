#include <bits/stdc++.h>
using namespace std;
#define fl float
#define ll long long int

class calculation
{
public:
    void sumAvg(int a, int b, int c)
    {

        int sum = 0;
        sum = a + b + c;

        float avg = sum / 3;

        cout << "Sum is : " << sum << endl << "Avg is:" << avg;
    }

    void sumAvg(fl a, fl b, fl c)
    {

        fl sum = 0;
        sum = a + b + c;

        fl avg = sum / 3.0;
        
        cout << endl << fixed << setprecision(2) << "Sum is:" << sum << endl << "Avg is:" <<   fixed << setprecision(2) << avg << endl;
    }

    void sumAvg(int arr[], int n)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i];

        cout << "Sum of this array is : " << sum << endl;
        cout << "Average of this array is : " << sum / n << endl;
    }
};

int main()
{
    calculation s1;
    int a, b, c;
    cin >> a >> b >> c;
    s1.sumAvg(a, b, c);

    fl x, y, z;
    cin >> x >> y >> z;
    s1.sumAvg(x, y, z);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    s1.sumAvg(arr,n);
}
