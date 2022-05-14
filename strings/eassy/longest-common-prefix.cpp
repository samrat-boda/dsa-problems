#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//o(n^2)
string longestCommonPrefix(vector<string> &strs)
{

    int min = strs[0].length();
    string ans="";

    for (int i = 1; i < strs.size(); i++)
        if (strs[i].length() < min)
            min = strs[i].length();

     for (int i = 0; i < min; i++)
     {
         char c=strs[0][i];
         for (int j = 1; j < strs.size(); j++)
         {
             if(strs[j][i]!=c)
              return ans;
         }
            ans+=c;
     }
     return ans;
}

//
// string longestCommonPrefix_2(vector<string> &strs)
// { 
// }


int main()
{
    vector<string> strs= { "apple", "applo", "apploehbd" };

    cout << longestCommonPrefix(strs) << endl;
    return 0;
}
