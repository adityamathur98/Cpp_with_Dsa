#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Right-Angled Number Pyramid
    /*
        1
        1 2
        1 2 3
    */

    int row;
    cout << "Enter Number of Rows: ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}