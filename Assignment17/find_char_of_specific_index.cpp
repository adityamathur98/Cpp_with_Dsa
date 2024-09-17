#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Find Character at Specific Index
        Story: A professor needs to find the 5th character of a student's ID, which is a string like "STUD98765".
    */
    string student_id = "STUD98765";
    cout << student_id << endl;
    int index;
    cout << "Enter Any Index : ";
    cin >> index;

    char charAtIndex = student_id.at(index - 1);
    cout << charAtIndex;
    return 0;
}