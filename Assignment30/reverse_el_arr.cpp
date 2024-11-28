#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Reverse the elements of an array in place.
    int arr[] = {2, 5, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}