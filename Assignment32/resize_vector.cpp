#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a vector of size 5, initialize it with values {10, 20, 30, 40, 50}, then resize it to 3 elements. Print the vector.
    vector<int> vec{10, 20, 30, 40, 50};
    vec.resize(3);

    for (auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}