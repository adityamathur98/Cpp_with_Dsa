#include <bits/stdc++.h>
using namespace std;

map<int, int> getIndicies(int *arr, int t, int n)
{
    map<int, int> result;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            if (sum == t)
            {
                result.insert({i, j});
            }
        }
    }
    return result;
}

int main()
{
    /*
        Given an array of integers and a target sum, write a function to find two numbers in the array that
        add up to the target sum and return their indices using a map.
    */
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target_Sum = 5;

    map<int, int> result = getIndicies(arr, target_Sum, n);

    for (auto pair : result)
    {
        cout << "(" << pair.first << "," << pair.second << ")" << endl;
    }
    return 0;
}