#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int ID;
    float marks;

    void set_info()
    {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "ID : " << ID << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main()
{
    cout << "Number of student details want to store: ";
    int n;
    cin >> n;
    Student s[n];

    cout << endl;

    cout << "Enter student details:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Details for Student " << i + 1 << endl;
        s[i].set_info();
    }
    cout << endl;

    cout << "Entered student details:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Details for Student " << i + 1 << endl;
        s[i].display();
    }

    cout<< endl;
    int id;
    cout<<"Enter the ID you want to search : ";
    cin>>id;

    for(int i = 0 ; i<n ; i++)
    {
        if(s[i].ID==id)
        {
            cout<<"FOUND!!!!"<<endl;
            s[i].display();
        }
        else 
        {
            cout<<"Not Found"<<endl;
            break;
        }
    }


    return 0;
}