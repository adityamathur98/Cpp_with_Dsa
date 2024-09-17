#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Concatenate Substrings
        Story: A customer service system needs to concatenate the first 3 letters of the first name and the last 4 digits of a phone number to
        generate a unique code.
    */
    string firstName = "Surya";
    long long number = 1234567891;
    string str_num = to_string(number);
    string last_4_igits = str_num.substr(str_num.length() - 4, 4);
    string unique_code = firstName.substr(0, 3) + last_4_igits;
    cout << unique_code;
    return 0;
}