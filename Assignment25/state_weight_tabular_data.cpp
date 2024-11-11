#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, vector<int>> stateWeight{
        {"Punjab", {90, 87, 86, 66}},
        {"Anuj", {65, 36, 95, 85}},
        {"Vijay", {26, 36, 99, 79}}};

    cout << "state" << "  " << "weight" << "\n";
    for (auto outerIt : stateWeight)
    {
        cout << outerIt.first << "  ";
        for (auto innerIt : outerIt.second)
        {
            cout << innerIt << " ";
        }
        cout << endl;
    }

    return 0;
}