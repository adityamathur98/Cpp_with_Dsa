#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> regions{"North", "South", "East", "West"};
    map<string, int> region_Mapping{
        {"North", 0},
        {"South", 1},
        {"East", 2},
        {"West", 3}};

    vector<pair<string, int>> numerical_Data;

    for (auto region : regions)
    {
        numerical_Data.push_back(make_pair(region, region_Mapping[region]));
    }

    for (auto pair : numerical_Data)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}