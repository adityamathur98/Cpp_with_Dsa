#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Extract Numbers from a String
        Story: An app developer needs to extract the phone number from a string "Contact: 123-456-7890" and convert it into an integer without
        the dashes.
    */
    string contact = "123-456-7890";
    string number = "";
    for (auto it : contact)
    {
        if (it == '-')
        {
            continue;
        }
        number += it;
    }
    long num_int = stoi(number);
    cout << num_int << endl;
    cout << typeid(num_int).name();
    return 0;
}