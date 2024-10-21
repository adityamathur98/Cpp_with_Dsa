#include <bits/stdc++.h>
using namespace std;

void convertVecToSet(vector<int> &set_Vector, int val)
{
    for (auto it : set_Vector)
    {
        if (it == val)
        {
            return;
        }
    }
    set_Vector.push_back(val);
}

vector<int> mergeArray(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> set_Vector;

    arr1.insert(arr1.end(), arr2.begin(), arr2.end());

    for (auto val : arr1)
    {
        convertVecToSet(set_Vector, val);
    }

    return set_Vector;
}

int main()
{
    // take 3 vectors and merge them without duplicates
    vector<int> arr1{1, 3, 5};
    vector<int> arr2{2, 3, 6};
    vector<int> arr3{9, 3, 1};

    vector<int> merge_Array = mergeArray(arr1, arr2);
    vector<int> final_result = mergeArray(merge_Array, arr3);

    for (auto it : final_result)
    {
        cout << it << " ";
    }
    return 0;
}