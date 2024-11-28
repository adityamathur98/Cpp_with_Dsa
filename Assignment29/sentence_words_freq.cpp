#include <bits/stdc++.h>
using namespace std;

map<string, int> getFreq(string s)
{
    map<string, int> word_Mp;
    vector<string> words;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        words.push_back(word);
    }

    for (auto it : words)
    {
        word_Mp[it]++;
    }

    return word_Mp;
}

int main()
{
    /*
        Write a function that takes a sentence as input and returns a frequency array (or dictionary)
        for the occurrences of each word in the sentence.
    */
    string s = "Hello My Name is Hello";
    map<string, int> mp = getFreq(s);

    for (auto pair : mp)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}