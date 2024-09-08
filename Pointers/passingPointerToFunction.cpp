#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a = 2, b = 4;
    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr); // we can directly sent &a and &b without making pointer

    cout << a << " " << b << endl;

    return 0;
}
