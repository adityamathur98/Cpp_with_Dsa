#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> classes{"ClassA", "ClassB", "ClassC"};
    vector<vector<float>> marks{{56.5, 78.5, 78.0}, {48.5, 56.5, 78.2}, {45, 25.5, 36.5}};

    for (int i = 0; i < classes.size(); i++)
    {
        cout << i + 1 << " " << classes[i] << " " << "[";
        for (int j = 0; j < marks.size(); j++)
        {
            cout << marks[i][j] << ",";
        }
        cout << "]";
        cout << endl;
    }

    return 0;
}