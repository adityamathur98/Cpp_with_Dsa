#include <bits/stdc++.h>
using namespace std;

int getMax(vector<int> arr)
{
    int max = arr[0];

    for (auto el : arr)
    {
        if (el > max)
        {
            max = el;
        }
    }
    return max;
}

int main()
{
    /*
        Find the Maximum Element in an Array
        Given an array of integers, write a function to find the maximum element
        in the array.
    */
    vector<int> arr{15, 17, 5, 89, 4};

    int max_Value = getMax(arr);

    cout << max_Value;

    return 0;
}