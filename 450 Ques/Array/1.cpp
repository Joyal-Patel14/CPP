#include <bits/stdc++.h>
using namespace std;

// Problem: Reverse array or string

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=n-1; i>=0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}

// EDITORIAL

void rvereseArray(int arr[], int start, int end) // Using function
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rvereseArray(int arr[], int start, int end) // Using recursion
{
    if (start >= end)
    return;
     
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}
