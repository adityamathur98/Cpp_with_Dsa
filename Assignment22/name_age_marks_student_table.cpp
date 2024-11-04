#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> name{"Prajjal", "Ajay", "Shivam"};
    vector<int> age{20, 96, 69};
    vector<vector<int>> marks{{26, 96, 89, 79}, {76, 96, 99, 95}, {99, 98, 86, 75}};

    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i] << " " << age[i] << " ";
        cout << "[";
        for (int j = 0; j < marks.size(); j++)
        {
            cout << marks[i][j] << ",";
        }
        cout << "]";
        cout << "\n";
    }

    return 0;
}