#include <iostream>
using namespace std;

// we have to check that the given number is in power of 2

bool ispowerof2(int n)
{
    return (n && !(n & n-1));
}


int main(){

    cout<<ispowerof2(16)<<endl;

    return 0;
}
