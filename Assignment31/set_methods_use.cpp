#include <bits/stdc++.h>
using namespace std;

void printSet(set<int> &s)
{
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    /*
        Perform the following operations on a set:
            Insert a new value.
            Find an element.
            Remove an element.
    */
    set<int> s{15, 10, 20, 10, 5};

    s.insert(56);
    auto isElementExist = s.find(5);
    if (isElementExist != s.end())
    {
        cout << "Exist";
    }
    else
    {
        cout << "Not Found";
    }

    cout << endl;

    s.erase(10);
    printSet(s);

    return 0;
}