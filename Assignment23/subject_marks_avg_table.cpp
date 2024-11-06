#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<vector<string>>> subject{
        {{"Hindi", "Maths"},
         {"English", "Science"}},
        {{"PoliticalScience", "Geography"},
         {"Sanskrit", "SocialStudies"}}};

    vector<vector<vector<float>>> marks{
        {{98.50, 75.25},
         {48.50, 56.50}},
        {{78.50, 46.50},
         {42.50, 98.50}}};

    vector<vector<float>> average_marks;

    // To get avg marks of marks and stored in average_marks vector and make 2d vector
    for (int i = 0; i < marks.size(); i++)
    {
        vector<float> values;
        for (int j = 0; j < marks[i].size(); j++)
        {
            float sum_of_num = 0;
            for (int k = 0; k < marks[i][j].size(); k++)
            {
                sum_of_num += marks[i][j][k];
            }
            float avg = sum_of_num / marks[i][j].size();
            values.push_back(avg);
        }
        average_marks.push_back(values);
        values.clear();
    }

    // Display subjects , marks, average marks in formatted output
    for (int i = 0; i < subject.size(); i++)
    {
        cout << i + 1 << " ";
        for (int j = 0; j < subject[i].size(); j++)
        {
            cout << "[ ";
            for (int k = 0; k < subject[i][j].size(); k++)
            {
                cout << subject[i][j][k] << " ";
            }
            cout << "] ";
        }

        for (int j = 0; j < marks[i].size(); j++)
        {
            cout << "[ ";
            for (int k = 0; k < marks[i][j].size(); k++)
            {
                cout << marks[i][j][k] << " ";
            }
            cout << "] ";
        }

        for (int j = 0; j < average_marks.size(); j++)
        {
            cout << "[" << average_marks[i][j] << "]";
        }
        cout << "\n\n";
    }
    return 0;
}