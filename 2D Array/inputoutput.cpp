#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m]; //input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[n][m];
        }
    }

    for (int i = 0; i < n; i++) //output
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[n][m] << " ";
        }
        cout << endl;
    }

    return 0;
}
