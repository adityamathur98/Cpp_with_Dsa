#include <bits/stdc++.h>
using namespace std;

vector<int> getMostFreq(int *arr, int n, int s)
{
    map<int, int> freq;

    for (int i = 0; i < s; i++)
    {
        freq[arr[i]]++;
    }

    vector<int> vec;

    for (auto pair : freq)
    {
        int frequency = pair.second;
        if (frequency > n)
        {
            vec.push_back(pair.first);
        }
    }
    return vec;
}

int main()
{
    /*
        Given an array of integers and a threshold value, write a function to find all elements whose frequency
        is above the given threshold.
    */
    int arr[] = {1, 2, 3, 4, 4, 5, 5, 5, 6, 5, 9, 4, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int threshold_Value = 2;
    vector<int> most_Freq_El = getMostFreq(arr, threshold_Value, size);
    for (auto ele : most_Freq_El)
    {
        cout << ele << " ";
    }
    return 0;
}