#include <bits/stdc++.h>
using namespace std;

struct BankAccount
{
    string accountNumber;
    string holderName;
    double balance;

    void updateValue(double amount)
    {
        balance += amount;
    }

    void displayDetails()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Holder Name : " << holderName << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    /*
        Create a structure BankAccount with fields accountNumber, holderName, and balance. Allocate memory for a single account,
        update the balance, and display the details. Free the memory afterward
    */
    BankAccount *person = new BankAccount;
    cout << "Enter Account Number: ";
    cin >> person->accountNumber;
    cin.ignore();
    cout << "Enter Name of Account Holder: ";
    getline(cin, person->holderName);
    cout << "Enter Amount: ";
    cin >> person->balance;

    person->displayDetails();

    delete person;

    return 0;
}