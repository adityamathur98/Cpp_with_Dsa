#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<string>> genderDisease{
        {"female", "cancer"}, {"female", "hypothesis A"}, {"male", "cough"}, {"female", "cough"}, {"male", "cancer"}, {"male", "hypothesis A"}};

    map<string, int> genderMapping{
        {"female", 0},
        {"male", 1}};

    map<string, int> diseaseMapping{
        {"cancer", 0},
        {"hypothesis A", 1},
        {"cough", 2}};

    vector<vector<int>> result;

    for (auto v1 : genderDisease)
    {
        int gender_code = genderMapping[v1[0]];
        int disease_code = diseaseMapping[v1[1]];
        result.push_back({gender_code, disease_code});
    }

    for (auto v1 : result)
    {
        cout << v1[0] << " | " << v1[1];
        cout << "\n";
    }

    return 0;
}