#include <bits/stdc++.h>
using namespace std;

bool checkTargetEl(vector<int> arr, int target)
{
    bool have_target = false;

    for (auto it : arr)
    {
        if (it == target)
        {
            have_target = true;
        }
    }
    return have_target;
}

int main()
{
    /*
        Check if an Array Contains a Target Element
        Given an unsorted array of integers, write a function to check if the array contains a target element.
        Return true if the target exists, otherwise return false.
    */
    vector<int> arr{5, 6, 3, 5, 7, 8, 9, 1, 2};
    int target = 15;

    bool is_contain_target = checkTargetEl(arr, target);

    if (is_contain_target)
    {
        cout << "Contain Target";
    }
    else
    {
        cout << "Don't Contain Target";
    }

    return 0;
}