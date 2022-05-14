#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> temp;
        for(int i=0;i<s.length();i++)
        {
            if(temp.empty())
            {
                temp.push(s[i]);
            }
            else if((temp.top()=='('&& s[i]==')')  ||  (temp.top()=='{' && s[i]=='}')  ||  (temp.top()=='[' && s[i]==']'))
            {
                temp.pop();
            }
            else
            {
                temp.push(s[i]);
            }
        }
        if(temp.empty())
        {
            return true;
        }
        return false;
}

int main()
{
    string s = "(])";

    isValid(s) ? cout << "yes" : cout << "no";
    return 0;

    return 0;
}