#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{15, 12, 48, 56, 2, 6};
    int n = arr.size();
    int max_value = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (max_value < arr[i])
        {
            max_value = arr[i];
        }
    }

    cout << "Maximum Value of Vector is " << max_value;

    return 0;
}