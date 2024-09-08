#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string str;

    string s1 = "fam";
    string s2 = "ily";

    s1.append(s2);      // add both the strings
    cout << s1 << endl; // output = family

    cout << s1 + s2 << endl; // output = family

    s1 = s1 + s2;
    cout << s1 << endl; // output = family

    //How to access charcter in string

    cout << s1[1] << endl; // output = a

    // How to clear string

    string abc = "dshgsg sdgyds jhgsdkasug";
    abc.clear();
    cout << abc << endl; // output = NULL

    // Compare function

    string s3 = "abc";
    string s4 = "abc";

    cout << s4.compare(s3) << endl; //output = 0

    // empty function

    string s5 = "abc";
    cout << s5 << endl;

    s5.clear();

    if (s5.empty())
    {
        cout << "string is empty" << endl;
    }

    //erase function

    string s6 = "nincompoop";

    s6.erase(3, 4);
    cout << s6 << endl; // output = ninoop

    //find function

    cout << s6.find("com") << endl; // output = 3

    //insert function

    s6.insert(2, "lol");
    cout << s6 << endl; // output = nilolncompoop

    //length or size function

    cout << s6.length() << endl; // output = 10
    cout << s6.size() << endl;   // output = 10

    for (int i = 0; i < s6.length(); i++)
    {
        cout << s6[i] << endl; // output = nincompoop
    }

    //substring of string

    string s = s6.substr(6, 4);
    cout << s << endl; // output = poop

    //string to integer function

    string s7 = "786";
    int x = stoi(s7);
    cout << x + 2 << endl; // output = 788

    //integer to string function

    int y = 786;
    cout << to_string(y) + "2" << endl; // output = 7862

    //to sort string

    string s8 = "sgfjsgakyaugdb";

    sort(s8.begin(), s8.end());
    cout << s8 << endl; // output = aabdfgggjkssuy

    return 0;
}
