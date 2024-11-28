#include <bits/stdc++.h>
using namespace std;

int getFreq(int arr[], int n, int el)
{
    int frequency = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            frequency++;
        }
    }
    return frequency;
}

int main()
{
    // Given an array where every element occurs twice except one, find the element that appears an odd number of times.
    int arr[] = {1, 1, 5, 5, 3, 4, 3, 9, 7, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (auto el : arr)
    {
        int freq = getFreq(arr, size, el);
        if (freq % 2 != 0)
        {
            cout << el;
            break;
        }
    }
    return 0;
}