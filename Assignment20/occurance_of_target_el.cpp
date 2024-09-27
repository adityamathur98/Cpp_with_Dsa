#include <bits/stdc++.h>
using namespace std;

int get_Occurrence(vector<int> arr, int t)
{
    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == t)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    /*
        Count Occurrences of a Target Element
        Given an array of integers, write a function that counts how many times a target element appears in the
        array.
    */
    vector<int> arr{15, 17, 2, 2, 17, 4};
    int target = 2;

    int num_of_occurrence = get_Occurrence(arr, target);

    cout << target << " Occurs " << num_of_occurrence << " times.";

    return 0;
}