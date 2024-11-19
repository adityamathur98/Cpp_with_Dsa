#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using Vector
    /*vector<string> test_Category{"Blood Test", "MRI Scan", "X-Ray", "Ultrasound", "ECG", "CT Scan", "COVID-19 Test", "Urine Analysis", "Allergy Test", "Biopsy"};
    vector<int> avg_Cost{120, 800, 100, 150, 200, 700, 50, 80, 300, 900};
    cout << "Test" << "  " << "Avg Cost" << "\n";
    for (int i = 0; i < test_Category.size(); i++)
    {
        cout << test_Category[i] << ": " << avg_Cost[i] << "\n";
    }
    return 0;
    */

    // Using Map
    map<string, int> test_cost{
        {"Blood Test", 120},
        {"MRI Scan", 800},
        {"X-Ray", 100},
        {"Ultrasound", 150},
        {"ECG", 200},
        {"CT Scan", 700},
        {"COVID-19 Test", 50},
        {"Urine Analysis", 80},
        {"Allergy Test", 300},
        {"Biopsy", 900}};

    cout << "Test" << "\t" << "Avg Cost" << "\n";
    for (auto pair : test_cost)
    {
        cout << pair.first << " : " << pair.second << "\n";
    }
}