#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void itterativeReverse(int array[], int n)
{
    int start = 0, end = n - 1, temp;
    while (start < end)
    {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

void recursiveReverse(int array[], int start, int end)
{
    int temp = 0;

    if (start >= end)
        return;
    temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    recursiveReverse(array, start+1, end-1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "original array :\n";
    printArray(array, n);
    cout << "reversed array :\n";
    itterativeReverse(array, n);
    // recursiveReverse(array, 0, n-1);
    printArray(array, n);
}