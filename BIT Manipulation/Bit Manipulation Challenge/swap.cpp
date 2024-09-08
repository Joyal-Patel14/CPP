#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b;
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << endl;


    return 0;
}
