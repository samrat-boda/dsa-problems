#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Recursive_binarySearch(int arr[], int start, int end, int x)
{
    if (start == end)
    {
        if (arr[start] == x)
            return start;
        else
            return -1;
    }
    else
    {
        int mid = (start + end) / 2;
        if (x == arr[mid])
            return mid;
        else if (x < arr[mid])
            return Recursive_binarySearch(arr, start, mid - 1, x);
        else
            return Recursive_binarySearch(arr, mid+1, end, x);
    }
}

int Iterative_binarySearch(int arr[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (x > arr[mid])
        {
            start = mid + 1;
        }
        else if (x < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 100;
    int n = sizeof(arr) / sizeof(arr[0]);
    // int result = Iterative_binarySearch(arr, 0, n - 1, x);
    int result = Recursive_binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
