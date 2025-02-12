#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to find the missing number in an array of size N-1 containing numbers from 1 to N
    int n = 5;
    int arr[] = {1, 2, 4, 5};

    int expectation = n * (n + 1) / 2;
    int actualSum = 0;
    for (auto it : arr)
    {
        actualSum += it;
    }

    cout << expectation - actualSum;
    return 0;
}