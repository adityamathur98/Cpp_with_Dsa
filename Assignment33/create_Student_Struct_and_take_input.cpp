#include <bits/stdc++.h>
using namespace std;

struct Movie
{
    string title;
    string director;
    float duration;

    void inputDetails()
    {
        cout << "Enter Title: ";
        cin >> title;
        cin.ignore();
        cout << "Enter Director: ";
        getline(cin, director);
        cout << "Enter Duration: ";
        cin >> duration;
    }

    void displayDetails()
    {
        cout << "Movie title is " << title << " , director name is " << director << " and durartion is " << duration << " minutes. \n";
    }
};

int main()
{
    /*
        Create a structure Movie containing fields title, director, and duration (in minutes). Dynamically allocate an array of movies,
        input details, and display the list. Free the allocated memory
    */
    int n;
    cout << "Enter Number of Movie: ";
    cin >> n;

    Movie *movie = new Movie[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Movie " << i + 1 << " details" << endl;
        movie[i].inputDetails();
    }

    cout << "Output Details: \n";
    for (int i = 0; i < n; i++)
    {
        movie[i].displayDetails();
    }
    return 0;
}