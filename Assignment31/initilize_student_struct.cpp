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
        Write a structure Student with the following members:
            id (integer)
            name (string)
            marks (float)
        Create a variable of this structure, initialize it, and print its values.
    */

    Student obj1;

    obj1.id = 102;
    obj1.name = "Abi";
    obj1.marks = 75.50;

    cout << obj1.id << " " << obj1.name << " " << obj1.marks;

    return 0;
}