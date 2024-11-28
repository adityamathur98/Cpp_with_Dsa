#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Create a map of car brands and their prices, then find and display the average price of the cars.
    */

    map<string, int> car_Price_Mp{
        {"Maruti", 150000},
        {"Toyota", 250000},
        {"Mahindra", 350000}};

    int sum_of_Price = 0;

    for (auto pair : car_Price_Mp)
    {
        sum_of_Price += pair.second;
    }

    float avg_Price = sum_of_Price / car_Price_Mp.size();

    cout << avg_Price;

    return 0;
}