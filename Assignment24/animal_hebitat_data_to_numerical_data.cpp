#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<string>> animal_Habitat{
        {"Loin", "Savannah"}, {"Penguien", "Antartica"}, {"Shark", "Ocean"}, {"Elephant", "Savannah"}, {"Polar Bear", "Antartica"}};

    map<string, int> animal_Mapping{
        {"Loin", 0},
        {"Penguien", 1},
        {"Shark", 2},
        {"Elephant", 3},
        {"Polar Bear", 4}};

    map<string, int> habitat_Mapping{
        {"Savannah", 0},
        {"Antartica", 1},
        {"Ocean", 2},
        {"Savannah", 0},
        {"Antartica", 1}};

    vector<vector<int>> result;

    for (auto v1 : animal_Habitat)
    {
        int animal_code = animal_Mapping[v1[0]];
        int habitat_code = habitat_Mapping[v1[1]];
        result.push_back({animal_code, habitat_code});
    }

    for (auto v1 : result)
    {
        cout << v1[0] << " | " << v1[1];
        cout << endl;
    }

    return 0;
}