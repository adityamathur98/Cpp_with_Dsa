#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
    }

    if (n % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // Write a C++ function to check if a given number is a prime number or not. The function should return true if the number is
    // prime and false otherwise.

    int n = 3;
    bool isPrime = checkPrime(n);

    if (isPrime)
    {
        cout << n << " is Prime";
    }
    else
    {
        cout << n << " is not Prime";
    }
}