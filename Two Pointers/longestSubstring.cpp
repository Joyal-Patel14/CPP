#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Problem: Given a string s, find the length of longest substring without repeating character

int main()
{
    string s;
    cin >> s;
    vector<int> dict(256, -1);

    int maxLen = 0, start = -1;

    for (int i = 0; i < s.length(); i++)
    {
        if (dict[s[i]] > start)
        {
            start = dict[s[i]];
        }

        dict[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }

    cout << maxLen;

    return 0;
}
