#include <bits/stdc++.h>
using namespace std;

int getFirstOccurrence(vector<int> &v, int s)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == s)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    /* Given a vector {10, 20, 30, 20, 10}, find the first occurrence of the element 20 and remove it.*/
    vector<int> v{10, 30, 20, 10, 20};
    // auto ptr = find(v.begin(), v.end(), 20);

    // if (ptr != v.end()){
    //     cout << "Element " << 20 << " found at index " << distance(v.begin(),ptr);
    // } else {
    //     cout << "Element " << 20 << " not found.";
    // }
    int search_el = 20;
    int first_Occurrence = getFirstOccurrence(v, search_el);

    if (first_Occurrence >= 0)
    {
        cout << "The " << search_el << " is first found at index " << first_Occurrence;
    }
    else
    {
        cout << "The " << search_el << " is not exist";
    }
    return 0;
}