#include <bits/stdc++.h>
using namespace std;

int getLargestAbsValue(vector<int> arr)
{
    int largest_abs_num = abs(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        int abs_value = abs(arr[i]);
        if (largest_abs_num < abs_value)
        {
            largest_abs_num = abs_value;
        }
    }
    return largest_abs_num;
}

int main()
{
    /*
        Find the Element with the Largest Absolute Value
        Given an array of integers, write a function to find the element with the largest absolute value in the
        array..
    */
    vector<int> arr{15, 17, 2, 2, 1, 4};
    int greatest_Abs_value = getLargestAbsValue(arr);

    cout << "Largest Absolute value is " << greatest_Abs_value;

    return 0;
}