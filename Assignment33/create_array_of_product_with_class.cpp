#include <bits/stdc++.h>
using namespace std;

class Product
{
private:
    int productId;
    string productName;
    float price;

public:
    Product(int id = 0, string name = "", float price = 0.0)
    {
        productId = id;
        productName = name;
        this->price = price;
    }

    void inputDetails()
    {
        cout << "Enter Product id: ";
        cin >> productId;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, productName);
        cout << "Enter Price of Product: ";
        cin >> price;
    }

    void display()
    {
        cout << "Product Id: " << productId << " Name: " << productName << " price: " << price << endl;
    }
};

int main()
{
    /*
        Create a class Product with attributes productId, productName, and price. Dynamically allocate memory for an array of products.
        Input details for each product and display them. Deallocate the memory afterward.
    */
    int n;
    cout << "Enter Number of Product : ";
    cin >> n;

    Product *productArr = new Product[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of Product " << i + 1 << endl;
        productArr[i].inputDetails();
    }

    cout << "Product Details: \n";

    for (int i = 0; i < n; i++)
    {
        productArr[i].display();
    }

    delete[] productArr;

    return 0;
}