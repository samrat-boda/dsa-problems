#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printDuplicates(string s)
{
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }

    for (auto i : mp)
    {
        if(i.second>1)
        cout << i.first << "   " << i.second<< endl;
              
    }
}

int main()
{
    string s = "geeksforgeeks";
    cout << "Input string is " << s << endl;
    printDuplicates(s);
}