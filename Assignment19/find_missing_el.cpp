#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 5, 6};
    int count = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != count)
        {
            break;
        }
        count++;
    }

    cout << "Missing Element in Array is " << count;

    return 0;
}