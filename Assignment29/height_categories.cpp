#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Create a vector of heights and classify them into short, average, and tall categories.
    */
    vector<int> height_Cm{150, 160, 180, 155, 190};

    map<string, vector<int>> mp;

    for (auto it : height_Cm)
    {
        if (it <= 160)
        {
            mp["short"].push_back(it);
        }
        else if (it > 160 && it <= 180)
        {
            mp["average"].push_back(it);
        }
        else
        {
            mp["tall"].push_back(it);
        }
    }

    for (auto pair : mp)
    {
        cout << pair.first << " ";
        for (auto val : pair.second)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}