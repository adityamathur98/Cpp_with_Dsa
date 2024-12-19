#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    string name;
    string subject;
    int experience;

public:
    void inputDetails()
    {
        cout << "Enter Teacher Name: ";
        cin >> name;
        cin.ignore();
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Work Experience: ";
        cin >> experience;
    }

    void displayDetails()
    {
        cout << "Teacher name is " << name << " , teaching " << subject << " and having " << experience << " of work experience" << endl;
    }
};

int main()
{
    /*
        Define a class Teacher with name, subject, and experience (in years). Dynamically allocate an array for storing n teachers' data
        . Input details and display them. Ensure proper memory deallocation.
    */

    int n;
    cout << "Enter Number of Teachers: ";
    cin >> n;

    Teacher *teacherArr = new Teacher[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Teacher Details of " << i + 1 << endl;
        teacherArr[i].inputDetails();
    }

    cout << "Teachers Details: " << endl;

    for (int i = 0; i < n; i++)
    {
        teacherArr[i].displayDetails();
    }

    return 0;
}