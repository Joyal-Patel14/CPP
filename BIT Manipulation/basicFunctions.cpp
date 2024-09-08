#include <iostream>
using namespace std;

// n = 0101 = 5
// we need to get the bit at position, i = 2
// ans is 1, but indexing starts from last and having zero based indexing

// NOTE: a << 1 -> multiply by 2
//       a >> 1 -> divide by 2


int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

// n = 0101
// we need to set bit at position, i=1

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

// n = 0101
// we need to clear bit at position, i=2

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

// n = 0101
// we need to update bit at position, i=1 to 1

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return n | (value << pos);
}

int main()
{
    cout << getBit(5, 2) << endl;

    cout << setBit(5, 1) << endl;

    cout << clearBit(5, 2) << endl;

    cout << updateBit(5, 1, 1) << endl;

    return 0;
}
