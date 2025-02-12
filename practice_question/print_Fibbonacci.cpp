#include <bits/stdc++.h>
using namespace std;

int main()
{
    //  Write a C++ program to print the Fibonacci series up to n terms using a loop.
    int n = 6;

    if (n <= 0)
    {
        return 0;
    }

    int a = 0, b = 1;
    cout << a << " ";

    if (n == 1)
    {
        return 0;
    }

    cout << b << " ";

    for (int i = 2; i < n; i++)
    {
        int next = a + b;
        cout << next << " ";

        a = b;
        b = next;
    }
}