#include <bits/stdc++.h>
using namespace std;

struct Car
{
    string model;
    int year;
    float mileage;
};

int main()
{
    /*
        Write a program that dynamically allocates a structure Car containing fields model, year, and mileage. Assign values and
        display the car's details. Ensure you free the allocated memory.
    */

    Car *car1 = new Car;
    cout << "Enter Model: ";
    cin >> car1->model;
    cout << "Enter Year: ";
    cin >> car1->year;
    cout << "Enter Mileage: ";
    cin >> car1->mileage;

    cout << "The car model is " << car1->model << " , it launched in " << car1->year << " and it gives mileage is " << car1->mileage;

    delete car1;
    return 0;
}