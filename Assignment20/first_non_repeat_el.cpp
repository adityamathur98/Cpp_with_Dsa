#include <bits/stdc++.h>
using namespace std;

int getNonRepeating(vector<int> arr)
{
    int n = arr.size();
    int count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    /*
        Find the First Non-Repeating Element
        Given an array of integers, find the first element that does not repeat in the array. If no such element
        exists, return -1.
    */
    vector<int> arr{15, 15, 17, 17, 2, 2, 1, 4, 4};
    int non_repect_el = getNonRepeating(arr);

    if (non_repect_el != -1)
    {
        cout << "First Non Repeat Element is " << non_repect_el;
    }
    else
    {
        cout << "Every Element is Repeated";
    }

    return 0;
}