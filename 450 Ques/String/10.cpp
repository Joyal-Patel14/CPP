#include <bits/stdc++.h>
using namespace std;

// Problem: Print all subsequence of string.

void printSubsequence(string s, string output)
{
    if (s.empty())
    {
        cout << output << " ";
        return;
    }

    printSubsequence(s.substr(1), output + s[0]);

    printSubsequence(s.substr(1), output);
}

int main()
{
    string s;
    cin >> s;

    string output = "";

    printSubsequence(s, output);

    return 0;
}
