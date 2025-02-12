#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to implement Linear Search. Given an array and a target value, find its index in the array. If it’s not
    // found, return -1.

    int arr[] = {3, 8, 12, 5, 6};
    int target = 12;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == target)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}