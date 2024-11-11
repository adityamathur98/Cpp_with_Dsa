#include <bits/stdc++.h>
using namespace std;

void displayInfo(map<string, vector<pair<int, string>>> &person_Food_With_Age)
{
    cout << "Name" << "|  " << "Category" << "  " << "Food" << endl;

    for (auto outerIt : person_Food_With_Age)
    {
        cout << outerIt.first << "| " << "{";
        for (auto innerIt : outerIt.second)
        {
            cout << innerIt.first << " " << innerIt.second << " ";
        }
        cout << "}";
        cout << "\n";
    }
}

int main()
{
    map<string, vector<pair<int, string>>> person_Food_With_Age{
        {"Alice", {{25, "Apple"}, {28, "Orange"}}},
        {"Bob", {{36, "Kiwi"}, {19, "Mango"}}}};

    displayInfo(person_Food_With_Age);

    return 0;
}