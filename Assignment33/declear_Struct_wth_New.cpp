#include <bits/stdc++.h>
using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

int main()
{
    /*
        Write a C++ program to dynamically allocate memory for a structure Employee that contains id, name, and salary. Input details
        for the employee and display them. Remember to deallocate memory afterward.
    */
    Employee *emp = new Employee;
    cout << "Enter Id of Employee : ";
    cin >> emp->id;
    cout << "Enter Name of Employee : ";
    cin >> emp->name;
    cout << "Enter salary of Employee : ";
    cin >> emp->salary;
    cout << endl;
    cout << emp->id << " " << emp->name << " " << emp->salary;

    delete emp;

    return 0;
}