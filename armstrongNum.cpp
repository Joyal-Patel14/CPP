#include <iostream>
#include <cmath>
using namespace std;


int main(){


    int n;
    cin>>n;

    int sum = 0;
    int originaln = n;

    while(n!=0)
    {
        int lastDigit = n%10;
        sum += lastDigit * lastDigit * lastDigit;
        n=n/10;
    }

    if(sum== n)
        cout<<"Armstron number"<<endl;
    

    else
        cout<<"non-armstrong number"<<endl;
    
    return 0;
}
