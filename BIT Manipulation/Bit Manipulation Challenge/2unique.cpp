#include <iostream>
using namespace std;

// write the program to find the two numbers in array in which two numbers are not repeated

// not properly

int setBit(int n, int pos)
{
    return ((n | (1 << pos)) != 0);
}

void unique(int arr[], int n, int x, int y)
{
    // int xorsum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     xorsum = xorsum ^ arr[i];
    // }

    // int tempxor = xorsum;
    // int setbit = 0;
    // int pos = 0;

    // while (setbit != 1)
    // {
    //     setbit = xorsum & 1;
    //     pos++;
    //     xorsum >> 1;
    // }

    // int newxor = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (setBit(arr[i], pos - 1))
    //     {
    //         newxor = newxor ^ arr[i];
    //     }
    // }

    // cout << newxor << endl;
    // cout << (tempxor ^ newxor) << endl;
    
    // return 0;


    int Xor = 0;

    for(int i=0; i<n; i++) Xor = Xor ^ arr[i];

    int set_bit_number;
    int i;
    x = 0, y = 0;

    // Get right most set bit(1) in set_bit_number
    set_bit_number = Xor & ~(Xor - 1);

    // Now divide elements in two set by comparing rightmost set bit of Xor with bit at same position in each element.
    for(i = 0; i<n; i++)
    {
        if(arr[i] & set_bit_number) x = x ^ arr[i];

        else y = y ^ arr[i];
    }

    cout << x << " " << y << endl;
}

int main()
{
    int arr[] = {2, 4, 6, 7, 4, 5, 6, 2};

    int x, y;

    unique(arr, 8, x, y);

    return 0;
}
