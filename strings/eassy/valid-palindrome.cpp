#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    int n = s.size();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (int(s[i]) >= 65 && int(s[i]) <= 90)
            ans += char(int(s[i]) + 32);
        else if (int(s[i]) >= 97 && int(s[i]) <= 122|| int(s[i]) >= 48 && int(s[i]) <= 57)
            ans += s[i];
    }
    if(ans.size() == 0)return true; 
    int start = 0, end = ans.size() - 1;

    while (start <= end)
    {
        if (ans[start] != ans[end])
            return false;
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string s = "0P";
    isPalindrome(s) ? cout << "yes" : cout << "no";
    return 0;
}