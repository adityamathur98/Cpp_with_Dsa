#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to merge two sorted arrays into a single sorted array without using built-in sorting functions.
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    vector<int> arr3;

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int i = 0, j = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }

    while (i < size1)
    {
        arr3.push_back(arr1[i]);
        i++;
    }

    while (j < size2)
    {
        arr3.push_back(arr2[j]);
        j++;
    }

    cout << "Merged Array " << endl;

    for (auto it : arr3)
    {
        cout << it << " ";
    }

    return 0;
}