#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Remove Decimal Part from Float and Convert to String
        Story: A bakery receives orders in float format like 23.50 and needs to convert it to the string "23",
        removing the decimal part.
    */

    float float_order = 23.50;
    string order_str = to_string(static_cast<int>(float_order));

    cout << order_str;

    return 0;
}