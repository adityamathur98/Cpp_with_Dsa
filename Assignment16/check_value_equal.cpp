#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> myVector{1, 5, 9};
    myVector.erase(myVector.begin(), myVector.end() - 1);

    for (auto it : myVector)
    {
        cout << it << " ";
    }
    return 0;
}