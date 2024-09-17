#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Convert Comma-Separated String to Integer List
        Story: A software receives a list of sales numbers as a comma-separated string: "1000,2000,3000". Convert it to a list of integers.
    */
    string sales_str = "1000,2000,3000,";
    vector<int> sales;

    stringstream sales_data(sales_str);
    string word;
    int int_Value;
    while (getline(sales_data, word, ','))
    {
        int_Value = stoi(word);
        sales.push_back(int_Value);
    }

    for (auto num : sales)
    {
        cout << num << " ";
    }

    return 0;
}