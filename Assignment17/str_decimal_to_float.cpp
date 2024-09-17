#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Convert String of Decimal Number to Float
        Story: An e-commerce website stores product ratings as strings like "4.85". Convert it to a float for further calculations.
    */
    string rating_str = "4.85";
    float rating_float = stof(rating_str);

    cout << rating_float << " " << typeid(rating_float).name();
    return 0;
}