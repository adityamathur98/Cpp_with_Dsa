#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Extract Decimal Part from String as Float
        Story: In a receipt, the price "34.56" is stored as a string. Extract the decimal part (.56) and convert it into a float.
    */
    string str_price = "34.56";
    float price = stof(str_price);
    float integer_part = static_cast<int>(price);
    float decimal_part = price - integer_part;
    printf("%.2f\n", decimal_part);
    return 0;
}