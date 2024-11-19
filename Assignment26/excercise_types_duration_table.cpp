#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using Vector
    vector<vector<string>> excercise{
        {"Yoga", "Pilates"},
        {"Running", "Cycling"},
        {"Weightligting", "Squats"},
        {"Swimming", "Rowing"},
        {"Dancing", "Zumba"},
        {"Hiking", "Climbing"},
        {"Boxing", "Kickboxing"},
        {"Tai Chi", "Meditation"},
        {"Jump Rope", "Burpees"},
        {"Stretching", "Foam Rolling"}};

    vector<vector<string>> benefits{
        {"Flexibility", "Strength"},
        {"Cardio", "Stamina"},
        {"Muscle Gain", "Endurance"},
        {"Full-body Workout", "Core Strength"},
        {"Calorie Burn", "Coordination"},
        {"Stamina", "Adventure"},
        {"Agility", "Strength"},
        {"Mental Relaxation", "Balance"},
        {"Calorie Burn", "Agility"},
        {"Recovery", "Mobility"}};

    vector<int> age{60, 45, 75, 90, 50, 120, 60, 40, 30, 20};

    cout << "Exercise" << " \t" << "Benefits" << "\t" << "Age Duration" << endl;
    for (int i = 0; i < excercise.size(); i++)
    {
        for (int j = 0; j < excercise[i].size(); j++)
        {
            cout << excercise[i][j] << " ";
        }

        for (int j = 0; j < benefits[i].size(); j++)
        {
            cout << benefits[i][j] << " ";
        }

        cout << age[i] << endl;
    }
    return 0;
}