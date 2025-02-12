#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to check whether a given string is a palindrome (reads the same forward and backward)
    string word = "madam";
    int size = word.length();
    bool isPalindrome = true;

    for (int i = 0; i < size / 2; i++)
    {
        if (tolower(word[i]) != tolower(word[size - i - 1]))
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << word << " is Palindrome";
    }
    else
    {
        cout << word << " is not Palindrome";
    }
    return 0;
}