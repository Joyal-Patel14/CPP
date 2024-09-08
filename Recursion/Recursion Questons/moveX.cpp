#include <iostream>
using namespace std;

// move all 'x' in the end of the string

string moveallX(string s)
{
    if (s.length() == 0) // base case
    {
        return "";
    }

    char ch = s[0];
    string ans = moveallX(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }

    return ch + ans;
}

int main()
{

    cout << moveallX("axdgxhdgtxxhajyrxkshx") << endl;

    return 0;
}
