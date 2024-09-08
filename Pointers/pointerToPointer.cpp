#include <iostream>
using namespace std;


int main(){


    int a = 10;
    int *ptr;
    ptr = &a;

    cout<<*ptr<<endl; //output = 10

    int **q = &ptr;

    cout<<*q<<endl; // output = address of ptr
    cout<<**q<<endl; // output = 10
    


    return 0;
}
