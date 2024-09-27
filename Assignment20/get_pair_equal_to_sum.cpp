#include <bits/stdc++.h>
using namespace std;

void getSumPair(vector<int> arr, int sum)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int sum_of_num = arr[i] + arr[j];
            if (sum_of_num == sum)
            {
                cout << "(" << arr[i] << "," << arr[j] << ")";
            }
        }
    }
}

int main()
{
    /*
        Find Pairs with a Given Sum
        You are given an array of integers and a target sum. Write a function to find all unique pairs of elements
        that add up to the target sum.
    */
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int sum = 5;

    int n = arr.size();

    getSumPair(arr, sum);

    return 0;
}