#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
private:
    string type;
    string brand;
    float price;

public:
    Vehicle(string type = "", string brand = "", float price = 0.0)
    {
        this->type = type;
        this->brand = brand;
        this->price = price;
    }

    void displayDetails()
    {
        cout << type << " " << brand << " " << price << endl;
    }
};

int main()
{
    /*
        Define a class Vehicle with attributes type, brand, and price. Dynamically allocate a single instance of the class,
        assign values, and display them. Deallocate memory properly.
    */
    Vehicle *v1 = new Vehicle("Hachback", "Suzuki", 455555.50);

    v1->displayDetails();

    delete v1;
    return 0;
}