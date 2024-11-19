#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using Vector
    // vector<string> vehicle{"Sedan", "SUV", "Hatchback", "Truck", "Motorcycle", "Electric Car", "Hybrid Car", "Mini Van", "Coupe", "Convertible"};
    // vector<float> avg_Mileage{15, 12, 18, 8, 40, 120, 25, 14, 16, 13};

    // cout << "Vehicle" << " " << "Average Mileage" << "\n";
    // for (int i = 0; i < vehicle.size(); i++)
    // {
    //     cout << vehicle[i] << " : " << avg_Mileage[i] << "\n";
    // }

    // Using Map
    map<string, float> vehicle_mileage{
        {"Sedan", 15},
        {"SUV", 12},
        {"Hatchback", 18},
        {"Truck", 8},
        {"Motorcycle", 40},
        {"Electric Car", 120},
        {"Hybrid Car", 25},
        {"Mini Van", 14},
        {"Coupe", 16},
        {"Convertible", 13}};

    cout << "Vehicle" << " " << "Average Mileage" << "\n";
    for (auto pair : vehicle_mileage)
    {
        cout << pair.first << " : " << pair.second << "\n";
    }
    return 0;
}