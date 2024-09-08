#include <bits/stdc++.h>
using namespace std;

// Problem: Find the union or intersection of two array

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    sort(a, a+n);
    sort(b, b+m);

    int i = 0, j = 0;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            cout << a[i++] << " ";
        }

        else if(b[j] < a[i])
        {
            cout << b[j++] << " ";
        }

        else
        {
            cout << b[j++] << " ";
            i++;
        }
    }

    while(i < n)
    {
        cout << a[i++] << " ";
    }

    while(j < m)
    {
        cout << b[j++] << " ";
    }

    return 0;
}


// By using set data structure

#include <bits/stdc++.h>
using namespace std;

// Set data type: The C++ STL set is a data structure used to store the distinct value in ascending or descending order.

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    set <int> s;

    for(int i=0; i<n; i++)
    {
        s.insert(a[i]);
    }

    for(int i=0; i<m; i++)
    {
        s.insert(b[i]);
    }

    for(auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }

    return 0;
}

