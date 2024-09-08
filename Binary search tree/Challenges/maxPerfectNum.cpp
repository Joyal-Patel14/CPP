#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Problem: For an given array and an integer K, find the maximum perfect numbers in a subarray of size K
// Perfect number: is a number if it is equal to the sum of its proper divisors except for the number itself

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isNumberPerfect(int n)
{
    int sum = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                sum += i;
            }

            else
            {
                sum += i + n / i;
            }
        }
    }

    if (sum == n && n != 1)
    {
        return true;
    }

    return false;
}

int maxSum(int arr[], int n, int k)
{
    if (n < k)
    {
        cout << "invalid values" << endl;
        return -1;
    }

    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += arr[i];
    }

    int sum = res;
    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        res = max(res, sum);
    }

    return res;
}

int maxNumbersOfPerfects(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (isNumberPerfect(arr[i]))
        {
            arr[i] = 1;
        }

        else
        {
            arr[i] = 0;
        }
    }

    return maxSum(arr, n, k);
}

int main()
{
    int arr[] = {28, 2, 3, 6, 496, 99, 8128, 24};
    int k = 4;
    int n = 8;

    cout << maxNumbersOfPerfects(arr, n, k) << endl;

    return 0;
}
