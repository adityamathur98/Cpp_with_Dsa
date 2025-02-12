#include <bits/stdc++.h>
using namespace std;

string toLowerCase(string word)
{
    for (char &c : word)
    {
        c = tolower(c);
    }
    return word;
}

int countVowels(string &str)
{
    int count = 0;
    for (char c : str)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // Write a C++ program to count the number of vowels in a given string. The program should work for both uppercase and lowercase vowels.
    string word = "Hello World";

    // Convert the string to lowercase
    string lowerCaseString = toLowerCase(word);

    int vowelCount = countVowels(lowerCaseString);
    cout << "Number of Vowel is " << vowelCount;
}