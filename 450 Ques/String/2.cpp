#include <bits/stdc++.h>
using namespace std;

// Problem: Given a string S, check if it is palindrome or not.

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int flag = 0;

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "String is palindrome" << endl;
    }

    else
    {
        cout << "String is not palindrome" << endl;
    }

    return 0;
}
