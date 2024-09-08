#include <bits/stdc++.h>
using namespace std;

// Problem: Print all the permuatations of given string

int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    cout << s << " ";

    while(next_permutation(s.begin(), s.end())) {
        cout << s << " ";
    }

    return 0;
}
