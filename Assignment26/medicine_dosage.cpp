#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using Vector
    /*
    vector<string> medicine{"Antibiotic", "Painkiller", "Antacid", "Antihistamine", "Antidepresent", "Antiviral", "Anti-Inflammatory", "Vaccine", "Insulin", "Sedative"};
    vector<float> avg_Dosage{500, 250, 150, 100, 300, 400, 200, 0.5, 40, 50};

    cout << "Medicine" << " " << "Average Dosage" << "\n";
    for (int i = 0; i < medicine.size(); i++)
    {
        cout << medicine[i] << " : " << avg_Dosage[i] << "\n";
    }
    */
    // Using Map
    map<string, float> medicine_dosage{
        {"Antibiotic", 500},
        {"Painkiller", 250},
        {"Antacid", 150},
        {"Antihistamine", 100},
        {"Antidepresent", 300},
        {"Antiviral", 400},
        {"Anti-Inflammatory", 200},
        {"Vaccine", 0.5},
        {"Insulin", 40},
        {"Sedative", 50}};

    cout << "Medicine" << " " << "Dosage" << "\n";
    for (auto pair : medicine_dosage)
    {
        cout << pair.first << " : " << pair.second << "\n";
    }
    return 0;
}