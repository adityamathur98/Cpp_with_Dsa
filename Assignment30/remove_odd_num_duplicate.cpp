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
    // Given an array of integers, remove all duplicates of odd numbers only and return the unique elements in the same order.
    int arr[] = {1, 2, 3, 1, 3, 4, 5, 2, 5, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    set<int> visitedOdd;

    vector<int> result;

    for (auto ele : arr)
    {
        int frequency = getFreq(arr, size, ele);
        if (ele % 2 != 0)
        {
            if (visitedOdd.find(ele) == visitedOdd.end())
            {
                result.push_back(ele);
                visitedOdd.insert(ele);
            }
        }
        else
        {
            result.push_back(ele);
        }
    }

    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}