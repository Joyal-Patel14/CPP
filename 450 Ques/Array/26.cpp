#include <bits/stdc++.h>
using namespace std;

// Problem: Maximum profit by buying and selling a stock almost twice

// int main()
// {
//     int n;
//     cin >> n;

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int mpst = 0; // this store the max profit if share is mandatory to sell today
//     int min = a[0];

//     int max_profit_till_today[n]; // This is an array to store max profit till today at each element

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < min)
//         {
//             min = a[i];
//         }

//         mpst = a[i] - min;

//         if (mpst > max_profit_till_today[i - 1])
//         {
//             max_profit_till_today[i] = mpst;
//         }

//         else
//         {
//             max_profit_till_today[i] = max_profit_till_today[i - 1];
//         }
//     }

//     int mpbt = 0; // this stores the max profit if we buy today
//     int max = a[n - 1];

//     int max_profit_after_today[n]; // This store the max profit we can make after buy today and sell in future

//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }

//         mpbt = max - a[i];

//         if (mpbt > max_profit_after_today[i + 1])
//         {
//             max_profit_after_today[i] = mpbt;
//         }

//         else
//         {
//             max_profit_after_today[i] = max_profit_after_today[i + 1];
//         }
//     }

//     int ans = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (max_profit_after_today[i] + max_profit_till_today[i] > ans)
//         {
//             ans = max_profit_after_today[i] + max_profit_till_today[i];
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }

int maxProfit(vector<int> &a)
{
    int n = a.size();

    int dp[n];

    for(int i=0; i<n; i++)
    {
        dp[i] = 0;
    }

    int ma = a[n-1];
    int mi = a[0];

    for(int i=n-2; i>=0; i--)
    {
        if(a[i] > ma)
        {
            ma = a[i];
        }

        dp[i] = max(dp[i+1], ma - a[i]);
    }

    for(int i=1; i<n; i++)
    {
        if(a[i] < mi)
        {
            mi = a[i];
        }

        dp[i] = max(dp[i-1], dp[i] + (a[i] - mi));
    }

    return dp[n-1];
}

int main()
{
    vector<int> a;

    for(int i=0; i<a.size(); i++)
    {
        cin >> a[i];
    }

    cout << maxProfit(a) << endl;

    return 0;
}
