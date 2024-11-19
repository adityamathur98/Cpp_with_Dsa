#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using Vector
    // vector<vector<string>> product{
    //     {"Electronics", "Clothing"},
    //     {"Home", "Kitchen"},
    //     {"Books", "Toys"},
    //     {"Sports", "Fitness"},
    //     {"Beauty", "Health"},
    //     {"Automotive", "Tools"},
    //     {"Garden", "Outdoor"},
    //     {"Jewelry", "Assessories"},
    //     {"Office Supplies", "Crafts"},
    //     {"Pets", "Baby Products"}};

    // vector<int> price{
    //     100, 80, 40, 150, 60, 120, 90, 200, 50, 30};

    // vector<int> stock{
    //     50, 30, 100, 20, 70, 40, 35, 15, 60, 80};

    // for (int i = 0; i < product.size(); i++)
    // {
    //     for (int j = 0; j < product[i].size(); j++)
    //     {
    //         cout << product[i][j] << "  ";
    //     }
    //     cout << price[i] << " " << stock[i] << "\n";
    // }

    // Using Map
    map<vector<string>, pair<int, int>> product_price_qty{
        {{"Electronics", "Clothing"}, {100, 50}},
        {{"Home", "Kitchen"}, {80, 30}},
        {{"Books", "Toys"}, {40, 100}},
        {{"Sports", "Fitness"}, {150, 20}},
        {{"Beauty", "Health"}, {60, 70}},
        {{"Automotive", "Tools"}, {120, 40}},
        {{"Garden", "Outdoor"}, {90, 35}},
        {{"Jewelry", "Assessories"}, {200, 15}},
        {{"Office Supplies", "Crafts"}, {50, 60}},
        {{"Pets", "Baby Products"}, {30, 80}}};

    for (auto pair : product_price_qty)
    {
        for (auto val : pair.first)
        {
            cout << val << " ";
        }
        cout << pair.second.first << " " << pair.second.second << "\n";
    }
    return 0;
}