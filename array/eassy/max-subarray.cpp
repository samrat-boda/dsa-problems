#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// time complexity o(n^3);
int maxSubArray_1(vector<int> &nums)
{
    int j = 0, maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += nums[k];
            }
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}

int maxSubArray_2(vector<int> &nums)
{
    int j = 0, maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}
int maxSubArray_3(vector<int> &nums)
{
    int currentSum=0,maxSum=INT_MIN;

    for(int i=0;i<nums.size();i++)
    {
        currentSum += nums[i];
        if(currentSum>maxSum)maxSum = currentSum;

        if(currentSum<0)currentSum = 0;
    }
    return maxSum;
}

int main()
{
    vector<int> nums = {-1};
    cout << maxSubArray_1(nums)<<endl;
    cout << maxSubArray_2(nums)<<endl;
    cout << maxSubArray_3(nums)<<endl;
    return 0;
}