#include <bits/stdc++.h>
using namespace std;

int getAbsoluteValue(int a)
{
    if (a >= 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}

float getAbsoluteValue(float a)
{
    if (a >= 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}

double getAbsoluteValue(double a)
{
    if (a >= 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}

int main()
{
    /*
        Overload the absolute function to return the absolute value of an integer, a float, and a double. Write a program to test all the
        overloaded versions.
    */
    int absoluteIntValue = getAbsoluteValue(-56);
    float absoluteFloatValue = getAbsoluteValue(-5.6f);
    double absoluteDoubleValue = getAbsoluteValue(-8.9);

    cout << "The absolute value of integer is " << absoluteIntValue << endl;
    cout << "The absolute value of Float is " << absoluteFloatValue << endl;
    cout << "The absolute value of Double is " << absoluteDoubleValue << endl;

    return 0;
}