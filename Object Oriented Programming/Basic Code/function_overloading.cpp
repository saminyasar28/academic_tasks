#include<bits/stdc++.h>
using namespace std;

class Avg
{
    public:
    //2 integer sum and avg
    void avg(int a, int b)
    {
        int sum=0;
        sum=a+b;
        float avg=sum/2.0;

        cout<<"Sum="<<sum<<endl;
        cout<<"Avg="<<avg<<endl;
    }
    //2 float avg and sum
    void avg(float a, float b)
    {
        float sum=0;
        sum=a+b;
        float avg=sum/2.0;

        cout<<"Sum="<<sum<<endl;
        cout<<"Avg="<<avg<<endl;
    }
    //array avg
    void avg(int arr[],int n)
    {
        if(n<=0)
        {
            cout<<"empty array";
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=i;
        }
        cout<<"Sum="<<sum<<endl;
        float avg=sum/n;
        cout<<"Avg="<<avg;
    }
};
int main()
{
    Avg A;
    int a[]={1,2,3,4,5};
    A.avg(5,6);
    A.avg(5.7f,3.3f);
    A.avg(a,5);
}
