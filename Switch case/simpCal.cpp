#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    cout << "Enter numbers" << endl;
    cin >> n1 >> n2;
    cout << "Enter operator" << endl;
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 * n2 << endl;
        break;
        
    case '/':
        cout << n1 / n2 << endl;
        break;

    case '%':
        cout << n1 % n2 << endl;
        break;

    default:
        cout << "operator not found" << endl;
    }

    return 0;
}
