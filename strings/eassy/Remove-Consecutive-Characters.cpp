#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string S)
{
    string ans = "";
    int start = 0;
    while (start < S.length())
    {
        if (start == 0)
        {
            ans += S[start];
            start++;
        }
        else
        {
            if (S[start] == ans[ans.length() - 1])
                start++;
            else
            {
                ans += S[start];
                start++;
            }
        }
    }
    return ans;
}

int main()
{
    string S = "aabb";

    cout << removeConsecutiveCharacter(S) << endl;
    return 0;
}
