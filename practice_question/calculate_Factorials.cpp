#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to calculate the factorial of a number using a loop.
    int n = 5;

    if (n < 0)
    {
        cout << "Factorila not defined for Negative Numbers" << endl;
        return 0;
    }

    if (n == 0)
    {
        cout << "Factorial of 0 is 1" << endl;
        return 0;
    }

    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    cout << "Factorial of " << n << " is " << result;
}