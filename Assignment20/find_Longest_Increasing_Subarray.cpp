#include <bits/stdc++.h>
using namespace std;

void getLongestLengthOfSubarray(vector<int> arr)
{
    int length = 1;
    int max_Length = 1;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            length++;
        }
        else
        {
            if (max_Length < length)
            {
                max_Length = length;
            }
            length = 1;
        }
    }
    cout << max(max_Length, length);
}

int main()
{
    /*
        Find the Longest Increasing Subarray
        You are given an array of integers. Write a function to find the length of the longest contiguous subarray that is strictly increasing.
    */
    vector<int> arr{5, 6, 3, 4, 7, 4, 5, 6, 7};
    getLongestLengthOfSubarray(arr);
    return 0;
}