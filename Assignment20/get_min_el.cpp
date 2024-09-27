#include <bits/stdc++.h>
using namespace std;

int getMin(vector<int> arr)
{
    int min = arr[0];

    for (auto el : arr)
    {
        if (el < min)
        {
            min = el;
        }
    }
    return min;
}

int main()
{
    /*
        Find the Minimum Element in an Array
        You are given an array of integers. Write a function to find the minimum
        element in the array.
    */
    vector<int> arr{15, 17, 2, 89, 4};

    int min_Value = getMin(arr);

    cout << min_Value;

    return 0;
}