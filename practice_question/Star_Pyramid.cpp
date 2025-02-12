#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Star Pyramid
    //  *
    // ***
    //*****

    int row;
    cout << "Enter Number of Rows: ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j = row - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = i; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}