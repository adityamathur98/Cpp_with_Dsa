#include <bits/stdc++.h>
using namespace std;

bool checkEvenNum(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout << "Enter Any Number: ";
    cin >> num;

    if (checkEvenNum(num))
    {
        cout << num << " is Even Number." << endl;
    }
    else
    {
        cout << num << " is Odd Number." << endl;
    }

    return 0;
}