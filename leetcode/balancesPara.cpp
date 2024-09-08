#include <bits/stdc++.h>
using namespace std;

// PROBLEM: Check balanced pranthesis in given string is balanced or not. If they are not then return total number of brackets needed to balance the string. 

int balancedPara(string s)
{
    // With stack

    stack<char> brackets;
    int openB = 0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(') brackets.push('(');

        else
        {
            if(brackets.size() != 0) brackets.pop();

            else openB++;
        }
    }

    return brackets.size() + openB;


    // Without stack

    int closedB = 0, openB = 0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(') closedB++;

        else
        {
            if(closedB != 0) closedB--;

            else openB++;
        }
    }

    return closedB + openB;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s; cin >> s;

    cout << balancedPara(s) << endl;

    return 0;
}
