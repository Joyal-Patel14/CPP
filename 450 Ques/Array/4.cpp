#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array which only consists 0, 1, and 2. Sort array without using any sorting algo

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high)
    {
        switch (a[mid])
        {
            case 0:
            swap(a[low++], a[mid++]);
            break;
            
            case 1:
            mid++;
            break;
            
            case 2:
            swap(a[mid], a[high--]);
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}