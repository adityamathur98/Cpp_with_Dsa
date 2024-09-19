#include <bits/stdc++.h>
using namespace std;

int getMissedAscciVal(vector<char> squ_char)
{
    int asciiValue = squ_char[0];
    for (int i = 0; i < squ_char.size(); i++)
    {
        int value = squ_char[i];
        if (asciiValue == value)
        {
            asciiValue++;
            continue;
        }
        else
        {
            return asciiValue;
        }
    }
    return -1;
}

int main()
{
    // a, b, c, d, e, f, h, i, jWhat is the missing number in the sequence?

    vector<char> sequence_char = {'a', 'b', 'c', 'd', 'e', 'f', 'h', 'i'};

    int missed_Ascci_val = getMissedAscciVal(sequence_char);
    if (missed_Ascci_val != -1)
    {
        cout << char(missed_Ascci_val);
    }
    else
    {
        cout << "Sequence in Series Already";
    }
}