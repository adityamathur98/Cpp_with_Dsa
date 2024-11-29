#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(vector<int> &vec, int el)
{
    for (auto it : vec)
    {
        if (it == el)
        {
            return;
        }
    }
    vec.push_back(el);
}

int main()
{
    // Write code to remove duplicate elements from a vector {10, 20, 30, 20, 10}.
    vector<int> vec{10, 20, 30, 20, 10};
    vector<int> result;

    for (auto ele : vec)
    {
        removeDuplicate(result, ele);
    }

    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}