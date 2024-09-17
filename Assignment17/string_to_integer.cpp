#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        String to Integer Conversion
        Story: The total order amount for a customer is stored as "5000" in string format. Convert it to an integer to perform further
        calculations.
    */
    string amount_str = "5000";
    int amount_num = stoi(amount_str);
    cout << amount_num << "\n";
    cout << typeid(amount_num).name();
    return 0;
}