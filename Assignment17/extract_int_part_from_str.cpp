#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Convert Product ID from String to Integer
        Story: A warehouse stores product IDs as strings, such as "PROD12345". Extract the numeric part and convert it to an integer.
    */
    string product_id = "PROD12345";
    int int_part_of_product_id = stoi(product_id.substr(4, product_id.length()));
    cout << int_part_of_product_id;
    return 0;
}