#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to find the first non-repeating character in a string. If all characters repeat, return -1
    string str = "aabbcddee";
    int n = str.length();

    unordered_map<char, int> myMap;

    for (auto el : str)
    {
        myMap[el]++;
    }

    for (auto it : str)
    {
        if (myMap[it] == 1)
        {
            cout << it << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}