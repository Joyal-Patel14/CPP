// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n; cin >> n;

//         int a[n];

//         for (int i = 0; i < n; i++) cin >> a[i];

//         for (int i = 0; i < n; i++)
//         {
//             int size;
//             cin >> size;
//             string s;
//             cin >> s;

//             for (int j = 0; j < s.size(); j++)
//             {
//                 if (s[j] == 'U')
//                 {
//                     if (a[i] == 0) a[i] = 9;

//                     else a[i]--;
//                 }

//                 else
//                 {
//                     if (a[i] == 9) a[i] = 0;

//                     else a[i]++;
//                 }
//             }
//         }

//         for (int i = 0; i < n; i++) cout << a[i] << " ";
//         cout << endl;

//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef map<int, int> mii;
typedef set<int> si;
typedef set<pair<int, int>> spii;
typedef queue<int> qi;

bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z')) return 1;

    return 0;
}

char toLower(char ch)
{
    if ((ch >= 'a' || ch <= 'z') || (ch >= '0' || ch <= '9')) return ch;

    else {
        char temp = tolower(ch);
        return temp;
    }
}

bool checkPalindrome(string a)
{
    int s = 0, e = a.length() - 1;

    while (s <= e)
    {
        if (a[s] != a[e]) return 0;

        else s++; e--;
    }

    return 1;
}

bool isPalindrome(string s)
{
    string temp = "";

    for (int i = 0; i < s.length(); i++) if (isValid(s[i])) temp.push_back(s[i]);

    for (int i = 0; i < temp.length(); i++) temp[i] = toLower(temp[i]);

    return checkPalindrome(temp);
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; cin >> s;

    cout << isPalindrome(s) << endl;

    return 0;
}
