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
    // convert vector to  set and find the element present or not
    vector<int> arr{1, 2, 2, 5, 6, 7, 7};
    vector<int> uniqueEl;
    int key_el = 6;
    for (auto val : arr)
    {
        convertVecToSet(uniqueEl, val);
    }

    auto it = find(uniqueEl.begin(), uniqueEl.end(), key_el);

    if (it != uniqueEl.end())
    {
        cout << "Element Present";
    }
    else
    {
        cout << "Not Present";
    }
    return 0;
}