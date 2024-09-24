#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{15, 12, 48, 56, 2, 6, 56};
    int search_el = 56;
    int n = arr.size();
    int last_index_of_el = -1;

    for (int i = 0; i < n; i++)
    {
        if (search_el == arr[i])
        {
            last_index_of_el = i;
        }
    }

    last_index_of_el != -1 ? (cout << "Last Occurance of " << search_el << " Number is Found at " << last_index_of_el << " index.") : (cout << "Not Exist");

    return 0;
}