#include <bits/stdc++.h>
using namespace std;

// Problem: Given a string S, find the longest palindromic substring in S.

void longestSubPalindrome(string s)
{
    int start = 0;

    int len = s.size();

    int maxLength = 1;

    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            int flag = 1;

            for (int k = 0; k < (j - i + 1) / 2; k++)
            {
                if (s[i + k] != s[j - k])
                {
                    flag = 0;
                }
            }

            if (flag == 1 && (j - i + 1) > maxLength)
            {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    for (int i = start; i <= start + maxLength - 1; ++i)
    {
        cout << s[i];
    }
}

int main()
{
    string s;
    cin >> s;

    longestSubPalindrome(s);

    return 0;
}
