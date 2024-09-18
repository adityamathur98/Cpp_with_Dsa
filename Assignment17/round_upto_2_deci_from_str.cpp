#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Round a Float to 2 Decimal Places and Convert to String
        Story: A payment system calculates interest rates and needs to round 2.4567 to 2 decimal places and convert it back to a string.
    */
    string interest_str = "2.4567";
    float interest_float;
    if (stoi(string(1, interest_str[4])) >= 5)
    {
        float interest_2_decimal = stof(interest_str.substr(0, 4)) + 0.01;

        ostringstream oss;
        oss.precision(2);
        oss << fixed << interest_2_decimal;

        interest_str = oss.str();
        cout << interest_str;
    }
    else
    {
        float interest_2_decimal = stof(interest_str.substr(0, 4));

        ostringstream oss;
        oss.precision(2);
        oss << fixed << interest_2_decimal;

        interest_str = oss.str();
        cout << interest_str;
    }

    // if (stoi(interest_str[4]) >= 5){

    // }
    // Where is use square root
    // Wher to use logarithum
    return 0;
}