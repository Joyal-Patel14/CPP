#include <bits/stdc++.h>
using namespace std;

// prints the prime no in given range
void primeSieve(int n)
{
    // bool prime[n+1] = {true};
    vector<bool> prime(n+1, true);

    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        for (int j = 2 * i; j <= n; j += i)
        {
            prime[j] = false;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            cout << i << " ";
        }   
    }

    cout << endl;
}

int main()
{
    int n; cin>>n;

    primeSieve(n);
    
    return 0;
}
