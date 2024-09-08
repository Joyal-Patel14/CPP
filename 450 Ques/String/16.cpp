#include <bits/stdc++.h>
using namespace std;

// Problem: Balanced parathensis problem

// By simple method
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    int count = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            count++;
        }
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            count--;
        }
    }

    if (count == 0)
    {
        cout << "Balanced parathesis" << endl;
    }
    else
    {
        cout << "Unbalanced parathesis" << endl;
    }

    return 0;
}

// Using stack
bool balancedParetheses(string s)
{
    stack<char> st;
    char t;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
            continue;
        }

        if (st.empty())
        {
            return false;
        }

        switch (s[i])
        {
        case ')':
            t = st.top();
            st.pop();
            if (t == '[' || t == '{')
                return false;
            break;

        case ']':
            t = st.top();
            st.pop();
            if (t == '(' || t == '{')
                return false;
            break;

        case '}':
            t = st.top();
            st.pop();
            if (t == '[' || t == '(')
                return false;
            break;
        }
    }

    return (st.empty());
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    if (balancedParetheses(s))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Unbalanced" << endl;
    }

    return 0;
}
