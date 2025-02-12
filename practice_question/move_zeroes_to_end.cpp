#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to move all zeroes in an array to the end while maintaining the relative order of non-zero elements.
    vector<int> arr = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int size = arr.size();

    int zeroCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
            arr.erase(arr.begin() + i);
            i--;
            size--;
        }
    }

    for (int i = 0; i < zeroCount; i++)
    {
        arr.push_back(0);
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}