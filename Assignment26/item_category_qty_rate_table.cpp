#include <bits/stdc++.h>
using namespace std;

struct Data
{
    vector<string> item_Names;
    vector<string> categories;
    vector<int> qty;
    vector<float> unitPrice;
    vector<float> total_Cost;
};

int main()
{
    // Using Vector
    //  vector<int> card_Id{401, 402, 403, 404, 405};
    //  vector<vector<string>> item_Names{
    //      {"Milk", "Bread", "Eggs"},
    //      {"Apple", "Banana", "Orange"},
    //      {"Carrot", "Potato"},
    //      {"Chicken", "Beef"},
    //      {"Tomato", "Onion", "Cucumber"}};

    // vector<vector<string>> categories{
    //     {"Dairy", "Bakery", "Grocery"},
    //     {"Fruit", "Fruit", "Fruit"},
    //     {"Vegetable", "Vegetable"},
    //     {"Meat", "Meat"},
    //     {"Vegetable", "Vegetable", "Vegetable"}};

    // vector<vector<int>> qty{
    //     {2, 1, 12},
    //     {3, 5, 2},
    //     {4, 6},
    //     {2, 1},
    //     {3, 2, 5}};

    // vector<vector<float>> unit_Price{
    //     {1, 5, 2, 0.2},
    //     {0.5, 0.3, 0.6},
    //     {0.4, 0.3},
    //     {5, 7},
    //     {0.6, 0.4, 0.3}};

    // vector<vector<float>> total_Cost{
    //     {3, 2, 2.4},
    //     {1.5, 1.5, 1.2},
    //     {1.6, 1.8},
    //     {10, 7},
    //     {1.8, 0.8, 1.5}};

    // cout << "Cart ID" << " " << "Item Names" << " " << "Categories" << " " << "Quntity" << " " << "Unit Price" << " " << "Total Cost" << endl;
    // for (int i = 0; i < item_Names.size(); i++)
    // {
    //     cout << card_Id[i] << " ";
    //     for (int j = 0; j < item_Names[i].size(); j++)
    //     {
    //         cout << item_Names[i][j] << " ";
    //     }

    //     for (int j = 0; j < categories[i].size(); j++)
    //     {
    //         cout << categories[i][j] << " ";
    //     }

    //     for (int j = 0; j < qty[i].size(); j++)
    //     {
    //         cout << qty[i][j] << " ";
    //     }

    //     for (int j = 0; j < unit_Price[i].size(); j++)
    //     {
    //         cout << unit_Price[i][j] << " ";
    //     }

    //     for (int j = 0; j < total_Cost[i].size(); j++)
    //     {
    //         cout << total_Cost[i][j] << " ";
    //     }

    //     cout << "\n";
    // }

    // Using Map
    cout << "Cart ID | Item Names  | Categories  | Quantity | Unit Price | Total Cost" << endl;
    map<int, Data> card_Details{
        {401, {{"Milk", "Bread", "Eggs"}, {"Dairy", "Bakery", "Grocery"}, {2, 1, 12}, {1.0, 5.0, 0.2}, {3, 2, 2.4}}},
        {402, {{"Apple", "Banana", "Orange"}, {"Fruit", "Fruit", "Fruit"}, {3, 5, 2}, {0.5, 0.3, 0.6}, {1.5, 1.5, 1.2}}},
        {403, {{"Carrot", "Potato"}, {"Vegetable", "Vegetable"}, {4, 6}, {0.4, 0.3}, {1.6, 1.8}}},
        {404, {{"Chicken", "Beef"}, {"Meat", "Meat"}, {2, 1}, {5, 7}, {10, 7}}},
        {405, {{"Tomato", "Onion", "Cucumber"}, {"Vegetable", "Vegetable", "Vegetable"}, {3, 2, 5}, {0.6, 0.4, 0.3}, {1.8, 0.8, 1.5}}}};

    for (auto pair : card_Details)
    {
        cout << pair.first << " ";
        for (auto val : pair.second.item_Names)
        {
            cout << val << " ";
        }
        cout << " | ";
        for (auto val : pair.second.categories)
        {
            cout << val << " ";
        }
        cout << " | ";
        for (auto val : pair.second.qty)
        {
            cout << val << " ";
        }
        cout << " | ";
        for (auto val : pair.second.unitPrice)
        {
            cout << val << " ";
        }
        cout << " | ";
        for (auto val : pair.second.total_Cost)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}