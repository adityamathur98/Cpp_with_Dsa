#include <bits/stdc++.h>
using namespace std;

class Patient
{
private:
    int patientId;
    string name;
    int age;

public:
    Patient(int id = 0, string name = "", int age = 0)
    {
        patientId = id;
        this->name = name;
        this->age = age;
    }

    void inputDetails()
    {
        cout << "Enter Patient Details: \n";
        cout << "Enter id: ";
        cin >> patientId;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayDetails()
    {
        cout << "Patient id: " << patientId << " \n";
        cout << "Patient name: " << name << endl;
        cout << "Patient age: " << age << endl;
    }
};

int main()
{
    /*
        Define a class Patient with attributes patientId, name, and age. Dynamically allocate an array of patients, input their
        details, and display all records. Free the memory using delete[]
    */
    int n;
    cout << "Enter of Patients: ";
    cin >> n;

    Patient *patients = new Patient[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter detail of Patient " << i + 1 << endl;
        patients[i].inputDetails();
    }

    cout << "Details of Patients \n";

    for (int i = 0; i < n; i++)
    {
        patients[i].displayDetails();
    }

    return 0;
}