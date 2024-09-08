#include <bits/stdc++.h>
using namespace std;

// Problem: Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

bool checkPalindrome(int n)
{
    int temp = n;
    int rem, rev = 0;

    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (rev == n)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (checkPalindrome(a[i]) == 1)
        {
            cnt++;
        }
    }

    if (cnt == n)
    {
        cout << "1" << endl;
    }

    else
    {
        cout << "0" << endl;
    }

    return 0;
}
