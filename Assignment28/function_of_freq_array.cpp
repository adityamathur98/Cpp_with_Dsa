#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {18, 19, 20, 21, 22, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 5;      // New element to insert
    int position = 2; // Position of new element
    int arr_1[n + 1];

    int j = 0;

    for (int i = 0; i < n + 1; i++)
    {
        if (i == position)
        {
            arr_1[i] = ele;
        }
        else
        {
            arr_1[i] = arr[j];
            j++;
        }
    }

    for (int val : arr_1)
    {
        cout << val << " ";
    }
    return 0;
}