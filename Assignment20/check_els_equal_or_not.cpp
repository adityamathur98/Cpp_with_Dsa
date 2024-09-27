#include <bits/stdc++.h>
using namespace std;

bool checkElUniqueOrNot(vector<int> arr)
{
    int count;
    bool is_Unique = true;

    for (int i = 0; i < arr.size(); i++)
    {
        count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            is_Unique = false;
        }
    }
    return is_Unique;
}

int main()
{
    /*
        Check If All Elements Are Unique
        Given an array of integers, write a function to check if all elements are unique. Return true if all
        elements are unique, otherwise return false.
    */
    vector<int> arr{15, 17, 2, 2, 1, 4};
    bool is_All_Unique = checkElUniqueOrNot(arr);

    if (is_All_Unique)
    {
        cout << "All Element of Array is Unique";
    }
    else
    {
        cout << "All Element of Array is not Unique";
    }

    return 0;
}