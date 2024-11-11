#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, vector<float>> classMarks{
        {"Class A", {98.52, 56.56, 78.56, 45.56}},
        {"Class B", {45.56, 45.56, 29.56, 78.50}},
        {"Class C", {52.56, 45.23, 48.56, 47.25}}};

    cout << "Class " << "Marks" << endl;
    for (auto outerIt : classMarks)
    {
        cout << outerIt.first << " ";
        for (auto innerIt : outerIt.second)
        {
            cout << innerIt << " ";
        }
        cout << "\n";
    }

    return 0;
}