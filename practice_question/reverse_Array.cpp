#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to reverse an array in-place (without using extra space).
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }

    for (auto el : arr)
    {
        cout << el << " ";
    }
    return 0;
}