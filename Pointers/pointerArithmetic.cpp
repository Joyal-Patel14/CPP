#include <iostream>
using namespace std;


int main(){


    int a = 10;
    int *aptr;
    aptr = &a;

    cout<<aptr<<endl; //output = 2000(address)

    aptr++;
    cout<<aptr<<endl; //output = 2004(address increment by one int)

    aptr--;  // similarly used for decrement

    return 0;
}
