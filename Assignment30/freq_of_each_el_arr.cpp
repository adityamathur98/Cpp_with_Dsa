#include <bits/stdc++.h>
using namespace std;

int getFreq(int arr[], int n, int el)
{
    int frequency = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            frequency++;
        }
    }
    return frequency;
}

int main()
{
    // Print the frequency of each element in an array.
    int arr[] = {1, 2, 2, 3, 1, 5, 6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (auto val : arr)
    {
        int frequency = getFreq(arr, size, val);
        cout << val << " Occurrs " << frequency << " times." << endl;
    }
    return 0;
}