#include <bits/stdc++.h>
using namespace std;

void convertVectToSet(vector<int> &uniqueEl, int val)
{
    for (auto it : uniqueEl)
    {
        if (it == val)
        {
            return;
        }
    }
    uniqueEl.push_back(val);
}

vector<int> differenceEl(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> uniqueEl;

    for (auto val : arr1)
    {
        convertVectToSet(uniqueEl, val);
    }

    vector<int> differenceVector;

    for (auto el : uniqueEl)
    {
        auto it = find(arr2.begin(), arr2.end(), el);
        if (it == arr2.end())
        {
            differenceVector.push_back(el);
        }
    }
    return differenceVector;
}

vector<int> getCommonEl(vector<int> &differce_el, vector<int> arr3)
{
    vector<int> commonEl;

    for (auto val : differce_el)
    {
        auto it = find(arr3.begin(), arr3.end(), val);
        if (it != arr3.end())
        {
            commonEl.push_back(val);
        }
    }
    return commonEl;
}

int main()
{
    // take 3 vectors and make a set having elements that are present on vector 1 but vector2 and common elements from vector 3
    vector<int> arr1{1, 2, 3, 3, 5};
    vector<int> arr2{2, 5, 6, 7};
    vector<int> arr3{2, 3, 5};

    vector<int> differce_el = differenceEl(arr1, arr2);
    vector<int> common_el = getCommonEl(differce_el, arr3);

    for (auto it : common_el)
    {
        cout << it << " ";
    }
    return 0;
}