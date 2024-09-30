#include <bits/stdc++.h>
using namespace std;

int getMissingVal(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int first_positive_num = arr[0];

    for (auto val : arr)
    {
        if (val < 0)
        {
            continue;
            ;
        }
        else
        {
            first_positive_num = val;
            break;
        }
    }

    int count = first_positive_num;

    for (auto it : arr)
    {
        if (it > 0 && count != it)
        {
            break;
        }
        count++;
    }

    return count;
}

int main()
{
    /*
        Find the First Positive Missing Integer
        Given an unsorted array of integers, find the smallest positive integer that is missing from the array.
    */
    vector<int> arr{3, 4, -1, 1};
    int missing_num = getMissingVal(arr);

    cout << "Missing value is " << missing_num;

    return 0;
}