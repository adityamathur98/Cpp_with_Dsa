#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Create a vector<pair<int, string>> to store product IDs and their names. Initialize and display the elements.
    */
    vector<pair<int, string>> product_Details{
        {105, "Biscuit"},
        {108, "Maggie"}};

    cout << "Product Ids" << " : " << "Name" << endl;
    for (auto pair : product_Details)
    {
        cout << pair.first << " \t:   " << pair.second << endl;
    }
    return 0;
}