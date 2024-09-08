#include <iostream>
#include <math.h>
using namespace std;

// not properly

int main()
{

    int a, b;
    cout << "enter two numbers" << endl;

    cin >> a >> b;

    for (int num = a; num <= b; num++)
    {
        int i;
        for (int i = 2; i < sqrt(num); i++)
        {
            if (num % i == 0)
            {
                break;
            }

            cout << num << endl;
        }
    }

    return 0;
}
