#include <bits/stdc++.h>
using namespace std;

// Problem: Split the binary string into substrings with equal number of 0s and 1s

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int count0 = 0, count1 = 0;
    int cnt = 0;

    for(int i=0; i<n; i++) {
        if(s[i] == '0') {
            count0++;
        }
        
        else {
            count1++;
        }

        if(count0 == count1) {
            cnt++;
        }
    }

    if(count0 != count1) {
        cout << "-1" << endl;
        return -1;
    }

    cout << cnt << endl;

    return 0;
}
