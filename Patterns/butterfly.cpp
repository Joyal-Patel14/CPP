#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter any Number:";
    cin >> n;
    cout << "\n\nYour Pattern is Here:\n\n";
    for (int i = 1; i <= n; i++)
    {
        cout << endl;
        for (int j = 1; j <= i; j++)
            if (j != n)
                cout << "*";
        for (int s = 1; s <= 2 * (n - i) - 1; s++)
            cout << " ";
        for (int k = i; k >= 1; k--)
            cout << "*";
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            if (i != n)
                cout << "*";
        for (int s = 1; s <= 2 * (n - i) - 1; s++)
            cout << " ";
        for (int k = i; k >= 1; k--)
            if (i != n)
                cout << "*";
        cout << endl;
    }
    return 0;
}
