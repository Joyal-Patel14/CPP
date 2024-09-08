#include <bits/stdc++.h>
using namespace std;

// Problem: Write a function that reverses a string. The input string is given as an array of characters s.

int main()
{
    int n;
    cin >> n;

    char s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << s[i] << " ";
    }

    return 0;
}
