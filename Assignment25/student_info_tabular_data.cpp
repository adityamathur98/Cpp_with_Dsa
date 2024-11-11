#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, pair<int, vector<float>>> student_Info{
        {"Prajjal", {20, {45.56, 45.52, 29.55, 85.56}}},
        {"Anuj", {96, {78.56, 45.56, 98.56, 56.89}}},
        {"Shivam", {69, {45.56, 48.56, 53.56, 75.65}}}};

    cout << "Name " << "Age " << "Marks" << endl;
    for (auto outerIt : student_Info)
    {
        cout << outerIt.first << " " << outerIt.second.first << "  ";
        for (auto innerIt : outerIt.second.second)
        {
            cout << innerIt << " ";
        }
        cout << "\n";
    }
    return 0;
}