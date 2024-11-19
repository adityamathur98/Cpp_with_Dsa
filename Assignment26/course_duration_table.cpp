#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using Vector
    // vector<string> course{"Bachelor's Degree", "Master's Degree", "Diploma", "Certification", "Online Course", "PhD Programm", "Bootcamp", "Associate's Degree", "Intership", "Workshop"};
    // vector<float> avg_Duration{48, 24, 12, 6, 3, 60, 4, 24, 2, 1};

    // cout << "Course" << " " << "Average Duration" << "\n";
    // for (int i = 0; i < course.size(); i++)
    // {
    //     cout << course[i] << " : " << avg_Duration[i] << "\n";
    // }

    // Using Map
    map<string, float> course_duration{
        {"Bachelor's Degree", 48},
        {"Master's Degree", 24},
        {"Diploma", 12},
        {"Certification", 6},
        {"Online Course", 3},
        {"PhD Programm", 60},
        {"Bootcamp", 4},
        {"Associate's Degree", 24},
        {"Intership", 2},
        {"Workshop", 1}};

    cout << "Course" << " " << "Average Duration" << "\n";
    for (auto pair : course_duration)
    {
        cout << pair.first << " : " << pair.second << "\n";
    }
    return 0;
}