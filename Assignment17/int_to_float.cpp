#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Integer to Float Conversion
        Story: A bank needs to convert the amount "5000" (as an integer) to a float to calculate interest.
    */
    int amount = 5000;
    float amount_float = static_cast<float>(amount);
    cout << amount_float << endl;
    cout << typeid(amount_float).name();
    return 0;
}