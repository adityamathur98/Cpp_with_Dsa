#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<string>> fruits{{"Apple", "Banana", "Kiwi"}, {"Orange", "Papaya", "Grapes"}, {"Mango", "Watermelon", "Berrie"}};
    vector<float> price{200, 100, 50};
    vector<int> quantity{3, 4, 5};
    vector<float> total_price;

    for (int i = 0; i < price.size(); i++)
    {
        float value = price[i] * quantity[i];
        total_price.push_back(value);
    }

    for (int i = 0; i < total_price.size(); i++)
    {
        cout << i + 1 << "  " << "[";
        for (int j = 0; j < fruits.size(); j++)
        {
            cout << fruits[i][j] << ",";
        }
        cout << "]" << "  " << price[i] << "  " << quantity[i] << "  " << total_price[i];
        cout << "\n";
    }

    return 0;
}