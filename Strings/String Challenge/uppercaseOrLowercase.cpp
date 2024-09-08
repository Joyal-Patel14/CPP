#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string str = "shjdbksgfhdbfsuyf";

    // convert into upper case

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    cout << str << endl;

    // convert into lower case

    string s = "SJHAGHDBFKSAJFH";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }

    cout << s << endl;

    // convert by inbuild function

    string s1 = "skhdgufhssgyuev";

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper); // converted to upper

    cout << s1 << endl;

    string s2 = "GFHUJETFACSBM";

    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); // converted to lower

    cout << s2 << endl;

    return 0;
}
