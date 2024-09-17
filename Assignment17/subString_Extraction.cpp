#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        1. Substring Extraction
        Story: A delivery agent wants to extract the postal code (last 6 digits) from a shipment tracking number, which is a string like
        "ORD12345098765". Write code to extract only the postal code.
    */
    string trackNum = "ORD12345098765";
    string portalCode = trackNum.substr(trackNum.length() - 6, 6);
    cout << portalCode << endl;
    cout << typeid(portalCode).name();
    return 0;
}