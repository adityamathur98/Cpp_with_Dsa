#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        String to Float Conversion
        Story: A coffee shop has prices stored as strings, like "34.56". The manager needs them in float format to perform calculations.
    */
    string str_price = "34.56";
    float float_price = stof(str_price);
    cout << float_price << endl;
    cout << typeid(float_price).name();
    return 0;
}