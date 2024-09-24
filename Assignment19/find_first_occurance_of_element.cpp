#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{15, 12, 15, 56, 2, 6};
    int search_el = 15;
    int n = arr.size();
    int index_of_el = -1;

    for (int i = 0; i < n; i++)
    {
        if (search_el == arr[i])
        {
            index_of_el = i;
            break;
        }
    }

    index_of_el != -1 ? cout << "Element Fount at " << index_of_el << " index from Start Index." : cout << "Not Exist";

    return 0;
}