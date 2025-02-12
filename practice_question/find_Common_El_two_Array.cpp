#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to find the common elements (intersection) between two arrays.
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};

    unordered_set<int> set1(arr1.begin(), arr1.end());

    vector<int> intersection;

    for (auto val : arr2)
    {
        if (set1.count(val) > 0)
        {
            intersection.push_back(val);
        }
    }

    for (auto it : intersection)
    {
        cout << it << " ";
    }
    return 0;
}