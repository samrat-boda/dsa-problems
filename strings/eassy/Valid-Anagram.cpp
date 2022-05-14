#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

bool isAnagram(string s, string t)
{
    if(s.length() !=t.length()) return false;

    map<char,int> mp,mpp;

    for(int i=0; i<s.length(); i++)
    {
        mp[s[i]]++;
        mpp[t[i]]++;
    }
    if(mp==mpp) return true;
    else return false;
}

int main()
{

    string s = "rat", t = "car";

    isAnagram(s, t) ? cout << "yes" : cout << "no";
}