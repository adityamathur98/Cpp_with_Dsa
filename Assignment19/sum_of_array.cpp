#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{15, 12, 48, 56, 2, 6};
    int n = arr.size();
    int sum_of_arr = 0;

    for (int i = 0; i < n; i++)
    {
        sum_of_arr += arr[i];
    }

    cout << "Sum of Array Elements is " << sum_of_arr;
}