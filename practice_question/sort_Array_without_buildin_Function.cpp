#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write a C++ program to sort an array of integers in ascending order without using any built-in sorting function.

    int arr[5] = {10, 5, 2, 15, 21};
    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
}