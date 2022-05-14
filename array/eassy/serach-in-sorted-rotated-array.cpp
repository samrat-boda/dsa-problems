#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//4,5,6,7,0,1,2

int search(int nums[], int start, int end, int target)
{
    while (start <=end)
    {
        int mid = (start + end ) / 2;
        if (nums[mid] == target)
            return mid;
       if(nums[start]<=nums[mid])
        {
            if (target <= nums[mid] && target >= nums[start])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (target >= nums[mid] && target <= nums[end])
            {
                start = mid +1;
            }
            else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    int nums[] = {4,5,6,7,0,1,2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 0;
    int i = search(nums, 0, n - 1, target);

    if (i != -1)
        cout << "Index: " << i << endl;
    else
        cout << "target not found";
}
