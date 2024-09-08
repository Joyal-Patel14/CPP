#include <bits/stdc++.h>
using namespace std;

// Problem: Smallest subarray with sum greater than given value

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int minLen = n - 1;

    for (int i = 0; i < n; i++)
    {
        int currSum = a[i];

        if (currSum > k)
        {
            cout << "1" << endl;
            return 1;
        }

        for (int j = i + 1; j < n; j++)
        {
            currSum += a[j];

            if (currSum > k && (j - i + 1) < minLen)
            {
                minLen = j - i + 1;
            }
        }
    }

    cout << minLen << endl;

    return 0;
}
