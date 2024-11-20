#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> skill{"Python", "JS", "Java", "C++", "SQL"};
    vector<string> proficiency{"Beginner", "Intermediate", "Advanced", "Intermediate", "Beginner"};

    map<string, int> skill_Mapping{
        {"Python", 0},
        {"JS", 1},
        {"Java", 2},
        {"C++", 3},
        {"SQL", 4}};

    map<string, int> proficiency_Mapping{
        {"Beginner", 0},
        {"Intermediate", 1},
        {"Advanced", 2}};

    vector<pair<int, int>> numerical_Data;

    for (int i = 0; i < skill.size(); i++)
    {
        numerical_Data.push_back(make_pair(skill_Mapping[skill[i]], proficiency_Mapping[proficiency[i]]));
    }

    for (auto pair : numerical_Data)
    {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}