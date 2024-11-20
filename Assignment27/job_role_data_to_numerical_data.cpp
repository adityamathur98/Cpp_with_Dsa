#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> job_Role{"Developer", "Designer", "Manager", "Analyst"};
    map<string, int> jobrole_Mapping{
        {"Developer", 0},
        {"Designer", 1},
        {"Manager", 2},
        {"Analyst", 3}};

    vector<pair<string, int>> numerical_Data;

    for (auto role : job_Role)
    {
        numerical_Data.push_back(make_pair(role, jobrole_Mapping[role]));
    }

    for (auto pair : numerical_Data)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}