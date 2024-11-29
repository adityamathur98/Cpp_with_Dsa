#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a set<int> and initialize it with the values {15, 10, 20, 10, 5}. Print the elements of the set.
    set<int> s{15, 10, 20, 10, 5};

    for (auto it : s)
    {
        cout << it << " ";
    }
    return 0;
}