#include <iostream>
using namespace std;

// pointers are the variable that stores the address of other variable

int main(){


    int a=10;
    int *aptr;
    aptr = &a;

    // cout<<*aptr<<endl; // output = address
    // cout<<aptr<<endl;  // output = address
    // cout<<&a<<endl;    // output = value stored in 'a'

    *aptr = 20;
    cout<<a<<endl;

    return 0;
}
