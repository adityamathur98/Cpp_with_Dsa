#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &student)
{
    for (auto pair : student)
    {
        cout << pair.first << " : " << pair.second << "\n";
    }
    cout << endl;
}

int main()
{
    /*
        Create a map<int, string> to store student roll numbers and their names. Initialize it with at least 3 entries.:
        Perform the following on a map<int, string>:
        Insert a new pair.
        Find an element by its key.
        Erase an element.
    */
    map<int, string> student{
        {5, "Suman"},
        {8, "Lokesh"},
        {10, "Payal"}};

    student.insert({15, "Komal"});
    printMap(student);
    cout << student[5] << endl;

    cout << endl;

    student.erase(10);
    printMap(student);

    return 0;
}