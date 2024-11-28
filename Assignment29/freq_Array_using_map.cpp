#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Given an array of integers, write a function that creates a frequency array to count the occurrences of
        each integer in the array
    */
    int arr[] = {1, 2, 3, 4, 4, 5, 6, 5, 9, 4, 1, 2};
    map<int, int> freq;
    for (auto it : arr)
    {
        freq[it]++;
    }

    cout << "Element " << "Frequncy\n";
    for (auto pair : freq)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}