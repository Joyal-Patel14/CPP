#include <iostream>
using namespace std;

// print the numbers in increasing or decreasing order

void dec(int n)
{
    if (n == 0) // base case
    {
        return;
    }

    cout << n << " ";
    dec(n - 1);
}

void inc(int n)
{
    if (n == 0) // base case
    {
        return;
    }

    inc(n - 1);
    cout << n << " ";
}

int main()
{

    int n;
    cin >> n;

    dec(n);
    inc(n);

    return 0;
}
