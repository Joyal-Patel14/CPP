#include <iostream>
using namespace std;

// write the program to find unique number in array where every other elements repeats twice.

int unique(int arr[], int n)
{
    int xorsum = 0;

    for(int i=0; i<n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }

    return xorsum;
}

int main(){

    int arr[] = {1,2,3,4,5,4,3,2,1};
    cout << unique(arr,9) << endl;
    
    return 0;
}
