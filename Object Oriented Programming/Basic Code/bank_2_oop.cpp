#include <bits/stdc++.h>
using namespace std;

class Bank {
public:
    string Account_Name;
    int Account_Number;
    double Account_Balance;

    Bank(string A_N, int A_n, double A_B) {
        Account_Name = A_N;
        Account_Number = A_n;
        Account_Balance = A_B;
    }

    void display() const {
        cout << "Account Name   : " << Account_Name << endl;
        cout << "Account Number : " << Account_Number << endl;
        cout << "Account Balance: " << Account_Balance << endl;
    }
};


void distribute(const Bank &father, Bank &son) {
    if (father.Account_Balance >= son.Account_Balance * 2) {
        double amount_transfer = father.Account_Balance * 0.5;
        son.Account_Balance += amount_transfer;

        cout << "Amount transferred: " << amount_transfer << endl;
        cout << "Updated Balance of Son:" << endl;
        son.display();
    } else {
        cout << "No transaction completed!" << endl;
    }
}

int main() {
    double f_b;
    cout << "Enter father's amount: ";
    cin >> f_b;

    Bank father("Father", 360, f_b);
    father.display();

    double s_b;
    cout << "Enter son's amount: ";
    cin >> s_b;

    Bank son("Son", 361, s_b);
    son.display();

    distribute(father, son);

    return 0;
}
