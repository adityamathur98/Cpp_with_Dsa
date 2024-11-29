#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a vector {1, 2, 3, 4, 5, 6} and remove all even numbers using the erase method.
    vector<int> vec{1, 2, 3, 4, 5, 6};
    for (auto i = 0; i < vec.size(); i++)
    {
        if (vec[i] % 2 == 0)
        {
            vec.erase(vec.begin() + i);
        }
    }

    for (auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}