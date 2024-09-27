#include <bits/stdc++.h>
using namespace std;

int getMostRepeating(vector<int> arr)
{
    int n = arr.size();
    int count;
    int max = 1;
    int result_el;
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
        if (max < count)
        {
            max = count;
            result_el = arr[i];
        }
    }
    if (max == 1)
    {
        return arr[0];
    }
    else if (max > 1)
    {
        return result_el;
    }
    else
    {
        return -1;
    }
}

int main()
{
    /*
        Find the Most Frequent Element in an Array
        You are given an unsorted array of integers. Write a function to find the element that occurs the most
        frequently. If there is a tie, return any one of the most frequent elements.
    */
    vector<int> arr{15, 17, 17, 2, 1, 4};
    int most_repect_el = getMostRepeating(arr);

    if (most_repect_el != -1)
    {
        cout << "Most Repeat Element is " << most_repect_el;
    }
    else
    {
        cout << "Every Element is Equal Repeated";
    }

    return 0;
}