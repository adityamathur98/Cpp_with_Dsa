#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Convert Time in String to Float Hours
        Story: A company stores working hours like "08:30" as strings. Convert it to the float 8.5 representing the total hours worked.
    */
    string working_hour_str = "10:45";
    float minutes = stof(working_hour_str.substr(3, 2)) / 60.0;
    int hours = stoi(working_hour_str.substr(0, 2));
    // cout << "Minutes " << minute_str << endl;
    // cout << "Minute in decimal " << convertToDecimal << endl;
    cout << hours + minutes << endl;
    return 0;
}