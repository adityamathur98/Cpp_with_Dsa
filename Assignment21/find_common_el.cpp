#include <bits/stdc++.h>
using namespace std;

vector<int> getCommonEl(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> commonEl;

    for (auto val : arr1)
    {
        auto it = find(arr2.begin(), arr2.end(), val);
        if (it != arr2.end())
        {
            commonEl.push_back(val);
        }
    }
    return commonEl;
}

int main()
{
    // take two vectors and find the common elements from them
    vector<int> arr1{1, 2, 6};
    vector<int> arr2{1, 8, 6};

    vector<int> common_el = getCommonEl(arr1, arr2);

    for (auto it : common_el)
    {
        cout << it << " ";
    }
    return 0;
}