#include <bits/stdc++.h>
using namespace std;

struct Book
{
    string title;
    string author;
    double price;
};

int main()
{
    /*
        Create a structure Book with fields title, author, and price. Dynamically allocate an array of n books. Input the details and
        display them. Free the allocated memory at the end
    */
    int n = 2;
    Book *arr = new Book[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element details" << endl;
        cin.ignore();
        cout << "Enter Title name: ";
        getline(cin, arr[i].title);
        cout << "Enter Author name: ";
        getline(cin, arr[i].author);
        cout << "Enter Price name: ";
        cin >> arr[i].price;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].title << " " << arr[i].author << " " << arr[i].price << endl;
    }

    delete[] arr;

    return 0;
}