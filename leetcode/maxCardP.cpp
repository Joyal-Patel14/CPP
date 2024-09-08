#include <bits/stdc++.h>
using namespace std;

// PROBLEM: There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.

// In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.

// Your score is the sum of the points of the cards you have taken.

// Given the integer array cardPoints and the integer k, return the maximum score you can obtain.

int maxScore(int a[], int n, int k)
{
    int ans = 0;

    for(int i=0; i<k; i++) ans += a[i];

    int cur = ans;

    for(int i=k-1; i>=0; i--)
    {
        
        cur -= a[i];
        cur += a[n-k+i];

        ans = max(ans, cur);
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;

    int a[n];

    for(int i=0; i<n; i++) cin >> a[i];

    int k; cin >> k;

    cout << maxScore(a, n, k) << endl;

    return 0;
}