#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a vector of size n (user input) and initialize it such that the value at each index is i*i - 3
    int n;
    cout << "Enter Your Vector Size: ";
    cin >> n;
    vector<int> cal(n);
    for (int i = 0; i < n; i++)
    {
        cal[i] = (i * i) - 3;
    }

    for (auto it : cal)
    {
        cout << it << " ";
    }
    return 0;
}