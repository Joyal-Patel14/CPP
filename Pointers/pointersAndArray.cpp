#include <iostream>
using namespace std;


int main(){


    int arr[]={10,20,30};
    cout<<*arr<<endl; //output = 10

    int *ptr = arr;
    for(int i=0; i<3; i++)
    {
        //cout<<*ptr<<endl;
        cout<<*(arr+i)<<endl;
        ptr++;
    }

    return 0;
}
