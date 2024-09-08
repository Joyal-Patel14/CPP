#include <iostream>
using namespace std;

// write program to count ones in binary of number

// To find number of digits = log2(n) + 1

int noOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1); // convert last significant set bit to 0
        count++;
    }

    return count;
}

int main()
{

    cout << noOfOnes(5) << endl;

    return 0;
}
