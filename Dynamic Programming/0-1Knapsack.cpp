#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array of items with their {weight, value and knapsack with weight W}. Find the maximum value of items that can be 
//          stolen and put into knapsack 
// We either have to pick full item or no item

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e3+2, MOD = 1e9+7;

int val[N], wt[N];

int dp[N][N];

int Knapsack(int n, int w)
{
    if(w <= 0)
    {
        return 0;
    }

    if(n <= 0)
    {
        return 0;
    }

    if(dp[n][w] != -1)
    {
        return dp[n][w];
    }

    if(wt[n-1] > w)
    {
        dp[n][w] = Knapsack(n-1, w);
    }

    else
    {
        dp[n][w] = max(Knapsack(n-1, w), (Knapsack(n-1, w-wt[n-1]) + val[n-1]));
    }   

    return dp[n][w]; 
}

signed main()
{
    int n;
    cin >> n;

    rep(i, 0, N)
    {
        rep(j, 0, N)
        {
            dp[i][i] = -1;
        }
    }

    rep(i, 0, n)
    {
        cin >> wt[i];
    }

    rep(i, 0, n)
    {
        cin >> val[i];
    }

    int w;
    cin >> w;

    cout << Knapsack(n, w) << endl;

    return 0;
}
