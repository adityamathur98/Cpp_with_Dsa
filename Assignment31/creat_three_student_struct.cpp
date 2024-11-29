#include <bits/stdc++.h>
using namespace std;
struct Student
{
    int id;
    string name;
    float marks;
};

int main()
{
    /*
        Create an array of 3 Student structures. Initialize each student with specific values and display their details.:
    */
    Student arr[] = {
        {101, "Suman", 72.50},
        {102, "Lokesh", 45.56},
        {103, "Zoseph", 98.56}};

    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> arr[i].id;
    //     cin >> arr[i].name;
    //     cin >> arr[i].marks;
    // }

    for (auto it : arr)
    {
        cout << it.id << " " << it.name << " " << it.marks << endl;
    }
    return 0;
}