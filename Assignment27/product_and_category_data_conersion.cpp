#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> product{"Laptop", "Shirt", "Apple", "Table", "Phone"};
    vector<string> category{"Electronics", "Clothing", "Grocery", "Furniture", "Electronics"};

    map<string, int> productMapping{
        {"Laptop", 0},
        {"Shirt", 1},
        {"Apple", 2},
        {"Table", 3},
        {"Phone", 4}};

    map<string, int> category_Mapping{
        {"Electronics", 0},
        {"Clothing", 1},
        {"Grocery", 2},
        {"Furniture", 3},
    };

    vector<pair<int, int>> numerical_Data;

    for (int i = 0; i < product.size(); i++)
    {
        numerical_Data.push_back(make_pair(productMapping[product[i]], category_Mapping[category[i]]));
    }

    for (auto pair : numerical_Data)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}