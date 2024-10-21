#include <bits/stdc++.h>
using namespace std;

void convertVecToSet(vector<int> &vect_set, int val)
{
    for (auto it : vect_set)
    {
        if (it == val)
        {
            return;
        }
    }
    vect_set.push_back(val);
}

void getDuplicate(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> vect_set;

    for (auto val : arr1)
    {
        convertVecToSet(vect_set, val);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        for (auto it : vect_set)
        {
            if (it == arr2[i])
            {
                cout << it << " ";
            }
        }
    }
}

int main()
{
    // take 2 vectors and find the duplicates
    vector<int> arr1{1, 3, 5};
    vector<int> arr2{2, 3, 6, 1};

    getDuplicate(arr1, arr2);
    return 0;
}