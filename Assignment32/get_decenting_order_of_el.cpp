#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &vec)
{
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        int max_Index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (vec[max_Index] < vec[j])
            {
                max_Index = j;
            }
        }
        swap(vec[i], vec[max_Index]);
    }
}

int main()
{
    // Given a vector {3, 1, 4, 1, 5, 9}, sort it in descending order
    vector<int> vec{3, 1, 4, 1, 5, 9};
    selectionSort(vec);

    for (auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}