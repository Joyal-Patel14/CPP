#include <iostream>
using namespace std;

int main(){

    int a = 10; // stored in stack

    int *p = new int(); // allocate memory in heap

    *p = 10;

    delete(p);  // deallocate memory from heap

    // now p is the dangling pointer because it is pointing to address where nothing is stored

    p = new int[4]; // allocete the array of size 4 and p pointing the zero element of array


    delete[]p; // delete the allocated memory of array
    p = NULL; // remove pointer
    


    return 0;
}
