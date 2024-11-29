#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> arr3;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] >= arr2[j])
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while (i < arr1.size())
    {
        arr3.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size())
    {
        arr3.push_back(arr2[j]);
        j++;
    }

    for (auto it : arr3)
    {
        cout << it << " ";
    }
}

int main()
{
    // Create two vectors {1, 3, 5} and {2, 4, 6}. Merge them into a single sorted vector.
    vector<int> arr1{1, 3, 5};
    vector<int> arr2{2, 4, 6};
    mergeArrays(arr1, arr2);
    return 0;
}