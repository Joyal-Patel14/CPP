#include <bits/stdc++.h>
using namespace std;

// Problem : Write an efficient program to print all the duplicates and their counts in the input string

int32_t main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    for (pair<char, int> p : m)
    {
        // if (p.second != 1)  -> if we want just repeatative characters
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}