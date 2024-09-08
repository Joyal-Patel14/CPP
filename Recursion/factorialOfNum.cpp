#include <iostream>
using namespace std;

// find factorial of number using recursion

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    int prevFact = factorial(n - 1);

    return n * prevFact;
}

// number of trailing zeros
int trailingZeros(int n)
{
    int res = 0;

    for(int i=5; i<=n; i=i*5) res += n/i;

    return res; 
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << endl;

    cout << "Trailing zeros are: " << trailingZeros(n) << endl;

    return 0;
}
