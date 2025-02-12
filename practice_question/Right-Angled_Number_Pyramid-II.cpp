#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Right-Angled Number Pyramid - II
    /*
    1
    2 2
    3 3 3
    */

    int row;
    cout << "Enter Number of Rows: ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}