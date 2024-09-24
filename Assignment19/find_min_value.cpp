#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{15, 12, 48, 56, 2, 6};
    int n = arr.size();
    int min_value = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (min_value > arr[i])
        {
            min_value = arr[i];
        }
    }

    cout << "Minimum Value of Vector is " << min_value;

    return 0;
}