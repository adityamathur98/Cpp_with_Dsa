#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Extract and Reverse Substring
        Story: A ticket booking system stores ticket numbers like "ABC123XYZ". Extract the middle numeric part ("123") and reverse it.
    */
    string ticket = "ABC123XYZ";
    int num_code = stoi(ticket.substr(3, 3));
    int reverse_num = 0;
    while (num_code > 0)
    {
        int last_digit = num_code % 10;
        reverse_num = reverse_num * 10 + last_digit;
        num_code /= 10;
    }

    cout << "Reverse of Num part of ticket is " << reverse_num;
    return 0;
}