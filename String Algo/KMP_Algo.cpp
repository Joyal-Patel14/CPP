#include <bits/stdc++.h>
using namespace std;

// Calculate the indices of the occurrences of string s int t.

vector<int> prefix_function(string &s)
{
    int n = s.size();
    vector<int> pi(n, 0);

    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];

        while (j > 0 and s[i] != s[j])
        {
            j = pi[j - 1];
        }

        if (s[i] == s[j])
        {
            j++;
        }

        pi[i] = j;
    }

    return pi;
}

int main()
{
    // This will cout the prefix numbers//

    // string s = "abcabcd";

    // vector<int> res = prefix_function(s);

    // for (auto i : res)
    // {
    //     cout << i << " ";
    // }

    // cout << endl;

    // How to use prefix function //

    string s = "na";
    vector<int> prefix = prefix_function(s);
    string t = "apnacollege";

    int pos = -1;
    int i(0), j(0); // Initialize i and j = 0

    while (i < t.size())
    {
        if (t[i] == s[j])
        {
            j++;
            i++;
        }

        else
        {
            if (j != 0)
            {
                j = prefix[j - 1];
            }

            else
            {
                i++;
            }
        }

        if (j == s.size())
        {
            pos = i - s.size();
            break;
        }
    }

    cout << pos;

    return 0;
}