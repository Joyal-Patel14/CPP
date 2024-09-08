#include <bits/stdc++.h>
using namespace std;

// Problem: Given a positive integer n, return the nth term of the count-and-say sequence.

string countAndSay(int n)
{
    if (n == 1)
    {
        return "1";
    }

    if (n == 2)
    {
        return "11";
    }

    string s = "11";

    for (int i = 3; i <= n; i++)
    {
        string t = "";
        s = s + '$';
        int cnt = 1;

        for (int j = 1; j < s.length(); j++)
        {
            if (s[j] != s[j - 1])
            {
                t = t + to_string(cnt);
                t = t + s[j - 1];
                cnt = 1;
            }

            else
            {
                cnt++;
            }
        }

        s = t;
    }

    return s;
}

int main()
{
    int n;
    cin >> n;

    string ans = countAndSay(n);

    cout << ans << endl;

    return 0;
}
