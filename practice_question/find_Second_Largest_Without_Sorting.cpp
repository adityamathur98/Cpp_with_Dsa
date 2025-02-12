#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to find the second largest element in an array without sorting.
    int arr[] = {10, 5, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest is " << secondLargest;
    return 0;
}