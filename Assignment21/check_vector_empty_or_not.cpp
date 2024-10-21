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
    // convert vector to set and check if set is empty or not
    vector<int> arr{1, 2, 2, 5, 6, 7, 7};
    vector<int> uniqueEl;
    int key_el = 6;
    for (auto val : arr)
    {
        convertVecToSet(uniqueEl, val);
    }

    if (uniqueEl.empty())
    {
        cout << "Vector does not have any Element";
    }
    else
    {
        cout << "Vector does have Elements";
    }
    return 0;
}