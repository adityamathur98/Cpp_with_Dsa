#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a vector with elements {10, 20, 30, 40}. Insert 25 between 20 and 30 using the insert method.
    vector<int> vec{10, 20, 30, 40};
    vec.insert(vec.begin() + 2, 25);

    for (auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}