#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int current = 0;
    for (int i = 0; i < n - 1; i++)
    {
        current = 0;
        for (int j = i; j < n - 1; j++)
        {
            current += arr[j];
            cout << current << " ";
        }
    }

    return 0;
}
