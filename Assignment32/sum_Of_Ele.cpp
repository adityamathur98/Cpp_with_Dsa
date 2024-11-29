#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write code to compute the sum of all elements in a vector using a loop.
    vector<int> arr = {1, 5, 9, 7, 3, 4, 6};
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << sum;
    return 0;
}