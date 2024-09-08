#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int mult;
    mult = 0;

    for(int i = 0; i<=10; i++)
    {
        mult = n*i;
        cout<<n<<" * "<<i<<" = "<<mult<<endl;
    }
    return 0;
}