#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 4, 16, 32, 64};
    int count = arr[0];
    int r = arr[1] / arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != count)
        {
            break;
        }
        count = count * r;
    }

    cout << "Missing Element in Array is " << count;

    return 0;
}