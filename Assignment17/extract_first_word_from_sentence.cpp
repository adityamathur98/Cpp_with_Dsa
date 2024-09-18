#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Extract First Word from a Sentence
        Story: A chatbot receives messages like "Hello, how can I help you?". Extract the first word ("Hello") from
        the message.
    */

    string message = "Hello, how can I help you?";

    string first_Word;

    for (auto chr : message)
    {
        if (chr == ',')
        {
            break;
        }
        first_Word += chr;
    }

    cout << first_Word;

    return 0;
}