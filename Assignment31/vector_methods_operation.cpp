#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    /*
        Create a vector<int> and initialize it with the values {10, 20, 30, 40, 50}.: Perform the following operations on the vector:
            Add a new element at the end.
            Insert an element at the second position.
            Erase the third element.
    */
    vector<int> arr{10, 20, 30, 40, 50};
    arr.push_back(60);
    arr.insert(arr.begin() + 2, 100);
    arr.erase(arr.begin() + 2);
    printArray(arr);
    return 0;
}