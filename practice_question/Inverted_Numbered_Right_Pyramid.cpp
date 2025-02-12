#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Inverted Numbered Right Pyramid
    /*
        1 2 3
        1 2
        1
    */

    int row;
    cout << "Enter Number of Rows: ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}