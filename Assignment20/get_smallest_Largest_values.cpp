#include <bits/stdc++.h>
using namespace std;

void get_Smallest_Largest_El(vector<int> arr)
{
    int min_El = arr[0];
    int max_El = arr[0];

    for (auto el : arr)
    {
        if (el < min_El)
        {
            min_El = el;
        }
        else
        {
            max_El = el;
        }
    }
    cout << "Minimum Element of Array is " << min_El << endl;
    cout << "Maximum Element of Array is " << max_El << endl;
};

int main()
{
    /*
        Find the Smallest and Largest Elements in an Array
        You are given an unsorted array of integers. Write a function to find both the smallest and largest elements in the array.
    */
    vector<int> arr{5, 6, 9, 2};
    get_Smallest_Largest_El(arr);
    return 0;
}