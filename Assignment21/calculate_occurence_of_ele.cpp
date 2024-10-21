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
    // calculate the occurrence of and element inside set
    vector<int> arr{1, 2, 2, 5, 6, 7, 7};
    vector<int> uniqueEl;
    int key_el = 6;
    for (auto val : arr)
    {
        convertVecToSet(uniqueEl, val);
    }

    int occurrence_of_el = count(uniqueEl.begin(), uniqueEl.end(), key_el);

    cout << "Occurrence of element " << key_el << " in array is  " << occurrence_of_el << endl;

    return 0;
}