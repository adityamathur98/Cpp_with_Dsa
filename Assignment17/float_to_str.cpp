#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Float to String Conversion
        Story: A gas station records fuel prices as floats, such as 45.67. The system requires them in string format for logging purposes.
    */
    float fuel_price = 45.67;
    string logging = to_string(fuel_price);
    cout << logging << "endl";
    cout << typeid(logging).name();
    return 0;
}