#include <bits/stdc++.h>
using namespace std;
class library
{
public:
    int isbn;
    string author, title;

    void book_details(int isbn, string author, string title)
    {
        this->isbn = isbn;
        this->author = author;
        this->title = title;
    }
    void display()
    {
        cout << "Book Details" << endl;
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "ISBN : " << isbn << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    library s[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        string y, z;
        cin >> x >> y >> z;
        s[i].book_details(x, y, z);
    }

    int num;
    cin >> num;
    for (int i = 0; i < n; i++)
    {

        if (s[i].isbn == num)
        {
            s[i].display();
            break;
        }
        else
            cout << "BOOK NOT FUNND" << endl;
    }

    return 0;
}