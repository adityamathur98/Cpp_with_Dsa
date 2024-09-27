#include <bits/stdc++.h>
using namespace std;

int get_Greater_ele(int ele, int tar)
{
    if (ele > tar)
    {
        return ele;
    }
    return -1;
}

int main()
{
    /*
        Find All Elements Greater Than a Given Value
        You are given an array of integers and a value x. Write a function to find and return all elements in the
        array that are greater than x.
    */
    vector<int> arr{15, 17, 2, 18, 4};
    int target = 4;
    int index;

    for (auto el : arr)
    {
        index = get_Greater_ele(el, target);
        if (index != -1)
        {
            cout << get_Greater_ele(el, target) << " ";
        }
    }

    return 0;
}