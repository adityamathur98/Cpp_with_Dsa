#include <bits/stdc++.h>
using namespace std;

int getLessThan(int a, int v)
{
    if (a < v)
    {
        return a;
    }
    return v;
}

int main()
{
    /*
        Find All Elements Less Than a Given Value
        You are given an array of integers and a value x. Write a function to find and return all elements in the array that are less than x.
    */
    vector<int> arr{5, 6, 9, 2};
    int value = 6;
    int n = arr.size();
    while (n > 0)
    {
        int less_Integer = getLessThan(arr[n - 1], value);
        if (less_Integer != value)
        {
            cout << less_Integer << "  ";
        }
        n--;
    }
    return 0;
}