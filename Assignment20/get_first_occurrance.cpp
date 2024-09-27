#include <bits/stdc++.h>
using namespace std;

int get_Index_El(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    /*
        Find the First Occurrence of a Target
        You are given an unsorted array of integers. Write a function to find the
        first occurrence of a target element. If the target exists, return its
        index; otherwise, return -1.
    */
    vector<int> arr{15, 17, 5, 6, 4};
    int target = 6;

    int index_of_el = get_Index_El(arr, target);

    if (index_of_el != -1)
    {
        cout << target << " exist at " << index_of_el << " index.";
    }
    else
    {
        cout << "Does'nt Exist";
    }

    return 0;
}