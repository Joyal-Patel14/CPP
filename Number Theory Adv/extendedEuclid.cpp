#include <bits/stdc++.h>
using namespace std;
#define int long long

// Diophentine Equation: These are the polynomial equations for which integral solution exists.
// Example: 3x + 7y = 1 or x^2 - y^2 = z^3
// ax + by = gcd(a, b);
// gcd(d, 0) = d;

// ax + 0 = a -> x = 1
// y = 0

const int N = 1e5 + 2, MOD = 1e9 + 7;

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

signed main()
{
    int a, b;
    cin >> a >> b;

    triplet ans = extendedEuclid(a, b);

    cout << ans.gcd << " " << ans.x << " " << ans.y << endl;

    return 0;
}
