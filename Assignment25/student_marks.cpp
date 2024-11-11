#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, float> studentMarks{
        {"Prajjal", 48.50},
        {"Anuj", 45.50},
        {"Vijay", 29.50}};

    cout << "name" << "  " << "score" << "\n";
    for (auto outerIt : studentMarks)
    {
        cout << outerIt.first << "  " << outerIt.second;
        cout << endl;
    }

    return 0;
}