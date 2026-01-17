#include <bits/stdc++.h>
using namespace std;
class SUM_AVG
{
public:
    void sum_avg(int a, int b)
    {
        int sum = 0;
        sum = a + b;
        float avg = sum / 2.0;
        cout << "Sum = " << sum << endl;
        cout << "Avg = " << avg << endl;
    }
    void sum_avg(int a, int b, int c)
    {
        int sum = 0;
        sum = a + b + c;
        float avg = sum / 3.0;
        cout << "Sum = " << sum << endl;
        cout << "Avg = " << avg << endl;
    }
    void sum_avg(float a, float b, float c)
    {
        float sum = 0;
        sum = a + b + c;
        float avg = sum / 3.0;
        cout << "Sum = " << sum << endl;
        cout << "Avg = " << avg << endl;
    }
    void sum_avg(int a[], int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)

        {

            sum += a[i];
        }
        float avg = sum / (float)n;
        cout << "Sum = " << sum << endl;
        cout << "Avg = " << avg << endl;
    }
};
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    SUM_AVG obj;
    obj.sum_avg(1, 2);
    obj.sum_avg(1, 2, 3);
    obj.sum_avg(1.4f, 2.8f, 3.2f);
    obj.sum_avg(arr, 5);

    return 0;
}