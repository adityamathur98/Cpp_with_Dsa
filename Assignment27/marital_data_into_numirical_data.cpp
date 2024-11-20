#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> marital{"Single", "Married", "Divorced", "Widowed"};
    map<string, int> maritalMapping{{"Single", 0}, {"Married", 1}, {"Divorced", 2}, {"Widowed", 3}};

    vector<pair<string, int>> numerical_Data;

    for (auto status : marital)
    {
        numerical_Data.push_back(make_pair(status, maritalMapping[status]));
    }

    for (auto pair : numerical_Data)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}