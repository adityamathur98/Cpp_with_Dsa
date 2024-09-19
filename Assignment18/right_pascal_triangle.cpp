#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        2
        2 4
        2 4 6
        2 4 6 8
        2 4 6 8 10
        7 6 5 4 3
        7 6 5 4
        7 6 5
        7 6
        7
    */
    int n = 10;
    int even_num;
    int num;
    for (int i = 0; i < n; i++)
    {
        even_num = 2;
        num = 7;
        for (int j = 0; j < n / 2; j++)
        {
            if (j <= i && i < n / 2)
            {
                cout << even_num * (j + 1) << " ";
            }
            else if (i >= n / 2 && j < n - i)
            {
                cout << num-- << " ";
            }
            else
            {
                " ";
            }
        }
        cout << "\n";
    }
    return 0;
}