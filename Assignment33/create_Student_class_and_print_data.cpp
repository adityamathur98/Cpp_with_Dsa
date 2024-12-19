#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    float grade;

public:
    Student(string name, int rollNo, float grade)
    {
        this->name = name;
        this->rollNumber = rollNo;
        this->grade = grade;
    }

    void display()
    {
        cout << "Name is " << name << " , the rollnumber is " << rollNumber << " and the grade is " << grade;
    }
};

int main()
{
    /*
        Define a class Student with name, rollNumber, and grade. Dynamically create an instance of the class, input the details, and
        display them. Free the memory using delete
    */
    Student *student = new Student("Surya", 26, 7.59);
    student->display();
    delete student;
    return 0;
}