#include <bits/stdc++.h>
using namespace std;

// Problem: Count the number of binary string without consecutive 1s
//          Given a positive integer N, count all possible distinct binary strings of length N such that there is no consecutive 1's.

int main()
{
    int n;
    cin >> n;

    vector<int> fib(n + 2, 0);

    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << fib[n + 1];

    return 0;
}
