#include <iostream>
using namespace std;

// not properly

int main()
{   
    cout<<"stage 0"<<endl;

    int n;
    cin >> n;

    cout<<"stage 1"<<endl;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"stage 2"<<endl;

    const int N = 1e6 + 2;
    int check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = 0;
    }

    cout<<"stage 3"<<endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] == 1;
        }
    }

    cout<<"stage 4"<<endl;

    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == 0)
        {
            ans = i;
            break;
        }
    }

    cout<<"stage 5"<<endl;

    cout << ans << endl;

    return 0;
}
