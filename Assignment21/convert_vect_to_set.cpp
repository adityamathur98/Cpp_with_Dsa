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

int main()
{
    // convert vector to set and remove all the duplicates
    vector<int> arr{1, 2, 2, 5, 6, 7, 7};
    vector<int> uniqueEl;
    for (auto val : arr)
    {
        convertVecToSet(uniqueEl, val);
    }

    for (auto it : uniqueEl)
    {
        cout << it << " ";
    }
    return 0;
}