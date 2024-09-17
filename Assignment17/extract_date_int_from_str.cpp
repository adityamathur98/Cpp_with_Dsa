#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Extract Day from Date String
        Story: A delivery tracking system stores delivery dates as "15-09-2024". Extract the day (15) and convert it to an integer.
    */
    string date_str = "15-09-2024";
    int int_day = stoi(date_str.substr(0, 2));
    cout << "The Day is " << int_day;
    return 0;
}