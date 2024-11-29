#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write code to reverse a vector {100, 200, 300, 400, 500} using the rbegin() and rend() iterators
    vector<int> vec{100, 200, 300, 400, 500};

    sort(vec.rbegin(), vec.rend());

    for (auto el : vec)
    {
        cout << el << " ";
    }
    return 0;
}