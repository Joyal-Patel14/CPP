#include <iostream>
using namespace std;

// replace pi in string with 3.14

void replacePi(string s)
{
    if (s.length() == 0) // base case
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePi(s.substr(2));
    }

    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}

int main()
{

    replacePi("pipppiipiippipppi");

    return 0;
}
