#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<vector<string>>> items{
        {{"Apple", "Banana"},
         {"Kiwi", "Orange"}},
        {{"Potato", "Onion"},
         {"Garlic", "Cabbage"}}};

    vector<string> descriptions{"Fruits are very Healty", "Vegetables are good for heath"};
    vector<int> quantity{3, 2};
    vector<float> price{200.50, 400.00};
    vector<float> total;
    int final_total = 0;

    // To store Total price of each Item
    for (int i = 0; i < quantity.size(); i++)
    {
        total.push_back(quantity[i] * price[i]);
    }

    for (int i = 0; i < descriptions.size(); i++)
    {
        cout << i + 1 << "  ";
        for (int j = 0; j < items[i].size(); j++)
        {
            for (int k = 0; k < items[i][j].size(); k++)
            {
                cout << items[i][j][k] << "  ";
            }
        }
        cout << descriptions[i] << "\t\t" << quantity[i] << "\t" << price[i] << "\t" << total[i];
        final_total += total[i];
        cout << endl;
    }

    cout << "\t\t\t\t\t\t\t\t\t\t" << "Final Total :- " << final_total;

    return 0;
}