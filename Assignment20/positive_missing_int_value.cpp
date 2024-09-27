#include <bits/stdc++.h>
using namespace std;

int getMissingVal(vector<int> arr)
{
    int count = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (count != arr[i])
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
    vector<int> arr{1, 2, 4, 5};
    int missing_num = getMissingVal(arr);

    cout << "Missing value is " << missing_num;

    return 0;
}