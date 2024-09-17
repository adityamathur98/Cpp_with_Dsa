#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Find the First Occurrence of a Character in a String
        Story: A search engine needs to find the first occurrence of the character "@" in an email ID like "john.doe@example.com".
    */
    string email_id = "john.doe@example.com";
    char find_char = '@';

    int result;

    for (int i = 0; i < email_id.length(); i++)
    {
        if (email_id[i] == find_char)
        {
            result = i;
            break;
        }
    }

    if (result <= email_id.length())
    {
        cout << find_char << " is found at " << result << " index number.";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}