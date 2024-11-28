#include <bits/stdc++.h>
using namespace std;

int getMostFreq(int arr[], int n)
{
    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int max_Count = 0, el = arr[0];
    for (auto pair : freq)
    {
        if (max_Count < pair.second)
        {
            max_Count = pair.second;
            el = pair.first;
        }
    }

    return el;
}

int main()
{
    /*
        Write a function that takes an array of integers as input and returns the element that appears most
        frequently in the array. If there is a tie, return any of the most frequent elements.
    */
    int arr[] = {1, 2, 3, 4, 4, 5, 6, 5, 9, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int most_Freq_El = getMostFreq(arr, n);
    cout << "The Most frequent Element of Int is " << most_Freq_El;
    return 0;
}