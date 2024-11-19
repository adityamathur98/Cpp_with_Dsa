#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using Vector
    vector<vector<string>> destination{
        {"Paris", "Rome"},
        {"New York", "Los Angeles"},
        {"Tokyo", "Kyoto"},
        {"Sydney", "Melbourne"},
        {"Cairo", "Luxor"},
        {"Istanbul", "Cappadocia"},
        {"Rio de Janeiro", "Buenos Aires"},
        {"Bankkok", "Phuket"},
        {"London", "Edinburgh"},
        {"Dubai", "Abu Dhabi"}};

    vector<vector<string>> activities{
        {"Sightseeing", "Museum Tour"},
        {"Shopping", "Broadway Show"},
        {"Temple Visit", "Food Tasting"},
        {"Beach Day", "Wine Tasting"},
        {"Pyramid Tour", "Cruise"},
        {"Hot Air Ballon", "Market Visit"},
        {"Carnival", "Tango Show"},
        {"Temple Visit", "Snoekeling"},
        {"Castle Tour", "Theatre"},
        {"Desert Safari", "Luxury Shopping"}};

    vector<int> cost{2000, 1500, 2500, 1800, 1200, 1600, 2200, 1300, 1900, 2100};

    cout << "Destinations" << " " << "Activities" << " " << "Cost" << endl;
    for (int i = 0; i < destination.size(); i++)
    {
        for (int j = 0; j < destination[i].size(); j++)
        {
            cout << destination[i][j] << " ";
        }

        cout << " ";

        for (int j = 0; j < activities[i].size(); j++)
        {
            cout << activities[i][j] << " ";
        }

        cout << cost[i] << endl;
    }

    return 0;
}