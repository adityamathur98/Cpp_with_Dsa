#include <bits/stdc++.h>
using namespace std;

int getSum(vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    /*
        Find the Sum of All Elements in an Array
        You are given an array of integers. Write a function to find the sum of all elements in the array.
    */
    vector<int> arr{15, 17, 2, 2, 1, 4};
    int sum_of_arr = getSum(arr);

    cout << "Sum of Array is " << sum_of_arr;

    return 0;
}