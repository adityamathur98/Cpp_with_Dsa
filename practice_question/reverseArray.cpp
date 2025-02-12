#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Q: Write a C++ program to reverse an array of integers without using any extra array. You can modify the original array itself.
    int number[5] = {10, 15, 21, 32};
    int start = 0, end = (sizeof(number) / sizeof(number[0])) - 1;

    while (start < end)
    {
        int temp = number[start];
        number[start] = number[end];
        number[end] = temp;

        start++;
        end--;
    }

    for (auto it : number)
    {
        cout << it << " ";
    }
}