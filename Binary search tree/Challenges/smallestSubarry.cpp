#include <bits/stdc++.h>
using namespace std;

// Problem: For a given array and an integer X, find the minimum subarray size for which sum > X

int smallestSubarrayWithSum(int arr[], int n, int x)
{
    int sum = 0, minLength = n + 1, start = 0, end = 0;
    while (end < n)
    {
        while (sum <= x && end < n)
        {
            sum += arr[end++];
        }

        while (sum > x && start < n)
        {
            if (end - start < minLength)
            {
                minLength = end - start;
            }

            sum -= arr[start++];
        }
    }

    return minLength;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n = 6;

    int minLength = smallestSubarrayWithSum(arr, n, x);

    if (minLength == n + 1)
    {
        cout << "No such subarray exist" << endl;
    }

    else
    {
        cout << "Smallest length of subarray is : " << minLength << endl;
    }

    return 0;
}
