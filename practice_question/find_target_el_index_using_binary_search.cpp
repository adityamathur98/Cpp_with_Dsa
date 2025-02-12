#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to implement Binary Search on a sorted array. The function should return the index of the target element if
    // found, otherwise return -1

    int arr[] = {2, 4, 7, 10, 23, 32};
    int target = 10;

    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0, end = size - 1;

    while (start <= end)
    {
        int midIndex = start + (end - start) / 2;
        if (arr[midIndex] == target)
        {
            cout << midIndex << endl;
            return 0;
        }
        else if (arr[midIndex] < target)
        {
            start = midIndex + 1;
        }
        else
        {
            end = midIndex - 1;
        }
    }

    cout << -1 << endl;
    return 0;
}