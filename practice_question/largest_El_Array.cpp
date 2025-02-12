#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to remove duplicates from an array.
    vector<int> arr = {1, 2, 2, 5, 3, 1, 8, 9, 8};

    sort(arr.begin(), arr.end());

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    for (auto it : arr)
    {
        cout << it << " ";
    }
}
