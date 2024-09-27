#include <bits/stdc++.h>
using namespace std;

int get_Last_Index(vector<int> arr, int t)
{
    int last_index = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == t)
        {
            last_index = i;
        }
    }

    return last_index;
}

int main()
{
    /*
        Find the Last Occurrence of a Target
        You are given an unsorted array of integers. Write a function to find the
        last occurrence of a target element in the array. If the target exists,
        return its index; otherwise, return -1.
    */
    vector<int> arr{15, 17, 2, 17, 4};
    int target = 17;

    int last_index_of_tar = get_Last_Index(arr, target);

    if (last_index_of_tar != -1)
    {
        cout << target << " last occurrence at " << last_index_of_tar << " index";
    }
    else
    {
        cout << "Does'nt Exist";
    }

    return 0;
}