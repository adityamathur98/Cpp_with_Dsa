#include <bits/stdc++.h>
using namespace std;

struct Address
{
    string city;
    int pincode;
};

struct Person
{
    string name;
    Address add;
};

int main()
{
    /*
        Write a structure Address with members city and pincode. Then define a Person structure containing name and Address.
        Initialize a Person object and access all its values.:
    */

    Person obj1;
    cout << "Enter Name: ";
    getline(cin, obj1.name);
    cout << "Enter City: ";
    getline(cin, obj1.add.city);
    cout << "Enter Pincode: ";
    cin >> obj1.add.pincode;

    cout << obj1.name << endl;
    cout << obj1.add.city << endl;
    cout << obj1.add.pincode;

    return 0;
}