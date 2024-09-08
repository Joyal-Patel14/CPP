#include <bits/stdc++.h>
using namespace std;

// Problem: Check if a string is a valid shuffle of two other strings

bool checkLength(string s1, string s2, string res)
{
    if (s1.length() + s2.length() == res.length())
    {
        return true;
    }

    return false;
}

string sortString(string s)
{
    int n = s.length();

    char charArray[n];

    strcpy(charArray, s.c_str());

    sort(charArray, charArray + n);

    string res;

    for (int i = 0; i < n; i++)
    {
        res = res + charArray[i];
    }

    return res;
}

bool shuffleCheck(string s1, string s2, string res)
{
    s1 = sortString(s1);
    s2 = sortString(s2);
    res = sortString(res);

    int i = 0, j = 0, k = 0;

    while (k != res.length())
    {
        if (i < s1.length() && s1[i] == res[k])
        {
            i++;
        }

        else if (j < s2.length() && s2[j] == res[k])
        {
            j++;
        }

        else
        {
            return false;
        }

        k++;
    }

    if (i < s1.length() || j < s2.length())
    {
        return false;
    }

    return true;
}

int main()
{
    string s1 = "XY";
    string s2 = "12";

    string results[] = {"1XY2", "Y1X2", "Y21XX"};

    for (string res : results)
    {
        if (checkLength(s1, s2, res) == true && shuffleCheck(s1, s2, res) == true)
        {
            cout << res << " is valid shuffle of " << s1 << " and " << s2 << endl;
        }

        else
        {
            cout << res << " is not a valid shuffle of " << s1 << " and " << s2 << endl;
        }
    }

    return 0;
}
