#include <bits/stdc++.h>
using namespace std;
#define int long long

// Consider the equation (A * B) % m = 1
// Multiplicative modulo inverse exists only if A and m ae coprime i.e gcd(A, m) = 1.

const int N = 1e5+2, MOD = 1e9+7;

struct triplet
{
    int x, y, gcd;
};

triplet extendedEuclid(int a, int b)
{
    if (b == 0)
    {
        triplet ans;
        ans.x = 1;
        ans.gcd = a;
        ans.y = 0;

        return ans;
    }

    triplet smallans = extendedEuclid(b, a % b);

    triplet ans;
    ans.gcd = smallans.gcd;
    ans.x = smallans.y;
    ans.y = smallans.x - (a / b) * smallans.y;

    return ans;
}

int multiplicativeModuloInverse(int a, int m)
{
    triplet temp = extendedEuclid(a, m);

    return temp.x;
}

signed main()
{
    int a, m;
    cin >> a >> m;

    cout << multiplicativeModuloInverse(a, m) << endl;
    
    return 0;
}
