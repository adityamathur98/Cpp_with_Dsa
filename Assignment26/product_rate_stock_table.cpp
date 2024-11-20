#include <bits/stdc++.h>
using namespace std;

struct Data
{
    vector<string> product_names;
    vector<string> categories;
    vector<float> rating;
    vector<int> stock;
};

int main()
{
    // Using Vector
    // vector<int> product_id{501, 502, 503, 504, 505};
    // vector<vector<string>> product_name{
    //     {"Laptop", "Smartphone"},
    //     {"Headphone", "Charger"},
    //     {"Smartphone", "Tablet"},
    //     {"Camera", "Lens"},
    //     {"Smart Speaker", "Router"}};

    // vector<vector<string>> categories{
    //     {"Computer", "Mobile"},
    //     {"Accessories", "Accessories"},
    //     {"Wearable", "Computer"},
    //     {"Photography", "Photography"},
    //     {"Home Electronics", "Networking"}};

    // vector<vector<float>> rating{
    //     {4.5, 4.2},
    //     {4.8, 4.0},
    //     {4.3, 4.6},
    //     {4.7, 4.3},
    //     {4.6, 4.1}};

    // vector<vector<int>> stock{
    //     {50, 100},
    //     {200, 150},
    //     {75, 60},
    //     {40, 30},
    //     {120, 80}};

    // for (int i = 0; i < product_name.size(); i++)
    // {
    //     cout << product_id[i] << " | ";
    //     for (int j = 0; j < product_name[i].size(); j++)
    //     {
    //         cout << product_name[i][j] << " ";
    //     }
    //     cout << " | ";
    //     for (int j = 0; j < categories[i].size(); j++)
    //     {
    //         cout << categories[i][j] << " ";
    //     }
    //     cout << " | ";
    //     for (int j = 0; j < rating[i].size(); j++)
    //     {
    //         cout << rating[i][j] << " ";
    //     }
    //     cout << " | ";
    //     for (int j = 0; j < stock[i].size(); j++)
    //     {
    //         cout << stock[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // Using Map
    map<int, Data> product_details{
        {501, {{"Laptop", "Smartphone"}, {"Computer", "Mobile"}, {4.5, 4.2}, {120, 80}}},
        {502, {{"Headphone", "Charger"}, {"Accessories", "Accessories"}, {4.8, 4.0}, {200, 150}}},
        {503, {{"Smartphone", "Tablet"}, {"Wearable", "Computer"}, {4.3, 4.6}, {75, 60}}},
        {504, {{"Camera", "Lens"}, {"Photography", "Photography"}, {4.7, 4.3}, {40, 30}}},
        {505, {{"Smart Speaker", "Router"}, {"Home Electronics", "Networking"}, {4.6, 4.1}, {120, 80}}}};

    for (auto pair : product_details)
    {
        cout << pair.first << " | ";
        for (auto val : pair.second.product_names)
        {
            cout << val << " ";
        }
        cout << " | ";
        for (auto val : pair.second.categories)
        {
            cout << val << " ";
        }
        cout << " | ";
        for (auto val : pair.second.rating)
        {
            cout << val << " ";
        }
        cout << " | ";
        for (auto val : pair.second.stock)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
    return 0;
}