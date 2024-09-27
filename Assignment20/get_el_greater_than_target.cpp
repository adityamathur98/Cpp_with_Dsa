#include <bits/stdc++.h>
using namespace std;

int checkTargetEl(vector<int> arr, int target)
{
    for (auto it : arr)
    {
        if (it > target)
        {
            return it;
        }
    }

    return -1;
    ;
}

int main()
{
    /*
        Find the First Element Greater Than a Target
        Given an unsorted array of integers, write a function to find the first element that is greater than a
        given target value. If no such element exists, return -1.
    */
    vector<int> arr{5, 6, 3, 5, 7, 8, 9, 1, 2};
    int target = 6;

    int first_El_Greater_Than_Target = checkTargetEl(arr, target);

    if (first_El_Greater_Than_Target != -1)
    {
        cout << first_El_Greater_Than_Target;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}