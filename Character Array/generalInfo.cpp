#include <iostream>
using namespace std;

int main()
{

    char arr[100] = "joyal";
    int i = 0;

    while (arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }

    //input
    char arr[100];
    cin>>arr;

    cout<<arr;

    return 0;
}
