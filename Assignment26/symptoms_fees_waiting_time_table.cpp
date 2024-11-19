#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using Vector
    //  vector<vector<string>> symptoms{
    //      {"Fever", "Cough"},
    //      {"Headache", "Nausea"},
    //      {"Back Pain", "Fatique"},
    //      {"Allergies", "Itching"},
    //      {"Chest Pain", "Shortness"},
    //      {"Diarrhea", "Vomitting"},
    //      {"Joint Pain", "Sweeling"},
    //      {"Skin Rash", "Irritation"},
    //      {"Cold", "Sore Throat"},
    //      {"Dizziness", "Blurred Vision"}};

    // vector<int> fees{
    //     50, 60, 80, 40, 100, 70, 90, 45, 35, 85};

    // vector<int> waiting_time{
    //     20, 15, 25, 10, 30, 18, 22, 12, 15, 28};

    // for (int i = 0; i < symptoms.size(); i++)
    // {
    //     for (int j = 0; j < symptoms[i].size(); j++)
    //     {
    //         cout << symptoms[i][j] << " ";
    //     }
    //     cout << fees[i] << " " << waiting_time[i] << endl;
    // }

    // Using Map
    map<vector<string>, pair<int, int>> symptom_fees_waiting_time{
        {{"Fever", "Cough"}, {50, 20}},
        {{"Headache", "Nausea"}, {60, 15}},
        {{"Back Pain", "Fatique"}, {80, 25}},
        {{"Allergies", "Itching"}, {40, 10}},
        {{"Chest Pain", "Shortness"}, {100, 30}},
        {{"Diarrhea", "Vomitting"}, {70, 18}},
        {{"Joint Pain", "Sweeling"}, {90, 22}},
        {{"Skin Rash", "Irritation"}, {45, 12}},
        {{"Cold", "Sore Throat"}, {35, 15}},
        {{"Dizziness", "Blurred Vision"}, {85, 28}}};

    for (auto pair : symptom_fees_waiting_time)
    {
        for (auto value : pair.first)
        {
            cout << value << " ";
        }
        cout << pair.second.first << " " << pair.second.second << endl;
    }
    return 0;
}