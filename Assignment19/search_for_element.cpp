#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{15, 12, 48, 56, 2, 6};
    int n = arr.size();
    int searched_el = 16;
    bool ans = false;

    for (int i = 0; i < n; i++)
    {
        if (searched_el == arr[i])
        {
            ans = true;
            break;
        }
    }

    ans ? cout << "Fount It" : cout << "Not Exist";

    return 0;
}