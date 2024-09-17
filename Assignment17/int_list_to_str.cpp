#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Convert Integer List to Comma-Separated String
        Story: A shipping company needs to store a list of package weights [10, 20, 30] as a comma-separated string for their records.
    */
    vector<int> package_weight{10, 20, 30};
    stringstream ss;

    for (int i = 0; i < package_weight.size(); i++)
    {
        ss << package_weight[i];

        if (i < package_weight.size() - 1)
        {
            ss << ',';
        }
    }

    string result = ss.str();

    cout << "[" << result << "]";

    return 0;
}