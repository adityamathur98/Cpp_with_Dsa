#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write a C++ program to check whether a given string is a palindrome or not.
    string str = "wow";
    int n = str.length();
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}