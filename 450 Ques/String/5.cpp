#include <bits/stdc++.h>
using namespace std;

// Problem: A Program to check if strings are rotations of each other or not

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    string temp = s1 + s1;

    if (s1.length() != s2.length())
    {
        cout << "Strings are not rotation of each other" << endl;
    }

    if (temp.find(s2) != string::npos)
    {
        cout << "Strings are rotation of each other" << endl;
    }

    return 0;
}