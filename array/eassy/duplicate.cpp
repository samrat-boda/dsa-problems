#include <iostream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    map<int,int> mp;

    for (int i = 0; i < nums.size(); i++)
     {
         mp[nums[i]]++;
         if(mp[nums[i]]>1)return true;
     }
     
     return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};

    if( containsDuplicate(nums))cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}