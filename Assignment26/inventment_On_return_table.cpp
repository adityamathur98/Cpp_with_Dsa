#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using Vector
    // vector<string> investment{"Stocks", "Bonds", "Real Estate", "Mutual Funds", "Gold", "Cyptocurrency", "Fixed Deposit", "Savings Account", "ETFs", "Commodities"};
    // vector<float> avg_Return_Rate{10, 5, 8, 7, 6, 15, 4, 2, 9, 6};

    // cout << "Investment" << " " << "Average Duration" << "\n";
    // for (int i = 0; i < investment.size(); i++)
    // {
    //     cout << investment[i] << " : " << avg_Return_Rate[i] << "\n";
    // }

    // Using Map
    map<string, float> investment_Ruturn_Rate{
        {"Stocks", 10},
        {"Bonds", 5},
        {"Real Estate", 8},
        {"Mutual Funds", 7},
        {"Mutual Funds", 6},
        {"Gold", 15},
        {"Cyptocurrency", 4},
        {"Fixed Deposit", 2},
        {"Savings Account", 9},
        {"ETFs", 1}};

    cout << "Investment" << " " << "Average Return Rate" << "\n";
    for (auto pair : investment_Ruturn_Rate)
    {
        cout << pair.first << " : " << pair.second << "\n";
    }
    return 0;
}