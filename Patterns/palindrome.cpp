#include <iostream>
using namespace std;


int main(){


    int n;
    cin >> n;

    int i;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }

        for(int k=i; k>=1; k--)
        {
            cout<<k<<" ";
        }

        for(int j=2; j<=i; j++)
        {
            cout<<j<<" ";
        }

        cout<<endl;

    }

    return 0;
}
