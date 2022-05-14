#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "A man, a plan, a canal: Panama";
    int n = s.size();
    string ans="";
    for (int i = 0; i < n; i++)
    {
        if (int(s[i]) >= 65 && int(s[i]) <= 90)
           ans+= char(int(s[i]) + 32);
        else if (int(s[i]) >= 97 && int(s[i]) <= 122)
        ans+=s[i];
             
    }
    cout << ans << endl;
    return 0;
}